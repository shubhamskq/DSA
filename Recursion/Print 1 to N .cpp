#include <bits/stdc++.h>
using namespace std;

        void res(int i, int n){
          if(i > n)
             return;
          cout << i << " ";
          res(i+1, n);
        }
int main() {
       int n;
       int i = 1;
       cin >> n;
       res(i,n);
    return 0;
}
