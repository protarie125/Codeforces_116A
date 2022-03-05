#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto now = int{ 0 };
	auto mx = int{ 0 };
	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;

		now -= a;
		now += b;

		if (mx < now) {
			mx = now;
		}
	}

	cout << mx;

	return 0;
}