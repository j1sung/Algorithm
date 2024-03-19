# 참고한 문서
# https://dojang.io/mod/page/view.php?id=2286

"""
author : Ahn Ji Sung
github : https://github.com/j1sung
e-mail : dalssagi00@gmail.com
title : A/B(여러개 읽어들이기 예제)
description : 수학, 구현, 사칙연산
"""

#1
"""
a,b = input().split()
print(int(a)/int(b))
"""

#2
a,b = map(int, input().split())
print(a/b)
"""
시간복잡도는 O(1), 공간복잡도는 O(1)
이 문제는 조건에서 뭔가 다른 문제인가? 싶은 말들을 써놨지만 결과는 같다.
작성하다 보니 이전에 1008번 문제를 깃헙에 올렸었다!
아하.. 이제보니 input()말고 sys 라이브러리의 sys.stdin.readline() 함수를 사용하여 시간을 단축하는 방법을 썼구나!
시간상 다음날 수정해서 더 다져야지!
"""