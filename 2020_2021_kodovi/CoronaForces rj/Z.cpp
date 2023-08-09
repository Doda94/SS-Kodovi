#include<algorithm>
#include<iostream>
#include<vector>
#include<deque>
#include<cmath>
#include<map>
#define MAX (1<<16)
 
using namespace std;
 
int nBlockSize;
 
struct sQuery {
	int l, r, index;
	bool operator<(const sQuery& pdata) const {
		if (l / nBlockSize != pdata.l / nBlockSize) { return l / nBlockSize < pdata.l / nBlockSize; }
		return l / nBlockSize % 2 ? r > pdata.r : r < pdata.r;
	}
};
 
vector<sQuery> vQueries;
map<string, int> mapCompress;
int nCompress;
 
int arr[MAX], ans[MAX], tree[MAX*2];
deque<int> values[MAX];
 
void update(int k, int x) {
	k += MAX;
	tree[k] = x;
	for (k /= 2; k >= 1; k /= 2)
		tree[k] = max(tree[2 * k], tree[2 * k + 1]);
}
 
int main() {
 
	int n, q, l, r;
 
	cin >> n >> q;
 
	for (int i = 1; i <= n; i++) {
		string code;
		cin >> code;
		if (mapCompress[code] == 0) mapCompress[code] = ++nCompress;
		arr[i] = mapCompress[code];
	}
 
	vQueries.reserve(q);
 
	for (int i = 0; i < q; i++) {
		cin >> l >> r;
		vQueries.push_back({ l,r,i });
	}
 
	nBlockSize = sqrt(n);
	sort(vQueries.begin(), vQueries.end());
 
	int left = 1;
	int right = 0;
	for (int i = 0; i < vQueries.size(); i++) {
		int ql = vQueries[i].l;
		int qr = vQueries[i].r;
		while (right < qr) {
			right++;
			values[arr[right]].push_front(right);
			update(arr[right], values[arr[right]].front() - values[arr[right]].back());
		}
		while (left < ql) {
			values[arr[left]].pop_back();
			if (!values[arr[left]].empty()) update(arr[left], values[arr[left]].front() - values[arr[left]].back());
			else update(arr[left], 0);
			left++; 
		}
		while (left > ql) {
			left--;
			values[arr[left]].push_back(left);
			update(arr[left], values[arr[left]].front() - values[arr[left]].back());
		}
		while (right > qr) {
			values[arr[right]].pop_front();
			if (!values[arr[right]].empty()) update(arr[right], values[arr[right]].front() - values[arr[right]].back());
			else update(arr[right], 0);
			right--;
		}
		ans[vQueries[i].index] = tree[1];
	}
 
	for (int i = 0; i < q; i++) cout << ans[i] << "\n";
 
	return 0;
}
