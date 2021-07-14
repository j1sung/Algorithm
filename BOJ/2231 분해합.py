"""
author : Ahn Ji Sung
github : https://github.com/j1sung
e-mail : dalssagi00@gmail.com
title : 분해합
"""
'''
분해합: 더 큰수 -> 각 자리의 숫자들의 합을 생성자에 더한 수
가장 작은 생성자를 구하시오.

참고! 각 자리숫자를 분리하는 방법 -> https://go-hard.tistory.com/96
'''
'''
input -> 123
solution-> N = M + sum(map(int, str(M))
           list_n.append(M) 모든 생성자 다 list에 넣기
           list_n에서 가장 작은 수 비교해서 구하고 출력
           
답지 solution -> 브루트포스 알고리즘이므로 하나씩 다 거쳐서 간다는 마인드를 가지고 처음부터 돌린다.(완전탐색)
'''

N = int(input())
result = 0

for i in range(1, N+1):
    A = list(map(int, str(i)))
    result = i + sum(A)
    if result == N:
        print(i)
        break
    if i == N:
        print(0)