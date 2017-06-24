#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int abundant(int num)
{   
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum>num)
    {
        return 1;
    }
    return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arr[28124]={0},ans[28124]={0};
    for(int i=1;i<28124;i++)
    {
        arr[i]=abundant(i);
        ans[i]=arr[i];
    }
    for(int i=1;i<28124;i++)
    {
        if(arr[i]==0)
        {    
            for(int j=1;j<i;j++)
            {
                if(arr[j]==1 && arr[i-j]==1)
                {
                    ans[i]=1;
                    break;
                }
            }
        }    
    }
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n;
        if(n>28123)
        {
            cout << "YES" << endl;
        }
        else
        {
            if(ans[n]==1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

