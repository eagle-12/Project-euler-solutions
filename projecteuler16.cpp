#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<vector<int> > v(1000);
    string s;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        for(int j=0;j<s.size();j++)
        {
            v[i].push_back(s[j]-'0');
        }
    }
    vector<int> ans;
    int sum=0;
    for(int k=49;k>=0;k--)
    {
        for(int r=0;r<n;r++)
        {
            sum+=v[r][k];
        }
        ans.push_back(sum%10);
        sum=sum/10;
    }
    while(sum!=0)
    {
        ans.push_back(sum%10);
        sum=sum/10;
    }
    int l=ans.size();
    for(int r=l-1;r>l-11;r--)
    {
        cout << ans[r];
    }
    return 0;
}
