#include <iostream>

using namespace std;


string username, password, nama;
int input, jumlah, harga, diskon, totalharga;
double saldo, deposito, withdraw;

void login ();
int layanan ();

int main ()
{
	system ("color F0");
	cout << "\n\n	Selamat datang di Warung Skuy\n\n"
		 << "	Program ini dibuat oleh :\n"
		 << "	Nama	: Bugi Sulistiyo\n"
		 << "	NIM	: 1915026018\n\n";
	login ();
	system ("cls");
	layanan ();
}

void login ()
{
	masuk :
	cout << "Silahkan masukkan username dan password anda :\n\n"
		 << "Username : ";
	cin  >> username;
	cout << "Password : ";
	cin  >> password;
	
	if (username == "admin" && password == "admin")
	{
		cout << "\n\nAnda berhasil masuk\n\n\n";
	}
	else
	{
		cout << "Username atau Password yang anda masukkan salah\n\n\n";
		goto masuk;
	}
}

int layanan ()
{
	while (input != 3)
	{
			
		balik :
		
		cout << "\n\nSilahkan pilih makanan yang anda ingin beli :\n\n"
			 << "<=======================================================>\n\n"
			 << "1. Nasi Goreng	==> Rp 15.000\n\n"
			 << "2. Nasi Tahu	==> Rp 6.000\n\n"
			 << "3. Keluar\n\n"
			 << "<=======================================================>\n\n"
			 << "Masukkan pilihan anda (1/2) : ";
		cin  >> input;
		cout << endl;
		cout << "Masukkan nama anda : ";
		cin  >> nama;
		system ("cls");
	
		switch (input)
		{
			case 1 :
				cout << "Masukkan jumlah nasi goreng yang ingin anda beli : ";
				cin  >> jumlah;
				harga = jumlah * 15000;
				
				if (harga > 50000)
				{
					diskon = harga * 10 / 100;
					totalharga = harga - diskon;
					
					cout << "\n\nSelamat pembelian anda berhasil dengan rincian :\n\n"
						 << "Nama Pembeli	: " << nama << endl
						 << "Item		: Nasi Goreng\n"
						 << "Jumlah item	: " << jumlah << endl
						 << "Diskon		: Rp " << diskon << endl
						 << "Total		: Rp " << totalharga << endl << endl << endl;
					break;
				}
				
				else 
				{
					diskon = 0;
					totalharga = harga - diskon;
					
					cout << "\n\nSelamat pembelian anda berhasil dengan rincian :\n\n"
						 << "Nama Pembeli	: " << nama << endl
						 << "Item		: Nasi Goreng\n"
						 << "Jumlah item	: " << jumlah << endl
						 << "Diskon		: Rp " << diskon << endl
					 	 << "Total		: Rp " << totalharga << endl << endl << endl;
					break;
				}
				system ("cls");
				break;
			case 2 :
				cout << "Masukkan jumlah Nasi Tahu yang ingin anda beli : ";
				cin  >> jumlah;
				harga = jumlah * 6000;
				
				if (harga > 50000)
				{
					diskon = harga * 10 / 100;
					totalharga = harga - diskon;
					
					cout << "\n\nSelamat pembelian anda berhasil dengan rincian :\n\n"
						 << "Nama Pembeli	: " << nama << endl
						 << "Item		: Nasi Tahu\n"
						 << "Jumlah item	: " << jumlah << endl
						 << "Diskon		: Rp " << diskon << endl
						 << "Total		: Rp " << totalharga << endl << endl << endl;
					break;
				}
				
				else 
				{
					diskon = 0;
					totalharga = harga - diskon;
					
					cout << "\n\nSelamat pembelian anda berhasil dengan rincian :\n\n"
						 << "Nama Pembeli	: " << nama << endl
						 << "Item		: Nasi Tahu\n"
						 << "Jumlah item	: " << jumlah << endl
						 << "Diskon		: Rp " << diskon << endl
					 	 << "Total		: Rp " << totalharga << endl << endl << endl;
					break;
				}
				system ("cls");
				break;
			case 3 :
				cout << "Terima kasih telah mencoba program ini\n\n"
					 << "Kapan-kapan balik lagi yoo\n\n";
				break;
			default :
				cout << "Silahkan coba lagi dengan memasukkan angka '1' atau '2'";
				system ("cls");
				goto balik;
		}
	}
}
