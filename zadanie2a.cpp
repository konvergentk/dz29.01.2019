#include <iostream>
using namespace std;

class Array {
public:
	pair <int, int>* data;
	int size;

	Array(int n) {
		size = n;
		data = new pair <int, int>[n];
	}

	Array(Array& A) {
		size = A.size;
		data = A.data;
	}

	~Array() {
		delete[] data;
	}

	pair <int, int> &operator[](int i) {
		while (i >= size) {
			i -= size;
		}
		return data[i];
	}

	const Array& operator=(const Array& A) {
		pair <int, int>* temp;
	    temp = new pair <int, int>[size];
		for (int i = 0; i < size; i++)
			temp[i] = A[i];
		delete[] data;
		data = temp;
	}

	int size() {
		return size;
	}
};


int main()
{




	return 0;
}
