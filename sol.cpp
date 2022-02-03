#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y, z;
		cin >> x >> y >> z;
		// subtract the total purchase amount from the sales made
		int total = x * y;
		int sales = x * z;
		assert(sales >= total);
		int profit = sales - total;
		cout << profit << '\n';
	}
	return 0;
}
