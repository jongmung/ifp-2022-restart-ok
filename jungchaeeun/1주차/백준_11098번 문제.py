n = int(input())

a = []
line = []

for i in range(n):
    p = int(input())
    for j in range(p):
        line = input().split()
        a.append(line)

sorted(a, key=lambda a: a[0])
print(a[0])

# a = []

# line = []

# line = input().split()
# a.append(line)

# print(a)
