t = int(input())
hSum = 0
gpa = 0

for i in range(t):
    n = int(input())
    for i in range(n):
        c, g = map(str, input().split())
        hSum += int(c)
        gpa += float(c)*float(g)

    print(hSum, round(gpa/hSum, 1))
