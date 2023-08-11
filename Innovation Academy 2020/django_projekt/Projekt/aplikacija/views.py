from django.shortcuts import render

# Create your views here.
def index(request):
    return render(request, 'index.html')
def druga(request):
    return render(request,'druga.html')
def treca(request):
    print(request.POST['username'])
    print(request.POST['password'])
    return render(request,'treca.html')
