#include <iostream>
using namespace std;
int main() {
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n=0,sum=0,i,c=0,a[100000];
        cin>>n>>c;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum>c)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
return 0;
}
