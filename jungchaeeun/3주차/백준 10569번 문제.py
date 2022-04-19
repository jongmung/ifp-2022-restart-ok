t = int(input())

for i in range(t):
    v, e = map(int, input().split())
    side = 2 - v + e
    print(side)
