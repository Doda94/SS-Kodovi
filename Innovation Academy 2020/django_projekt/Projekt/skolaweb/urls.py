from django.urls import path
from . import views
urlpatterns = [
    path('',views.index, name='index'),
    path('listaj',views.listaj, name='listaj'),
    path('dodaj',views.dodaj, name='dodaj'),
    path('obrisi',views.obrisi, name='obrisi'),
    path('updateaj',views.updateaj, name='updateaj'),
    path("ddodaj",views.dodajpost,name='dodajpost'),
    path("izbrisi",views.izbrisipost, name='izbrisipost'),
    path('update',views.updateajpost, name='updateajpost'),
]