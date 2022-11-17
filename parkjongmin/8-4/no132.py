#n = int(input()) ##정수 받기
#li = [*map(int,input().split())] ##한줄 정수 리스트 입력받기
#a,b,c = map(int,input().split()) ##여러개 정수 입력받기

##여러 줄의 정수 리스트 입력받기
#n = int(input())
#li = [int(input()) for _ in range(n)]

##n 없이 한 줄로
#li = [int(input()) for _ in range(int(input()))]

##n행 배열 입력받기
##숫자인 경우
#n=int(input())
#arr=[[*map(int,input().split())] for _ in range(n)]
##문자열인 경우
#arr=[list(input()) for _ in range(n)]

##입력 빠르게 하기
#import sys
#input=sys.stdin.readline # input함수 바꾸기

