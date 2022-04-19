test = int(input())

for i in range(test):
    c, v = map(int, input().split())
    you = int(c / v)
    dad = int(c % v)
    print("You get " + str(you) +
          " piece(s) and your dad gets " + str(dad) + " piece(s).")
