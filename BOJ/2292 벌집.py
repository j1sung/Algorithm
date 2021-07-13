'''
1층부터(1층 포함) 최소의 이동으로 원하는 방으로 가는 이동 거리 구하기
'''
'''
6
12
18
'''
'''
N = int(input())
count = 1

while N>0:
    if N == 1:
        break
    N -= 6*count
    count += 1
    if N == 1:
        break

print(count)
'''

N = int(input())
count = 1

while N>1:
    N -= 6*count
    count += 1

print(count)