# 당신의 임무는 첼시가 리스트에서 가장 비싼 선수를 찾아낼 수 있도록 돕는 것이다.

# 첫 번째 줄에는 테스트 케이스의 개수 n이 주어진다 (n≤100).

# 각 테스트 케이스의 첫 번째 줄 p는 고려해야될 선수의 수이다 (1≤p≤100).

# 그 아래 p개의 줄에는 선수의 정보가 표시된다.

# 각각의 줄은 선수의 가격 C 와 이름을 입력한다 (C<2*109).

# 모든 선수의 가격은 서로 다르다.
# 선수의 이름은 20자 이하여야 하며, 사이에 공백이 있어서는 안 된다.

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
