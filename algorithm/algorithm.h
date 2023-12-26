#pragma once
#include <iostream>
#include <random>
#include <fstream>
using namespace std;

namespace algorithm {
	struct stats {
		size_t comparison_count = 0;
		size_t copy_count = 0;

		stats& operator+=(const stats a) {
			comparison_count += a.comparison_count;
			copy_count += a.copy_count;
			return *this;
		}
	};

	ostream& operator<<(ostream& stream, vector<int>& data) {
		for (int i = 0; i < data.size(); i++) {
			stream << data[i] << " ";
		}
		return stream;
	}

	template <typename T>
	stats BubbleSort(vector<T>& data) {
		stats stat;
		int size = data.size();
		for (int i = 0; i < size - 1; i++) {
			for (int j = (size - 1); j > i; j--) {
				stat.comparison_count += 1;
				if (data[j - 1] > data[j]) {
					stat.copy_count += 1;
					T temp = data[j - 1];
					data[j - 1] = data[j];
					data[j] = temp;
				}
			}
		}
		return stat;
	}

	template <typename T>
	stats ShakerSort(vector<T>& data) {
		stats stat;
		int size = data.size();
		int left = 0;
		int right = size - 1;
		T temp = 0;
		while (left < right) {
			for (int i = 0; i < right; i++) {
				stat.comparison_count += 1;
				if (data[i] > data[i + 1]) {
					stat.copy_count += 1;
					temp = data[i + 1];
					data[i + 1] = data[i];
					data[i] = temp;
				}
			}
			right--;
			for (int j = right; j > left; j--) {
				stat.comparison_count += 1;
				if (data[j] < data[j - 1]) {
					stat.copy_count += 1;
					temp = data[j - 1];
					data[j - 1] = data[j];
					data[j] = temp;
				}
			}
			left++;
		}
		return stat;
	}

	template <typename T>
	stats CombSort(vector<T>& data) {
		stats stat;
		double factor = 1.2473309;
		int step = data.size() - 1;
		int size = data.size();
		while (step >= 1)
		{
			for (int i = 0; i + step < size; i++)
			{
				stat.comparison_count += 1;
				if (data[i] > data[i + step])
				{
					stat.copy_count += 1;
					T temp = data[i];
					data[i] = data[i + step];
					data[i + step] = temp;
				}
			}
			step /= factor;
		}
		return stat;
	}

	template<typename T>
	vector<T> random(T a, T b, int n, size_t i) {
		vector<int> res;
		mt19937 gen(i);
		uniform_int_distribution<> distribution(a, b);
		for (size_t i = 0; i < n; i++) {
			size_t x = distribution(gen);
			res.push_back(x);
		}
		return res;
	}
}