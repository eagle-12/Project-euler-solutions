#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int primeFactors(int n);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<pair<int,int> > v(450000);
    //v[0].first()=1;
    //v[0].second()=1;
    int add=2,k=0,num=1;
    do{
        v[k].first=num;
        v[k++].second=primeFactors(num);
        //ct++;
        num=num+add;
        add++;
    }while(v[k-1].second<1000);
    int t,n;
    cin >> t;
    for(int j=0;j<t;j++)
    {
        cin >> n;
        for(int m=0;m<v.size();m++)
        {
            if(v[m].second>n)
            {   
                cout << v[m].first << endl;
                break;
            }
        }
    }
    return 0;
}

int primeFactors(int n)
{

    int ans=1,ct=0;
    while (n%2 == 0)
    {
        n = n/2;
        ct++;
    }
    ans=ans*(ct+1);
    for (int i = 3; i <= sqrt(n)+1; i = i+2)
    {   
        ct=0;
        while (n%i == 0)
        {
            n = n/i;
            ct++;
        }
        ans=ans*(ct+1);
    }
 
    if (n > 2){
        ans=ans*2;
    }
    return ans;
}
