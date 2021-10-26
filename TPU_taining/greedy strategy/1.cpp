#include <iostream>

using namespace std;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  int count = 0;

  while (n / 100 != 0)
  {
    n -= 100;
    count++;
  }
  while (n / 20 != 0)
  {
    n -= 20;
    count++;
  }
  while (n / 10 != 0)
  {
    n -= 10;
    count++;
  }
  while (n / 5 != 0)
  {
    n -= 5;
    count++;
  }
  count += n;

  cout << count << "\n";
}