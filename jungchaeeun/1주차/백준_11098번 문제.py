'''다른 풀이 연습

n = int(input())

a = []
line = []

for i in range(n):
    p = int(input())
    for j in range(p):
        line = input().split()
        a.append(line)

sorted(a, key=lambda a: a[0])
print(a[0])'''

n = int(input())

for _ in range(n):
    p = int(input())
    max_price = 0
    max_name = ""
    for _ in range(p):
        c, name = input().split()
        if int(c) > max_price:
            max_price = int(c)
            max_name = name

    print(max_name)
