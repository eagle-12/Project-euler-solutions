#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int isPrime(long long int x);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n,ct=0,flag,idx,ans,a,b;
    cin >> n;
    for(long long int i=(-1*n);i<=(n);i++)
    {
        for(long long int j=(-1*n);j<=n;j++)
        {
            //ct=0;
            flag=0;
            idx=0;
            ans=0;
            while(flag!=-1)
            {
                if(isPrime(abs(idx*idx+i*idx+j))==1)
                {
                    idx++;
                    ans++;
                }
                else
                {
                    flag=-1;
                }
            }
            if(ct!=ans)
            {   
                if(ans>ct)
                {
                    a=i;
                    b=j;
                }
                ct=max(ct,ans);
            }
        }
    }
    cout << a << " " << b;
    return 0;
}
long long int isPrime(long long int x)
{
    long long int b = 2;
    while (b <= sqrt(x))
    {
        if (x % b == 0)
        {
            long long int Answer = 0;
            return Answer;
        }

        b++;
    }
    long long int Answer = 1;
    return Answer;
}
