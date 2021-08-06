#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

const int MAXN = 200001;
int a[MAXN];
int n, m;

string is_number_in(int x)
{
	int l = -1;
	int r = n;

	while (l + 1 < r)
	{
		int mid = (l + r) / 2;
		if (a[mid] < x)
			l = mid;
		else
			r = mid;
	}

	if (a[r] < x)
		return "NO SOLUTION";
	return to_string(a[r]);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	int x;
	for (int i = 0; i < m; ++i)
	{
		cin >> x;
		cout << is_number_in(x) << "\n";
	}

	return 0;
}