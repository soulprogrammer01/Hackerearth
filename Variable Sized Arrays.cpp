#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    vector<int> ar[n];
    for (int i = 0; i <n; i++)

    {
        int s;
        cin>>s;
        for (int j = 0; j < s; j++)
        {
            int el;
            cin>>el;

            ar[i].push_back(el);
        }
        
    }
    for(int k=0;k<q;k++)
    {
        int m,n;
        cin>>m>>n;
        cout<<ar[m].at(n)<<endl;
    }
    


    return 0;
}