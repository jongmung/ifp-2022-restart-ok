n = int(input())
sum = 0

for i in range(n):
    student, apple = map(int, input().split())
    sum += apple % student

print(sum)


'''
다른 풀이(우대조건에서 감점-34점 나옴)

n = int(input())
sum = 0

for i in range(n):
    student, apple = map(int, input().split())
    if student >= apple:
        sum += apple
    else:
        sum += apple % student

print(sum)
'''
