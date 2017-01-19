#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int arr[1000000]={0},in=0;
void primeFactors(long long int n);
int main() {
    long long int t,n;
    cin >> t;
    for(long long int i=0;i<t;i++)
    {
        cin >> n;
        for(long long int j=0;j<1000000;j++)
        {
            arr[j]=0;
        }
        primeFactors(n);
        cout << arr[in] << endl;
    }
    return 0;
}
void primeFactors(long long int n)
{   
    long long int flag=0,flag1=0;
    in=0;
    while (n%2 == 0)
    {
        arr[in]=2;
        flag=1;
        n = n/2;
    }
    if(flag==1)
    {
        arr[in++]=2;
    }
    for (long long int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            flag1=1;
            n = n/i;
        }
        if(flag1==1)
        {
            arr[++in]=i;
        }
        flag1=0;
    }
    if (n > 2)
    {
        arr[in]=n;
    }
}
