#include <iostream>
using namespace std;


void swap(int& A, int size, int k) {
	int* temp = new int[size];

	for (int i = 0; i < size; i++) {
		if (i <= k)
			temp[size - i] = A[&i];
		else if (i > k)
			temp[i - k] = A[&i];
	}
	for (int i = 0; i < size; i++) {
		cout << temp[i];
	}
}


int main()
{
	int n;
	cin >> n;
	int* a = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	swap(*a, n, 3);
	return 0;
}
