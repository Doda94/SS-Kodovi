#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

const int N = 1055;

const int px[4] = {1, 0, -1, 0};
const int py[4] = {0, 1, 0, -1};

int n, m, k, mx = 0;

int p[N][N], dp[N][N], sol = 0, ans[N * N];
vector < int > v[N * N];

int main(){
    memset(dp, -1, sizeof(dp));
    scanf("%d%d%d", &n, &m, &k);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            scanf("%d", &p[i][j]);
            mx = max(mx, p[i][j]);
            v[p[i][j]].push_back(i * m + j);
        }
    }
    for(int i = mx; i >= 1; i--){
        for(int j = 0;j<(int)v[i].size();j++){
            int x = v[i][j] / m, y = v[i][j] % m;
            for(int k = 0;k<4;k++){
                int nx = x + px[k], ny  = y + py[k];
                if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                if(p[nx][ny] <= p[x][y]) continue;
                dp[x][y] = max(dp[x][y], dp[nx][ny] + 1);
            }
            dp[x][y] = max(dp[x][y], 1);
            sol = max(sol, dp[x][y]);
        }
        ans[i] = sol;
    }
    for(int i = 1;i<=k;i++){
        printf("%d\n", ans[i]);
    }
}
