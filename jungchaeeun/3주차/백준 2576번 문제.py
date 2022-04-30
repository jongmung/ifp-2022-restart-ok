sum = 0
odd = []
even = []

for i in range(7):
    num = int(input())
    if num % 2 != 0:
        sum += num
        odd.append(num)
    else:
        even.append(num)

if len(even) == 7:
    print(-1)
else:
    print(sum, min(odd), sep='\n')
