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
    long long int sum=0,sum1,num;
    for(int i=100;i<=600000;i++)
    {
        num=i;
        sum1=0;
        while(num!=0)
        {
            int s;
            s = num%10;
            sum1+=pow(s,n);
            num=num/10;
        }
        if(sum1==i)
        {
            sum+=i;
        }
    }
    cout << sum;
    return 0;
}
