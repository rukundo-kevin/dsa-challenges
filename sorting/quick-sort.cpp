#include <iostream>
using namespace std;

void swapValues(int& first, int& second) {
	int temp = first;
	first = second;
	second = temp;
}

int partition(int arr[], int left, int right) {
	int pivot = arr[right];
	int smallerIndex = left - 1;

	for (int currentIndex = left; currentIndex < right; currentIndex++) {
		if (arr[currentIndex] <= pivot) {
			smallerIndex++;
			swapValues(arr[smallerIndex], arr[currentIndex]);
		}
	}

	swapValues(arr[smallerIndex + 1], arr[right]);
	return smallerIndex + 1;
}

void quickSort(int arr[], int left, int right) {
	if (left < right) {
		int pivotIndex = partition(arr, left, right);
		quickSort(arr, left, pivotIndex - 1);
		quickSort(arr, pivotIndex + 1, right);
	}
}

int main() {
	int arr[] = {10, 7, 8, 9, 1, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	quickSort(arr, 0, size - 1);

	for (int index = 0; index < size; index++) {
		cout << arr[index] << " ";
	}
	cout << endl;

	return 0;
}
