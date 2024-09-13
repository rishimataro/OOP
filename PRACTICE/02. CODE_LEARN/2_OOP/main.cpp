#include <iostream>
#include "ArrayCalculator.cpp"

using namespace std;

int main() {
	int arr1[] = { 3, 4, 2 };
	double arr2[] = { 1.3, 4.2, 6.7 };
	cout << ArrayCalculator::sumOfArray(arr1, sizeof(arr1) / sizeof(int)) << endl;
	cout << ArrayCalculator::sumOfArray(arr2, sizeof(arr2) / sizeof(double)) << endl;
	return 0;
}