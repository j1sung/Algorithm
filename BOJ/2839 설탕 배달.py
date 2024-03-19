"""
author : Ahn Ji Sung
github : https://github.com/j1sung
e-mail : dalssagi00@gmail.com
title : 설탕 배달
description : 수학, 다이나믹 프로그래밍, 그리디 알고리즘
"""
'''
- N킬로그램 배달
- 현재는 3, 5킬로그램 봉지가 있다.
- N이 정해지면 3과 5킬로그램 봉지를 활용해서 N을 맞추는데 
가장 적은 봉지의 개수 출력
- 정확하게 N을 만들 수 없다면 -1을 출력

N = 3*i + 5*j
'''
# 실패한 내 코드
'''
N = int(input())
count = 0
flag = 0 # 기본적으로 돌아가는 flag 0
M = N

# 3을 제곱하면 N이 나오느냐? -> flag 1
while True:
    if N % 3 != 0:
        N = M
        break
    N /= 3
    if N == 1:
        flag = 1

# 5를 제곱하면 N이 나오느냐? -> flag 2
while True:
    if N % 5 != 0:
        N = M
        break
    N /= 5
    if N == 1:
        flag = 2

# (3*5)를 제곱하면 N이 나오느냐? -> flag 3
while True:
    if N % 15 != 0:
        N = M
        break
    N /= 15
    if N == 1:
        flag = 3

if flag == 1:
    count = N // 3
    print(count)

elif flag == 2:
    count = N // 5
    print(count)

elif flag == 3:
    count = N // 5
    print(count)

elif flag == 0:
    # 3의 배수인가? -> flag 4
    if N % 3 == 0:
        flag = 4
    elif N % 5 == 0:
        flag = 5
    while N >= 0:
        # 5킬로그램 봉지가 많아야 좋으므로 5를 기준으로 잡는다.
        if N < 5:
            N -= 3
            if N == 0:
                count += 1
                print(count)
                break
            else:
                if flag == 4:
                    M //= 3
                    print(M)
                    break
                else:
                    print(-1)
                    break
        N -= 5
        count += 1
        # 5로 모두 뺐을 때
        if flag == 5 and N == 0:
            print(count)
            break
        # 지금까지 거친 관문들중 하나도 해당되지 않았을 때 5를 빼고 3의 배수라면
        if flag != 4 and flag != 5 and N % 3 == 0:
            print(count+N//3)
            break
'''
# 답지 -> 5를 기준으로 하지만 3을 계속 빼고 카운트를 세다가
# 5의 배수일 때 5로 나눠서 기존 카운트에 더하는 것...
sugar = int(input())
bag = 0

while sugar>=0:
    if sugar % 5 == 0:
        bag += (sugar//5)
        print(bag)
        break
    sugar -= 3
    bag += 1
else:
    print(-1)

# 3을 빼야하는데 5를 계속 빼는 기준으로 잡다보니 엄청 크게 돌아가서 결국 틀리고 시간날렸다 하하하...
    