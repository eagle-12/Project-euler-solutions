#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[15][15];
int ans[15][15];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<=j;k++)
            {
                cin >> arr[j][k];
            }
        }
        for(int j=n-1;j>=0;j--)
        {
            ans[n-1][j]=arr[n-1][j];
        }
        for(int j=n-2;j>=0;j--)
        {
            for(int k=0;k<=j;k++)
            {
                ans[j][k]=arr[j][k]+max(ans[j+1][k],ans[j+1][k+1]);
            }
        }
        cout << ans[0][0] << endl;
    }
    return 0;
}
