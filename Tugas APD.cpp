#include <iostream>
#include <conio.h>

using namespace std;

//deklarasi variabel
double saldo, kredit, debit;
int input1, input2;
int pulsa, voucherlistrik, makanan, paketinternet;
string username, password;

//deklarasi fungsi kedua
int login ();
int service ();

//fungsi utama
int main ()
{
	system ("color 17");
	
	cout << "\n\n"
		 << "	Selamat datang di ATM buatan anak ilkom		  \n\n"
		 << "\n\n";
		 
	login ();
	
	cout << endl;
	
	service ();
	
	cout << "Terima kasih telah memakai program ini";
	return 0;
}

//fungsi login
int login ()
{
	login :
		cout << "<-------------------------------------------------->\n\n"
			 << "Silahkan masukkan Username dan Password anda\n\n"
			 << "Username : ";
		cin  >> username;
	
		cout << "Password : ";
		cin  >> password;
		cout << "\n<-------------------------------------------------->\n\n";
	
		if (username != "Bugi" && password != "ingram")
		{
			cout << "Username atau Password yang anda masukkan salah\n\n";
			goto login;
		}
	system ("cls");
}

//fungsi layanan
int service ()
{
	saldo = 500000;
	
	layanan :
	
		cout << "\n\n**********************************************************\n\n"
			 << "	Silahkan pilih salah satu menu dibawah ini :\n"
			 << "	1. Saldo anda\n"
			 << "	2. Deposit akun tabungan anda\n"
			 << "	3. Mengambil uang dari tabungan anda\n"
			 << "	4. Transaksi lain\n"
			 << "	5. Keluar dari program\n\n\n"
			 << "**********************************************************\n\n"
			 << "Masukkan pilihan anda : ";	
		cin  >> input1;
		cout << endl;
		
		while (input1 !=5)
		{
			//pemilihan pertama (1)
			switch (input1)
			{
				case 1 :
					cout << "Saldo anda sebesar sebesar Rp "
						 << saldo
						 << endl
						 << endl
						 << endl;
					break;
				case 2 :
					cout << "Masukkan jumlah uang yang ingin anda masukkan Rp ";
					cin  >> debit;
				
					saldo = saldo + debit;
				
					cout << "Anda telah memasukkan uang sejumlah Rp "
						 << debit
						 << " di akun anda."
						 << endl
						 << endl
						 << endl;
					break;
				case 3 :
					cout << "Masukkan jumlah uang yang ingin anda ambil Rp ";
					cin  >> kredit;
					
					saldo = saldo - kredit;
					
					cout << "Anda telah mengambil sebesar Rp "
						 << kredit
						 << " dari akun anda."
						 << endl
						 << endl
						 << endl;
					break;
					
				kasus4 :
				
				case 4 :
					cout << endl
						 << "Silahkan pilih salah satu transaksi di bawah ini :\n\n"
						 << "1. Pulsa\n"
						 << "2. Voucher listrik\n"
						 << "3. Makanan\n"
						 << "4. Paket internet\n"
						 << "5. Kembali\n"
						 << "Masukkan pilihan anda : ";
					cin  >> input2;
					//Pemilihan kedua (2)
					switch (input2)
					{
						case 1 :
							cout << "\n<======================================================>"
								 << "\nSilahkan pilih pulsa yang ingin anda beli : \n"
								 << "1. 5.000 	= Rp 7.000\n"
								 << "2. 10.000	= Rp 12.000\n"
								 << "3. 20.000	= Rp 22.000\n"
								 << "4. 50.000	= Rp 52.000\n"
								 << "5. 100.000	= Rp 102.000\n"
								 << "6. Kembali\n"
								 << "Masukkan pilihan anda : ";
							cin  >> pulsa;
							//pemilihan ketiga (3)a
							switch (pulsa)
							{
								case 1 :
									saldo = saldo - 7000;
									cout << "Selamat transaksi anda telah berhasil\n\n";
									break;
								case 2 :
									saldo = saldo - 12000;
									cout << "Selamat transaksi anda telah berhasil\n\n";
									break;
								case 3 :
									saldo = saldo - 22000;
									cout << "Selamat transaksi anda telah berhasil\n\n";
									break;
								case 4 :
									saldo = saldo - 52000;
									cout << "Selamat transaksi anda telah berhasil\n\n";
									break;
								case 5 :
									saldo = saldo -102000;
									cout << "Selamat transaksi anda telah berhasil\n\n";
									break;
								case 6 :
									goto kasus4;
								default :
									cout << "Input yang anda masukkan salah\n\n";
									break;
							}
							goto kasus4;
						case 2 :
							cout << "\n<======================================================>"
								 << "\nSilahkan pilih voucher yang ingin anda beli :\n"
								 << "1. 20.000	= Rp 25.000\n"
								 << "2. 50.000	= Rp 55.000\n"
								 << "3. 100.000	= Rp 110.000\n"
								 << "4. Kembali\n"
								 << "Masukkan input anda : ";
							cin  >> voucherlistrik;
							//pemilihan ketiga (3)b
							switch (voucherlistrik)
							{
								case 1 :
									saldo = saldo - 25000;
									cout << "Selamat transaksi anda telah berhasil\n\n";
									break;
								case 2 :
									saldo = saldo - 55000;
									cout << "Selamat transaksi anda telah berhasil\n\n";
									break;
								case 3 :
									saldo = saldo - 110000;
									cout << "Selamat transaksi anda telah berhasil\n\n";
									break;
								case 4 :
									goto kasus4;
								default :
									cout << "Input yang anda masukkan salah\n\n";
									break;
							}
							goto kasus4;
						case 3 :
							cout << "\n<======================================================>"
								 << "\nSilahkan pilih makanan yang ingin anda beli :\n"
								 << "1. Roti		= Rp 5.000\n"
								 << "2. Burger	= Rp 10.000\n"
								 << "3. Sandwitch	= Rp 15.000\n"
								 << "4. Kembali\n"
								 << "Masukkan input anda : ";
							cin  >> makanan;
							//pemilihan ketiga (3)c
							switch (makanan)
							{
								case 1 :
									saldo = saldo - 5000;
									cout << "Silahkan nimati makanan anda\n\n";
									break;
								case 2 :
									saldo = saldo - 10000;
									cout << "Silahkan nimati makanan anda\n\n";
									break;
								case 3 :
									saldo = saldo - 15000;
									cout << "Silahkan nimati makanan anda\n\n";
									break;
								case 4 :
									goto kasus4;
								default :
									cout << "input yang anda masukkan salah\n\n";
									break;
							}
							goto kasus4;
						case 4 :
							cout << "\n<======================================================>"
								 << "\nSilahkan pilih paket internet yang ingin anda beli :\n"
								 << "1. 5Gb	= Rp 30.000\n"
								 << "2. 10Gb	= Rp 50.000\n"
								 << "3. 15Gb	= Rp 70.000\n"
								 << "4. Kembali\n"
								 << "Masukkan input anda : ";
							cin  >> paketinternet;
							//pemilihan ketiga (3)d
							switch (paketinternet)
							{
								case 1 :
									saldo = saldo - 30000;
									cout << "Selamat transaksi anda berhasil\n\n";
									break;
								case 2 :
									saldo = saldo - 50000;
									cout << "Selamat transaksi anda berhasil\n\n";
									break;
								case 3 :
									saldo = saldo - 70000;
									cout << "Selamat transaksi anda berhasil\n\n";
									break;
								case 4 :
									goto kasus4;
								default :
									cout << "Input yang anda masukkan salah\n\n";
									break;
							}
							goto kasus4;
						case 5 :
							goto layanan;
						default :
							cout << "Input yang anda masukkan salah\n\n";
							break;
					}
				case 5 :
					goto layanan;
				default :
					cout << "Anda telah memasukkan input yang salah\n"
						 << "Coba angka 1, 2, 3, atau 4"
						 << endl
						 << endl;
			}
			
			cout << "Masukkan pilihan anda : ";
			cin  >> input1;
		}
}
