"""
author : Ahn Ji Sung
github : https://github.com/j1sung
e-mail : dalssagi00@gmail.com
title : 블랙잭
description : 브루트포스 알고리즘
"""
'''
카드의 개수 N과 딜러가 정해주는 수 M이 주어지면 N장의 카드중 
3개를 골라 M과 최대한 가까운 수 출력
'''
'''
여기서 N개의 숫자가 M보다 작아야 한다는 규칙이 없어서 큰거부터 찾아가든 
작은거부터 찾아가든 의미가 없어보임
'''
# 완전탐색으로 해보자(그냥 인덱스 순서대로 다 더해보고 가장 가깝고 큰 수 찾기)

N, M = map(int, input().split())
num = list(map(int, input().split()))
list_n = []
i = 0
j = i+1
k = j+1
result = 0

while True:
    list_n.append(num[i] + num[j] + num[k])

    if k == N-1:
        if j == N-2:
            if i == N-3:
                break
            i += 1
            j = i+1
            k = j+1
            continue
        j += 1
        k = j+1
        continue

    if k != N-1:
        k += 1

for i in list_n:
    if i<=M and result < i:
        result = i

print(result)
