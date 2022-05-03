fp = [0, 0, 0, 0] # 내린 사람
tp = [0, 0, 0, 0] # 탄 사람
current_ppl = 0 # 열차에 있던 순간
current_ppl_list = [0, 0, 0, 0] # 열차에 있던 순간

for i in range(4):
    fp[i], tp[i] = map(int,input().split())
    current_ppl = current_ppl - fp[i] + tp[i]
    current_ppl_list[i] = current_ppl

print(max(current_ppl_list))