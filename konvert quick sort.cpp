#include <iostream>								// memasukkan library
using namespace std;								// menggunakan std

int i, pivot, ukuran, maks; 							// deklarasi variabel

int cari_pivot (int array[], int min, int max)					// fungsi mencari pivot
{
	int kuy;								// tempat menyimpan sementara
	i = min - 1;								// menetukan indeks
	pivot = array[max];							// indesk akhir sebagai pivot
	for (int a = min; a <= (max - 1); a++)					// loop sorting
	{
		if (array[a] <= pivot)						// sorting kebenaran nilai
		{
			i += 1;							// menentukan indeks
			kuy = array[i]; array[i] = array[a]; array[a] = kuy;	// pertukaran
		}
	}
	kuy = array[max]; array[max] = array[i+1]; array[i+1] = kuy;		// pertukaran
	return (i+1);								// mengembalikan nilai indeks
}

int quick_sort(int array[], int min, int max)					// fungsi algotitma quick sort
{/*
	cout << "[ ";								// hiasan
	for (int c=0; c <= maks; c++)						// menampilkan array ==>
	{
		cout << array[c] << " ";
	}									// <==
	cout << "]"<< endl;							// hiasan*/
	if (min < max)								// penghenti sorting jika tersisa 1 indeks
	{
		pivot = cari_pivot(array, min, max);				// mencari nilai pivot
		quick_sort(array, min, pivot-1);				// sorting array di bawah pivot
		quick_sort(array, pivot+1, max);				// sorting array di atas pivot
	}
}

int main ()
{
	int array[] = {5, 2, 1, 8, 4,454112,54,454,654,54,546545,654,654654,5324,654,6874,654,654,6574,687,654,657,654,655,465,768,7651,3,2465,7653,4156,47687,65,4,678,7,654,654,65,7465,465,46,4,657,65765,4,654,657,654,651,321,321,65,456,4,24,654,654,654,65,45,465,7468,78,76,4,654,657,87,897,8,765,46,7896,786,765,465,46,7897,65,4,24,324,54,56,456,74465,765,45,4,654,7,87,987,97,6,6,432,21,324,34,654,657,8,78,786,7,687,687,64,654,6574,687,897,64,6,654};
	cout << "Sebelum sort" << endl;						// tampilan awal
	ukuran = sizeof(array) / sizeof(array[0]);				// panjang array
	maks = ukuran - 1;							// indeks akhir array
	for (int i = 0; i<= maks; i++)						// menampilkan array ==>
	{
		cout << array[i] << " ";
	}									// <==
	cout << endl << endl;							// memberikan jarak sebanyak 2 baris
	
	quick_sort(array, 0, maks);						// algoritma quick sort
	
	cout << "\n\nSetelah sort" << endl;					// tampilan akhir
	for (int j = 0; j <= maks; j++)						// menampilkan array ==>
	{
		cout << array[j] << " ";
	}									// <==
}
