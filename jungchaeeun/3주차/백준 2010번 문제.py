import sys
input = sys.stdin.readline

n = int(input())
count = 0

for i in range(n):
    plug = int(input())
    count += plug

print(count-(n-1))
