# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys
fact=[]
fact.append(0)
fact.append(1)
for i in range(2,1001):
    fact.append(i*fact[i-1])

t = input()

for i in range(0,t):
    n,m = map(int,sys.stdin.readline().split())
    ans = fact[n+m]/(fact[n]*fact[m])
    ans = ans%(1000000007)
    print ans
