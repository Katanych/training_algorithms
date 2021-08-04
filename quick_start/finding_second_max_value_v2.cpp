#include <iostream>

using namespace std;

const int MAXN	  = 10000500;
const int MAXVAL  = 1000000500;
int n;
int a[MAXN];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	int maxa = a[0];
	int max2a = -MAXVAL;

	for (int i = 1; i < n; ++i)
		if (maxa <= a[i])
		{
			max2a = maxa;
			maxa = a[i];
		}

	cout << max2a << "\n";
	return 0;
}
