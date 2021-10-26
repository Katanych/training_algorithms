#include <iostream>
#include <math.h>

using namespace std;

int *arr;
int t, a;

int find_min_steps()
{
  int x = 0;
  int y = 0;

  for(int i = 0; i < a; ++i)
  {
    if (arr[i] % 2 == 0 && i % 2 != 0)
      x++;
    if (i % 2 == 0 && arr[i] % 2 != 0)
      y++;
  }

  delete[] arr;
	arr = nullptr;

  if (x == y)
    return x;
  else
    return -1;
}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> t;
  for (int i = 0; i < t; ++i)
  {
    cin >> a;
    arr = new int [a];
    for(int j = 0; j < a; ++j)
      cin >> arr[j];
    cout << find_min_steps() << "\n";
  }

  return 0;
}