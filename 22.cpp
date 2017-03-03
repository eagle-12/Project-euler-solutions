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
    vector<string> v;
    string s;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    int q,ans,a;
    cin >> q;
    for(int j=0;j<q;j++)
    {
        cin >> s;
        ans=1;
        a=0;
        for(int r=0;r<s.size();r++)
        {
            a=a+(s[r]-'A')+1;
        }
        for(int r=0;r<v.size();r++)
        {
            if(v[r]==s)
            {
                ans=ans*(r+1);
                break;
            }
        }
        cout << a*ans << endl;
    }
    return 0;
}
