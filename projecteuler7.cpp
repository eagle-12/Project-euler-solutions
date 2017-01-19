#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int PrimeTest(long long int x);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v(0);
    long long int i=2,n,t,ct=0;
    while(ct<10000)
    {
        if(PrimeTest(i)==(long long int)1)
        {
            v.push_back (i);
            ct++;
            //cout << ct << endl;
        }
        //cout << i << endl;
        i++;
    }
    //cout << v[3] << endl;
    cin >> t;
    for(long long int i=0;i<t;i++)
    {
        cin >> n;
        cout << v[n-1] << endl;
    }
    return 0;
}
long long int PrimeTest(long long int x)
{
    long long int b = 2;
    while (b <= sqrt(x))
    {
        if (x % b == 0)
        {
            long long int Answer = 0;
            return Answer;
        }

        b++;
    }
    long long int Answer = 1;
    return Answer;
}
