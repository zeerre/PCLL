#!/usr/bin/python3
#########################################################################
# File Name: urls.py
# Author:GeekBear
# mail:zeerre98988@gmail.com
# Created And Modified Time: ====2023-06-27  21-04-17====
#########################################################################

from django.urls import path
from . import views

urlpatterns = [
        path("",views.index,name="index"),
]
