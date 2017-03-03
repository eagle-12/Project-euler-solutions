#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,k;
vector<int> v;
vector<int> v1;
int base(int x);
int isPalindrome(int num);
int main() {
    cin >> n >> k;
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(isPalindrome(i)==1)
        {
           if(base(i)==1)
            {
                sum+=i;
               // cout << i;
            }
        }
        v.clear();
    }
    cout << sum;
    return 0;
}

int base(int x)
{
    v1.clear();
    int flag=0;
    while(x!=0)
    {
        v1.push_back(x%k);
        x=x/k;
    }
    int l=v1.size();
    for(int i=0;i<=(l/2);i++)
    {
        if(v1[i]!=v1[l-i-1])
        {
            flag=-1;
            break;
        }
    }
    if(flag==-1)
    {
        return 0;
    }
    return 1;
}

int isPalindrome(int num)
{
    while(num!=0)
    {
        v.push_back(num%10);
        num=num/10;
    }
    int l=v.size();
    int flag=0;
    for(int i=0;i<=(l/2);i++)
    {
        if(v[i]!=v[l-i-1])
        {
            flag=-1;
            break;
        }
    }
    if(flag==-1)
    {
        return 0;
    }
    return 1;
}
