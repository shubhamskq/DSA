#include <bits/stdc++.h>
using namespace std;

        void res(int n){
          if(n == 0)
             return;
          cout << n << " ";
          res(n-1);
        }
int main() {
       int n;
       cin >> n;
       res(n);
    return 0;
}
