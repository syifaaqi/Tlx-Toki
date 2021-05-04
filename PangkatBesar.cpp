#include <cmath> 
#include <iomanip> 
#include <iostream> 
#define bagi 1000000 

using namespace std; 
unsigned long long a, b; 
unsigned long long ans; 

unsigned long long carijwb(long a, long b) { 
  if (b == 1) { 
    return a % bagi; }
  if (b % 2 == 0) { 
    unsigned long long temp = carijwb(a % bagi, b / 2) % bagi; 
    return (temp * temp) % bagi; }
  else { unsigned long long temp = carijwb(a % bagi, b - 1) % bagi; 
    return ((a % bagi) * temp) % bagi; } 
}


int main() { 
  cin >> a >> b; 
  ans = carijwb(a, b); 
      if ((double)b >= 6.0 / log10(a)) { 
          cout << setw(6) << setfill('0'); }
          cout << ans << endl; 
}
