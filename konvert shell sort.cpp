#include <iostream>		// menggunakan library iostream
using namespace std;	// menggunakan std

int shell_sort(int array[], int n)			// fungsi algoritma shell sort
{
	int fase = 1; int gap = n/2;			// deklarasi variabel fase
	while(gap > 0)							// loop shell sort
	{
		for (int a = 0; a <= (n-1);a++)		// menampilkan array ==>
		{
			cout << array[a] << " ";
		}									// <==
		cout << endl << endl;				// memberi jarak 1 baris
		for (int i = gap; i <= (n-1); i++)	// loop insertion sort
		{
			int temp = array[i];			// mengkopi array
			int j = i;						// mengkopi nilai i
			if (temp < array[j-gap])		// mengecek nilai sesuai dengan tempatnya
			{
				array[j] = array[j-gap];	// pertukaran
				j -= gap;					// asignment pengurangan
			}
			array[j] = temp;				// pertukaran
		}
		fase += 1;							// asignment pernjumlahan
		gap = n / 2 / fase;					// perubahan nilai jarak (gap)
	}
}

int main()												// fungsi utama
{
	int array[] = {12, 34, 54, 2, 30, 5, 2, 48};		// deklarasi array
	int panjang = sizeof(array) / sizeof(array[0]);		// panjang array
	
	cout << "sebelum sort" << endl << endl << "[ ";		// tampilan awal
	for (int b = 0; b <= (panjang-1); b++)				// menampilkan array ==>
	{
		cout << array[b] << " ";
	}													// <==
	cout << "]" << endl << endl << endl;				// hiasan
	
	shell_sort(array, panjang);							// algoritma sorting
	
	cout << "\n\nsetelah sort" << endl << endl << "[ ";	// tampilan akhhir
	for (int c = 0; c <= (panjang-1); c++)				// menampilkan array ==>
	{
		cout << array[c] << " ";
	}													// <==
	cout << "]";										// hiasan
}
