#include <iostream>

using namespace std;


int A[20];
int N;
int ansSum;
int ans = false;

void f(int i, int sum)
{
  if (i == N)
  {
    if (sum == ansSum)
      ans = true;
    return;
  }
  
  f(i + 1, sum - A[i]);
  f(i + 1, sum + A[i]);
  
}

int main() 
{
  cin >> N;
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  cin >> ansSum;

  f(0, 0);
  if (ans)
    cout << "YES" << "\n";
  else
    cout << "NO" << "\n";
}