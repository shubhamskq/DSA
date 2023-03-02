#include <bits/stdc++.h>
using namespace std;

        void res(int n, int a[]){
          if(n < 0)
               return;
          cout << a[n] << " ";
          res(n-1, a);
        }
int main() {
     int n;
     cin >> n;
     int a[n];
     for(int i = 0 ; i < n ; i++){
         cin >> a[i]; 
     }
     res(n-1,a);
    return 0;
}
