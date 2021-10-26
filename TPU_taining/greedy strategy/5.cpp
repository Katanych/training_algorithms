#include <iostream>

using namespace std;

int main() {
  int n, k = 0;
  cin >> n;
  for(int a = 1; a <= n/2; ++a)
  {
    for(int b = a; b <= n/2; ++b)
    {
      for(int c = b; c <= n/2; ++c)
      {
        int d = n - (a + b + c);
        if(d >= c)
          if(a + b + c + d == n)
             ++k;
          }
      }
  }
  cout << k << "\n";
}