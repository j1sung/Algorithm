"""
author : Ahn Ji Sung
github : https://github.com/j1sung
e-mail : dalssagi00@gmail.com
title : 직사각형에서 탈출
description : 수학, 기하학
"""
'''
x,y,w,h = map(int, input().split())

if abs(w-x) < abs(x):
    if abs(h-y) < abs(y):
        if abs(w-x) < abs(h-y):
            print(abs(w-x))
        elif abs(w-x) > abs(h-y):
            print(abs(h-y))
    elif abs(h-y) > abs(y):
        if abs(w - x) < abs(y):
            print(abs(w - x))
        elif abs(w - x) > abs(y):
            print(abs(y))
elif abs(w-x) > abs(x):
    if abs(h - y) < abs(y):
        if abs(x) < abs(h - y):
            print(abs(x))
        elif abs(x) > abs(h - y):
            print(abs(h - y))
    elif abs(h - y) > abs(y):
        if abs(x) < abs(y):
            print(abs(x))
        elif abs(x) > abs(y):
            print(abs(y))
'''

x,y,w,h = map(int, input().split())
print(min(abs(w-x), abs(h-y), abs(x), abs(y)))
