# Enter your code here. Read input from STDIN. Print output to STDOUT
n = input()
def fact(n):
    num=1
    for i in range(1,n+1):
        num*=i
    return num

sum = 0
for i in range(1,n):
    num2=i
    sum1=0
    while num2!=0:
        sum1+=fact(num2%10)
        num2=num2/10
    if sum1%i==0 and i>9:
        sum+=i

print sum
