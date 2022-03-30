#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll vk, jk;
	cin >> vk >> jk;

	ll vl, jl;
	cin >> vl >> jl;

	ll vh, dh, jh;
	cin >> vh >> dh >> jh;

	cout << vh * dh * jh * (vk * jk + vl * jl);

	return 0;
}