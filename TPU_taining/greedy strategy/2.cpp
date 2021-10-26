#include <iostream>

using namespace std;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x=0, y=0, z=0;
  cin >> n;
  int tmp;
  int bank;

  for (int i = 0; i < n; ++i)
  {
    cin >> tmp;

    if (tmp > 25)
    {
      if (bank > 0)
      {
        if (tmp == 50)
        {
          if (x >= 1)
          {
            x -= 1;
            y += 1;
            bank += 25;
          }
          else
          {
            cout << "NO" << "\n";
            return 0;
          }

        }
        else // tmp == 100
        {
          if (y >= 1 && x >= 1)
          {
            bank += 25;
            x -= 1;
            y -= 1;
            z += 1;
          }
          else if(x >= 3)
          {
            bank += 25;
            x -= 3;
            z += 1;
          }
          else
          {
            cout << "NO" << "\n";
            return 0;
          }
        }


      }
      else
      {
        cout << "NO" << "\n";
        return 0;
      }
    }   
    else
    {
      bank += 25;
      x += 1;
    } 
  }
  cout << "YES" << "\n";
  return 0;
}