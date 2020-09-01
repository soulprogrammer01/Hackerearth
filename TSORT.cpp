#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    long long int t,i;
    long long int a[1000000];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    sort(a,a+t);
    for (i=0;i<t;i++)
    {
        cout<<a[i]<<endl;   
    }
return 0;
}