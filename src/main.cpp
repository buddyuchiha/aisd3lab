#include <iostream>
#include <fstream>
#include "..\algorithm\algorithm.h"
using namespace std;
using namespace algorithm;




int main() {
	
	//SORT-TESTS
	vector<int> a = { 503, 87, 512, 61, 908, 170, 897, 275,653, 426, 154, 509, 612, 677, 765, 703 };
	BubbleSort(a);
	cout << a << endl;
	vector<int> b = { 503, 87, 512, 61, 908, 170, 897, 275,653, 426, 154, 509, 612, 677, 765, 703 };
	ShakerSort(b);
	cout << b << endl;
	vector<int> c = { 503, 87, 512, 61, 908, 170, 897, 275,653, 426, 154, 509, 612, 677, 765, 703 };
	CombSort(c);
	cout << c << endl;
	


	// ShakerSort 
	//int a[] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 25000, 50000, 100000 };
	//ofstream fout;
	//fout.open("C:\\Users\\afrodetka\\Source\\Repos\\aisd3lab\\ShakerSort.txt");
	//for (size_t i = 0; i < 13; i++) {
	//	stats b;
	//	for (size_t j = 0; j < 100; j++) {
	//		auto c = random(-55000, 55000, a[i], i);
	//		b += (ShakerSort(c));
	//	}
	//	cout << i << endl;
	//	fout << a[i] << ' ' << b.comparison_count / 100 << ' ' << b.copy_count / 100 << endl;
	//}
	//fout.close();
	
	
	//int a[] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 25000, 50000, 100000 };
	//ofstream fout;
	//fout.open("C:\\Users\\afrodetka\\Source\\Repos\\aisd3lab\\ShakerSortBest.txt");
	//for (size_t i = 0; i < 13; i++) {
	//	stats b;
	//	vector<int> temp(a[i]);
	//	for (size_t j = 0; j < a[i]; j++) {
	//		temp[j] = j;
	//	}
	//	b = ShakerSort(temp);
	// cout << i << endl;
	//	fout << a[i] << ' ' << b.comparison_count << ' ' << b.copy_count << endl;
	//}
	//fout.close();
	
	
	//int a[] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 25000, 50000, 100000 };
	//ofstream fout;
	//fout.open("C:\\Users\\afrodetka\\Source\\Repos\\aisd3lab\\ShakerSortWorst.txt");
	//for (size_t i = 0; i < 13; i++) {
	//	stats b;
	//	vector<int> temp(a[i]);
	//	for (size_t j = 0; j < a[i]; j++) {
	//		temp[j] = j;
	//	}
	//	reverse(temp.begin(), temp.end());
	//	b = ShakerSort(temp);
	// cout << i << endl;
	//	fout << a[i] << ' ' << b.comparison_count << ' ' << b.copy_count << endl;
	//}
	//fout.close();




	// BubbleSort 
	/*int a[] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 25000, 50000, 100000 };
	ofstream fout;
	fout.open("C:\\Users\\afrodetka\\Source\\Repos\\aisd3lab\\BubbleSort.txt");
	for (size_t i = 0; i < 13; i++) {
		stats b;
		for (size_t j = 0; j < 100; j++) {
			auto c = random(-55000, 55000, a[i], i);
			b += (BubbleSort(c));
		}
		cout << i << endl;
		fout << a[i] << ' ' << b.comparison_count / 100 << ' ' << b.copy_count / 100 << endl;
	}
	fout.close();*/
	
	
	//int a[] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 25000, 50000, 100000 };
	//ofstream fout;
	//fout.open("C:\\Users\\afrodetka\\Source\\Repos\\aisd3lab\\BubbleSortBest.txt");
	//for (size_t i = 0; i < 13; i++) {
	//	stats b;
	//	vector<int> temp(a[i]);
	//	for (size_t j = 0; j < a[i]; j++) {
	//		temp[j] = j;
	//	}
	//	b = BubbleSort(temp);
	//	cout << i << endl;
	//	fout << a[i] << ' ' << b.comparison_count << ' ' << b.copy_count << endl;
	//}
	

	//int a[] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 25000, 50000, 100000 };
	//ofstream fout;
	//fout.open("C:\\Users\\afrodetka\\Source\\Repos\\aisd3lab\\BubbleSortWorst.txt");
	//for (size_t i = 0; i < 13; i++) {
	//	stats b;
	//	vector<int> temp(a[i]);
	//	for (size_t j = 0; j < a[i]; j++) {
	//		temp[j] = j;
	//	}
	//	reverse(temp.begin(), temp.end());
	//	b = BubbleSort(temp);
	//	cout << i << endl;
	//	fout << a[i] << ' ' << b.comparison_count << ' ' << b.copy_count << endl;
	//}
	//fout.close();

	
	//CombSort 

	//int a[] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 25000, 50000, 100000 };
	//ofstream fout;
	//fout.open("C:\\Users\\afrodetka\\Source\\Repos\\aisd3lab\\CombSort.txt");
	//for (size_t i = 0; i < 13; i++) {
	//	stats b;
	//	for (size_t j = 0; j < 100; j++) {
	//		auto c = random(-55000, 55000, a[i], i);
	//		b += (CombSort(c));
	//	}
	//	cout << i << endl;
	//	fout << a[i] << ' ' << b.comparison_count / 100 << ' ' << b.copy_count / 100 << endl;
	//}
	//fout.close();
	

	//int a[] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 25000, 50000, 100000 };
	//ofstream fout;
	//fout.open("C:\\Users\\afrodetka\\Source\\Repos\\aisd3lab\\CombSortBest.txt");
	//for (size_t i = 0; i < 13; i++) {
	//	stats b;
	//	vector<int> temp(a[i]);
	//	for (size_t j = 0; j < a[i]; j++) {
	//		temp[j] = j;
	//	}
	//	b = CombSort(temp);
	//	cout << i << endl;
	//	fout << a[i] << ' ' << b.comparison_count << ' ' << b.copy_count << endl;
	//}

	//int a[] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 25000, 50000, 100000 };
	//ofstream fout;
	//fout.open("C:\\Users\\afrodetka\\Source\\Repos\\aisd3lab\\CombSortWorst.txt");
	//for (size_t i = 0; i < 13; i++) {
	//	stats b;
	//	vector<int> temp(a[i]);
	//	for (size_t j = 0; j < a[i]; j++) {
	//		temp[j] = j;
	//	}
	//	reverse(temp.begin(), temp.end());
	//	b = CombSort(temp);
	//	cout << i << endl;
	//	fout << a[i] << ' ' << b.comparison_count << ' ' << b.copy_count << endl;
	//}
	//fout.close();

}
	
