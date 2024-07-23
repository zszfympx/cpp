A = int(input())
B = int(input())

C = str(A+B)

cnt = 0
for i in C:
    cnt+=1
    if cnt%10==0:
        print()
    print(i, end="")