# 참고한 문서
# https://dojang.io/mod/page/view.php?id=2286

"""
author : Ahn Ji Sung
github : https://github.com/j1sung
e-mail : dalssagi00@gmail.com
title : A+B(여러개 읽어들이기 예제)
description : 수학, 구현, 사칙연산
"""

#1
"""
a, b = input("0초과 10미만 정수 A, B:").split()
print(int(a)+int(b))
-> 실패
뭐지 문자열로 결과가 나와야하나?
"""

#2
"""
a, b = input("0초과 10미만 정수 A, B:").split()
print(str(int(a)+int(b)))
->실패
음.. 무언가 문제랑 다른가본데?
(참고로 input의 반환값은 기본적으로 string이고 여기서는 print시 더한 값을 문자열로 다시 변환하려고 저런 형태로 구현해봄)
"""

#3
a, b = map(int, input().split())
print(a+b)
"""
아니 map을 사용하던건 아는데 문제는 결과가 처음 구현도 가능한건데 왜 틀린거지? 진짜 모르게따?
일단 map함수 사용하는건 익혔다.. 다음에 더 다져야지!
"""

#4
"""
정말 간단한 문제였다..
a, b = input().split()
print(int(a)+int(b))
#1번이 틀린게 아니라.. input()에서 입력시에 그냥 정수만 바로 입력되게 해야 하는데 쓸데없는 조건을 구체적으로 출력시켜서 그랬다.
실제 코테에서는 이런건 오히려 조건을 잘 명시했다고 하지 않을까? 백준에서 입력된 그대로만 만들어야 해서 문제가 발생한 듯 하다(?)
결과가 다르거나 뭔가 좀 과정에서 바꾸어버리면 지적당할 수 있지만 설마 준 조건 명시한거로 지적당할까?
"""