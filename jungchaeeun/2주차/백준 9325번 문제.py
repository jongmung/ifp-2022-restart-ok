test = int(input())

for i in range(test):
    sum = 0
    s = int(input())
    n = int(input())

    for i in range(n):
        q, p = map(int, input().split())
        sum += q*p

    print(s + sum)
