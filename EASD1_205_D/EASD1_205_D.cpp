1. Karena algoritma dibutuhkan untuk menyelesaikan masalah secara sistematis
2. Statis & Dinamis
3. membuat codingan yang tidak diperlukan
4. Menurut saya Insertion sort karena membandingkan dan memindahkan elemen ke posisi yang tepat didalam susunan data yang sudah diurutkan
5. Quadratic : Bubble Sort, Selection Sort, dan Insertion Sort
Loglinear : Merge Sort dan Quick Sort
6. Selection sort :
**/
#include<iostream>
using namespace std;


const int i = 05 + 20 - 2 * 15 + 10 + 20;
int zikir[i];
int n;

void input() {
	cout << "Masukkan " << n << " angka : ";
	for (int i = 0; i < n; i++) {
		cin >> zikir[i];
	}
}

void selectionsort() {
	for (int ZA = 0; ZA < n; ZA++) {
		int min_index = ZA;
		for (int i = ZA + 1; i < n; i++) {
			if (zikir[i] < zikir[min_index]) {
				min_index = i;
			}
		}
		if (min_index != ZA) {
			swap(zikir[ZA], zikir[min_index]);
		}
	}
}

void display() {

	cout << "Data urut : ";
	for (int i = 0; i < n; i++) {
		cout << zikir[i] << " ";
	}
	cout << endl;
}

int main() {
	cout << "Masukkan Jumlah data (Maksimum " << i << "): ";
	cin >> n;

	input();
	selectionsort();
	display();