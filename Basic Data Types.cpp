#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    long int a,b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed<<setprecision(2)<<d<<endl;
    cout<<fixed<<setprecision(4)<<e<<endl;


    return 0;
}