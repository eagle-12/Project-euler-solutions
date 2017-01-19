#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,n,i,ans,j,k;
    cin >> t;
    vector<vector<int> >v(12);
    v[0]={2,4,8,16,32};
    v[1]={3,9,27};
    v[2]={5,25};
    v[3]={7};
    v[4]={11};
    v[5]={13};
    v[6]={17};
    v[7]={19};
    v[8]={23};
    v[9]={29};
    v[10]={31};
    v[11]={37};
   // cout << v[0][3];
    for(k=0;k<t;k++)
    {
        cin >> n;
        ans=1;
        for(i=0;i<12;i++)
        {
            for(j=0;j<v[i].size();j++)
            {
                if(v[i][j]>n)
                {
                    break;
                }
            }
            if(j!=0)
            {
                ans=ans*v[i][j-1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}

