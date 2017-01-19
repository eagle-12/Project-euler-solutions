#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int arr[20][20];
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            cin >> arr[i][j];
        }
    }
    long long int ans=0;
    for(int i=0;i<20;i++)
    {   
        for(int j=0;j<17;j++)
        {
            ans=max(ans,arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3]);
        }
    }
    for(int j=0;j<20;j++)
    {   
        for(int i=0;i<17;i++)
        {
            ans=max(ans,arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j]);
        }
    }
    for(int i=0;i<17;i++)
    {   
        for(int j=0;j<17;j++)
        {
            ans=max(ans,arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3]);
        }
    }
    for(int i=0;i<17;i++)
    {   
        for(int j=19;j>=3;j--)
        {
            ans=max(ans,arr[i][j]*arr[i+1][j-1]*arr[i+2][j-2]*arr[i+3][j-3]);
        }
    }
    cout << ans << endl;
    return 0;
}
