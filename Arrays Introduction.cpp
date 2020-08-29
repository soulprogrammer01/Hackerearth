#include <algorithm> 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int x;
     int arr[10000]; 
    cin>>x;
  for (int i = 0; i <= x; i++){
      cin>>arr[i];
  }
   reverse(arr, arr + x);

    for (int i = 0; i < x; i++) 
        cout << arr[i]<<" ";
    return 0; 
} 