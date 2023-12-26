#pragma once
#include <iostream>
#include <random>
using namespace std;

template <typename T>
void BubbleSort(vector<T>& data) {
	int size = data.size();
	for (int i = 0; i < size - 1; i++) {
		for (int j = (size - 1); j > i; j--) {
			if (data[j - 1] > data[j]) {
				T temp = data[j - 1];
				data[j - 1] = data[j];
				data[j] = temp;
			}
		}
	}
}

template <typename T>
void ShakerSort(vector<T>& data) {
	int size = data.size();
	int left = 0;
	int right = size - 1;
	T temp = 0;
	while (left < right) {
		for (int i = 0; i < right; i++) {
			if (data[i] > data[i + 1]) {
				temp = data[i + 1];
				data[i + 1] = data[i];
				data[i] = temp;
			}
		}
		right--;
		for (int j = right; j > left; j--) {
			if (data[j] < data[j - 1]) {
				temp = data[j - 1];
				data[j - 1] = data[j];
				data[j] = temp;
			}
		}
		left++;
	}
}

template <typename T>
void CombSort(vector<T>& data) {
	int size = data.size();
	int gap = size;
	float shrink = 1.3;
	bool sorted = false;

	while (!sorted) {
		gap = (gap / shrink) > 1 ? (gap / shrink) : 1;
		if (gap == 1)
			sorted = true;

		for (int i = 0; i + gap < size; ++i) {
			if (data[i] > data[i + gap]) {
				int temp = data[i];
				data[i] = data[i + gap];
				data[i + gap] = temp;
				sorted = false;
			}
		}
	}
}


int main() {
	vector<int> a = { 503, 87, 512, 61, 908, 170, 897, 275,653, 426, 154, 509, 612, 677, 765, 703 };
	BubbleSort(a);
	int size = a.size();
	for (int i = 0; i < size; i++) {
		cout << a[i] << ' ';
	}
	cout << '\n' << endl;
	vector<int> b = { 503, 87, 512, 61, 908, 170, 897, 275,653, 426, 154, 509, 612, 677, 765, 703 };
	ShakerSort(b);
	int _size = b.size();
	for (int i = 0; i < _size; i++) {
		cout << b[i] << ' ';
	}
	cout << '\n' << endl;
	vector<int> c = { 503, 87, 512, 61, 908, 170, 897, 275,653, 426, 154, 509, 612, 677, 765, 703 };
	CombSort(c);
	int __size = c.size();
	for (int i = 0; i < __size; i++) {
		cout << c[i] << ' ';
	}
}