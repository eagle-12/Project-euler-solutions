#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int PrimeTest(long long int x);
long long int sum[1000001]={0};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
         
    long long int t,n,i,j;
    sum[1]=0;
    sum[2]=2;
    for(i=3;i<1000001;i++)
    {
        if(PrimeTest(i)==1)
        {
            sum[i]=sum[i-1]+i;
        }
        else
        {
            sum[i]=sum[i-1];
        }
    }
    cin >> t;
    for(j=0;j<t;j++)
    {   
        cin >> n;
        
        cout << sum[n] << endl;
    }
    return 0;
}

long long int PrimeTest(long long int x)
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
