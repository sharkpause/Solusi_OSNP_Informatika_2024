#include <iostream>

long long int solve(int N, int M) {
	return M % N; // output = yang pak Dengklek akan makan
}

int main() {
	long long int N = 123; // bebek
	long long int M = 4567890;  // candil

	std::cout << solve(N, M) << std::endl;

	return 0;
}