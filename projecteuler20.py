t = input()
for i in range(0,t):
    n = input()
    num=1
    for j in range(1,n+1):
        num*=j

    sum=0
    while num!=0:
        sum+=num%10
        num=num/10
    
    print sum
