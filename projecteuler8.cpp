#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max(int n,int k,string s);
int to_int(char i){
    int b = i - '0'; 
    return b;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,k;
    string s;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n >> k;
        cin >> s;
        cout << max(n,k,s) << endl;
    }
    return 0;
}

int max(int n,int k,string s)
{
    vector<string> s1;
    for(int j=0;j<(n-k+1);j++)
    {
        s1.push_back(s.substr(j,k));
    }
    vector<int> v;
    for(int j=0;j<s1.size();j++)
    {
        int ans=1;
        for(int r=0;r<s1[j].size();r++)
        {
            ans=ans*to_int(s1[j][r]);
        }
        v.push_back(ans);
    }
    int max = *max_element(v.begin(), v.end());
    return max;
}
