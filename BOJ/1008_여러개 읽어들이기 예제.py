# https://velog.io/@yeseolee/Python-%ED%8C%8C%EC%9D%B4%EC%8D%AC-%EC%9E%85%EB%A0%A5-%EC%A0%95%EB%A6%ACsys.stdin.readline

"""
author : Ahn Ji Sung
github : https://github.com/j1sung
e-mail : dalssagi00@gmail.com
title : 여러개 읽어들이기
description : 수학, 구현, 사칙연산
"""

''' split()은 문자열을 나눠주는 함수입니다.
괄호 안에 특정 값을 넣어주면 그 값을 기준으로 문자열을 나누고,
아무 값도 넣어주지 않으면 공백(스페이스, 탭, 엔터 등)을 기준으로 나눕니다. '''

# import sys

# T = int(input()) #Test case
# for i in range(T):
#         a,b = map(int, sys.stdin.readline().split())
#         print(a+b)
# 반복문을 이용해서 여러변수에 값을 입력할 때, input은 시간초과를 발생시킬 수 있다.
# 따라서 sys.stdin.readline()을 사용해서 읽어들여야 시간을 단축시킬 수 있다.

import sys
a, b = map(int, sys.stdin.readline().split()) #중요!!!
print(a/b)

# 리스트에 입력할 때,
# import sys
# data = list(map(int, sys.stdin.readline().split()))

# a, b = map(int, input().split( ))
# print(a/b)

# a,b=input().split()
# print(int(a)/int(b))