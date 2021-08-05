#include <iostream>

using namespace std;

const int MAXN = 300500;
const int MAXVALUE = 1000000500;
int n, q, a;
long partSum[MAXN];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> q;

	partSum[0] = 0;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a;
		partSum[i] = partSum[i - 1] + a;
	}

	for (int query = 0; query < q; ++query)
	{
		int l, r;
		cin >> l >> r;
		cout << partSum[r] - partSum[l - 1] << "\n";
	}

	return 0;
}