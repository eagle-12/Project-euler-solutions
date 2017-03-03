#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> v;
vector<int> ans;
bool check(int k);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,num;
    string s;
    cin >> n >> k;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=9;j++)
        {
            num=i*j;
            s = to_string(num);
            v.push_back(s);
            if(check(k))
            {
                ans.push_back(i);
            }
        }
        v.clear();
    }
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
bool check(int k)
{
    int arr[10]={0};
    int l=v.size();
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<v[i].length();j++)
        {
            char ch=v[i][j];
            arr[ch-48]++;
        }
    }
    if(arr[0]>0)
    {
        return false;
    }
    for(int i=1;i<=k;i++)
    {
        if(arr[i]!=1)
        {
            return false;
        }
    }
    if(k==8 && arr[9]!=0)
    {
        return false;
    }
    return true;
}
