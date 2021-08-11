#include <iostream>
#include <algorithm>

using namespace std;

#define ull unsigned long long

ull dip_num(ull w, ull h, ull len)
{
	return (len / w) * (len / h);
}

ull find_ans(ull w, ull h, ull n)
{
	ull l = 0;
	ull r = max(w, h) * n;

	while (l + 1 < r)
	{
		ull mid = (l + r) / 2;
		if (dip_num(w, h, mid) >= n)
			r = mid;
		else
			l = mid;
	}
	return r;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ull w, h, n;
	cin >> w >> h >> n;

	cout << find_ans(w, h, n) << "\n";

	return 0;
}