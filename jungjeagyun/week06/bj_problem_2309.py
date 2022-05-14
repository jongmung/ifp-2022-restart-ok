height_list = []

for _ in range(9):
    height_list.append(int(input()))

height_list.sort()
# print(height_list[:8])
for i in height_list[:7]:
    print(i)