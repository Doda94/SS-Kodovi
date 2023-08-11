from django.urls import path
from . import views
urlpatterns = [
    path('',views.index, name='index'),
    path('druga',views.druga, name='druga'),
    path('treca',views.treca, name='treca'),
]