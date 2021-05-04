#include<bits/stdc++.h>
usingnamespace std; 

int main() { 
    map<string, int> bukukuning; 
    int n, q, notelp, i; 
    string nama; 
      cin >> n >> q; 
          while(n--){ 
            cin >> nama >> notelp; 
            bukukuning.insert(pair<string, int>(nama, notelp)); 
            i++; 
          }
              for(int i=1; i<=q; i++){ 
                  cin >> nama; 
                  cout << bukukuning.find(nama)->second << endl; 
                  }
  return 0; 
}
