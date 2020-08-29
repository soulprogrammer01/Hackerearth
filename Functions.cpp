#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{   int max=0;
 for(int i=0;i<4;i++)
  {
    cin>>a;
  if(max<a)
    {
        max=a;
    }
  }  
return max;
}


int main() {
    int a, b, c, d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}