# 파이썬 math 모듈 - 최대공약수, 최소공배수 함수 사용
import sys
import math

a, b = map(int, input().split())

print(math.gcd(a, b))
print(math.lcm(a, b))

# 유클리드 호제법 사용 - 다른 블로그 참고

A, B = map(int, sys.stdin.readline().split())
a, b = A, B

while b != 0:
    a = a % b
    a, b = b, a

print(a)  # gcd
print(A * B // a)  # lcm
