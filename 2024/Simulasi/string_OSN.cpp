#include <iostream>

long long int solve(int N, char* S) {
	long long int count = 0;
	long long int temp = 0;

	for(int i = 0; i < N; ++i) {
		if(S[i] == 'O' && temp != 100 && temp != 110 && temp != 111 && temp != 101) temp += 100;
		else if(S[i] == 'S' && temp != 10 && temp != 11 && temp != 110 && temp != 111) temp += 10;
		else if(S[i] == 'N' && temp != 1 && temp != 101 && temp != 111 && temp != 11) temp += 1;
		std::cout << temp << std::endl;
		if(temp == 111) {
			++count;
			temp = 0;
		}
	}

	return count;
}

int main() {
	long long int N = 28; // 
	char S[] = "SONOSONOSONOSONOSONOSONOSONO";  // 

	std::cout << solve(N, S) << std::endl;

	return 0;
}