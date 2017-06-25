#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000001]={0};
int ans[1000001]={0};
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

long long int trunctable(long long int num)
{
    long long int x=num,po=0;
    long long int temp=0;
    while(x!=0)
    {
        if(arr[x]==0)
        {
            //cout << x;
            return 0;
        }
        //temp=(x%10)+(temp)*10;
        //po++;
        x=x/10;
    }
    x=num;
    long long int n=0,i=0;
    while(x!=0)
    {
        n=(x%10)*(pow(10,i))+n;
        if(arr[n]==0)
        {
            return 0;
        }
        x=x/10;
        i++;
    }
    //cout << temp;
    return 1;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for(long long int i=2;i<=1000000;i++)
    {
        arr[i]=PrimeTest(i);
        if(arr[i]==1)
        {
            ans[i]=trunctable(i);
        }
    }
    //cout << arr[2];
    //cout << trunctable(3797);
    ans[2]=0;
    ans[3]=0;
    ans[5]=0;
    ans[7]=0;
    long long int n,sum=0;
    cin >> n;
    for(long long int i=10;i<n;i++)
    {
        if(arr[i]==1 && ans[i]==1)
        {
            sum+=i;
        }
    }
    cout << sum;
    return 0;
}

