#include <bits/stdc++.h>
using namespace std;
  
   void solve(int i, vector<int> &r, int a[], int n){
       if(i == n){
           for(auto it : r){
               cout << it << " ";
           }
           if(r.size() == 0){
               cout << "{}";
           }
           cout << endl;
           return;
       }
       solve(i+1,  r, a, n);
       r.push_back(a[i]);
       solve(i+1, r, a, n);
       r.pop_back();
       
      
   }
        
int main() {
     int a[] = {1,2,3};
     int n = 3;
     vector<int> r;
     solve(0, r, a, n);
    return 0;
}
