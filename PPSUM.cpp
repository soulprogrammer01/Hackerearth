#include <iostream>
using namespace std;

int solv(long long int a,long long int b)
{

    if(a==0)
    {
        return b;
    }

    long long int sum=0;
    for(int i=1;i<=b;i++)
    {
        sum+=i;
    }
    b=sum;
return solv(a-1,b);
}

int main() {
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
       cout<< solv(a,b) <<endl;
    }
return 0;
}
