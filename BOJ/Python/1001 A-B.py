# 참고한 문서
# https://dojang.io/mod/page/view.php?id=2286
# https://velog.io/@ggyungjun0913/%ED%8C%8C%EC%9D%B4%EC%8D%AC-%EA%B3%B5%EA%B0%84%EB%B3%B5%EC%9E%A1%EB%8F%84

"""
author : Ahn Ji Sung
github : https://github.com/j1sung
e-mail : dalssagi00@gmail.com
title : A-B(여러개 읽어들이기 예제)
description : 수학, 구현, 사칙연산
"""

#1
"""
a,b = input().split()
print(int(a)-int(b))
"""

#2
a,b = map(int, input().split())
print(a-b)
"""
이런 간단한 사칙연산에서는 시간복잡도는 거의 의미가 없어 보인다. 
시간복잡도는 O(1), 공간복잡도는 O(1)이다.
"""
