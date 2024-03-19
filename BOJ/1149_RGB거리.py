"""
author : Ahn Ji Sung
github : https://github.com/j1sung
e-mail : dalssagi00@gmail.com
title : RGB거리
description : DP(다이나믹 프로그래밍)
"""

'''
빨강 = r, 초록 = g, 파랑 = b
1 = r
2 = g 이렇게 두개는 6개
3 =
'''

'''
N = int(input())
R, G, B = [], [], []

for _ in range(N):
    R.append(int(input()))
    G.append(int(input()))
    B.append(int(input()))
'''

'''
N = int(input())

# 입력, RGB 배열 설정
R, G, B = [], [], []

# 일단 이거 오류뜸!
for i in range(N):
    R[i], G[i], B[i] = map(int, input().split())

# 알고리즘 - 모든 경우의 수를 구해서 최종 합이 최솟값인 것 고르기
for i in range(3):
    for j in range(3):
        R[]

# 중간에 알고리즘 전체 수정!!
# 배열 이차함수로 정하기
array = [[0]*3 for i in range(N)]

for i in range(N):
    array[i] = list(map(int, input().split()))

for i in range(N):
    for j in range(3):
        if array[i][j]: # 아니 여기서 배열중에서 각 줄마다 한개를 고르는데
                        # 다음줄은 다른 색으로 고르니까 나머지 2개중에 하나를 골라서
                        # 쭉 그 값을 더해서 최솟값인거만 비교로 추려내면 되는데 안되네..
'''
# 답지를 참고해서 다시 해보자!
# 똑같이 2차원 리스트를 만드는데 우선 1차원 리스트를 만들고 for문으로 append안에 list(map())을
# 써서 2차원으로 만들어낸다!
N = int(input())
p = []
for i in range(N):
    p.append(list(map(int, input().split())))
# 일단 여기까지는 할 수 있었다.

for i in range(1, N):
    p[i][0] = min(p[i-1][1], p[i-1][2]) + p[i][0]
    p[i][1] = min(p[i-1][0], p[i-1][2]) + p[i][1]
    p[i][2] = min(p[i-1][0], p[i-1][1]) + p[i][2]
print(min(p[N-1][0], p[N-1][1], p[N-1][2]))
# 이 부분의 이해가 어려웠다.
# 우선 1번 행 부터 시작해서 색 하나를 선택하고 그 이전행들에서 중복되지 않는 색 중에 비용이 최솟값인
# 색을 골라서 하나씩 더해놓는다. 그렇게 마지막 N행까지 반복하여 와서는 마지막에 전체중에서 제일 최솟값인
# 비용이 드는 것은 n-1번째 인덱스에 해당하는(N번째 행) 3가지 비용이 저장된 색 중 최솟값을 비교해서
# 가장 작은 값을 출력하기만 하면 된다.
