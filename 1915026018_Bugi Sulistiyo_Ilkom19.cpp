// Nama		: Bugi Sulitiyo
// Nim		: 1915026018
// Kelas	: Ilkom 2019
// Prodi	: Ilmu Komputer

// library
#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;
// deklarasi
float bunga,duit,nominal,saldo=100000,sisa=saldo-50000;
string nomor_rekening,nama_bank,nama_orang;
int pin[1]={1111};
int perpisahan ();

int waktu1 ()
{
	int tunggu=0;
	while (tunggu<1000000000)
	{
		tunggu ++;
	}
}

int waktu2 ()
{
	int tunggu=0;
	while (tunggu<1099999999)
	{
		tunggu ++;
	}
}

void pembuka ()
{
	cout << "\n\n\n\t\t\t"
		 << "===============================================\n\t\t\t"
		 << "|                                             |\n\t\t\t"
		 << "|           Project Akhir Matkul APD          |\n\t\t\t"
		 << "|- - - - - - - -Program ATM Smart- - - - - - -|\n\t\t\t"
		 << "|                   Reghurt                   |\n\t\t\t"
		 << "|                                             |\n\t\t\t"
		 << "===============================================\n\n\n\t\t\t";
	waktu2 ();
	system ("cls");
	string jam[3] = {"Pagi ","Siang","Malam"};
	string hari[7] = {"Minggu","Senin","Selasa","Rabu","Kamis","Jum'at","Sabtu"};
	string bulan[12] = {"Januari  ","Februari ","Maret    ","April    ","Mei      ","Juni     ",
						"Juli     ","Agustus  ","September","Oktober  ","November ","Desember "};
	time_t now=time(0);
	tm*local_time=localtime(&now);
	cout << "\n\n\n\t\t\t"
		 << "====================================\n\t\t\t"
		 << "|                                  |\n\t\t\t"
		 << "|         Selamat Datang di        |\n\t\t\t"
		 << "| - - - - - - - A T M - - - - - - -|\n\t\t\t"
		 << "|              Reghurt             |\n\t\t\t"
		 << "|                                  |\n\t\t\t"
		 << "|     Selamat " << jam[system ("echo %time%")]
		 << "                |\n\t\t\t"
		 << "|       " << hari[local_time->tm_wday] << ", "
		 << local_time->tm_mday
		 << 	   " " << bulan[local_time->tm_mon] << ", "
		 << 1900+local_time->tm_year << " |\n\t\t\t"
		 << "|                                  |\n\t\t\t"
		 << "====================================\n\n\n\t\t\t";
	waktu2 ();
	system ("cls");
}

int login ()
{
	int a = 4;
	awal_login :
	waktu1 ();
	system ("cls");
	cout << "\n\n\n\t\t\t"
		 << "====================================\n\t\t\t"
		 << "|       Silahkan masukkan PIN      |\n\t\t\t"
		 << "====================================\n\n\n\t\t\t"
		 << " PIN		: ";
	int pass;
	cin  >> pass;
	if (pass == pin[0])
	{
		cout << "\n\n\n\t\t\t"
			 << "===========================================\n\t\t\t"
			 << "|       PIN yang Anda Masukkan Benar      |\n\t\t\t"
			 << "===========================================\n\n\n\t\t\t";
	}
	else
	{
		if (a >= 2)
		{
			a = a - 1;
			cout << "\n\n\n\t\t\t"
				 << "===========================================\n\t\t\t"
				 << "|                                         |\n\t\t\t"
				 << "|       PIN yang Anda Masukkan Salah      |\n\t\t\t"
			 	 << "|       Percobaan tersisa " << a << "               |\n\t\t\t"
			 	 << "|                                         |\n\t\t\t"
				 << "===========================================\n\n\n\t\t\t";
			goto awal_login;
		}
		else
		{
			cout << "\n\n\n\t\t\t"
				 << "=================================================\n\t\t\t"
				 << "|                                               |\n\t\t\t"
				 << "|       Anda Telah Mencoba Sebanyak 3 kali      |\n\t\t\t"
				 << "|- - - - - Silahkan hubungi Call Center - - - - |\n\t\t\t"
				 << "|                                               |\n\t\t\t"
				 << "=================================================\n\n\n\t\t\t";
			exit (0);
		}
	}
	system ("cls");
}

int menu ()
{
	jis :
	waktu1 ();
	system ("cls");
	cout << "\n\n\n\t\t\t"
		 << "=================================================\n\t\t\t"
		 << "|                                               |\n\t\t\t"
		 << "|      Daftar Kelas Member :                    |\n\t\t\t"
		 << "|      1. VIP                                   |\n\t\t\t"
		 << "|      2. GOLD                                  |\n\t\t\t"
		 << "|      3. Silver                                |\n\t\t\t"
		 << "|      4. Tidak Punya                           |\n\t\t\t"
		 << "|      5. Keluar                                |\n\t\t\t"
		 << "|                                               |\n\t\t\t"
		 << "=================================================\n\n\n\t\t\t"
		 << "Silahkan pilih menu di atas (1/2/3/4) : ";
	char pil1;
	cin  >> pil1;
	
	switch (pil1)
	{
		case '1' :
			bunga = 0.15;
			break;
		case '2' :
			bunga = 0.1;
			break;
		case '3' :
			bunga = 0.05;
			break;
		case '4' :
			bunga = 0;
			break;
		case '5' :
			perpisahan ();
			exit (0);
			break;
		default :
			cout << "\n\n\n\t\t\t"
				 << "================================================\n\t\t\t"
				 << "|       Silahkan Masukkan Angka (1/2/3/4)      |\n\t\t\t"
				 << "================================================\n\n\n\t\t\t";
			goto jis;
	}
	system ("cls");
	men :
	cout << "\n\n\n\t\t\t"
		 << "=================================================\n\t\t\t"
		 << "|                                               |\n\t\t\t"
		 << "|      <----   Menu  ---->                      |\n\t\t\t"
		 << "|      1. Cek Saldo                             |\n\t\t\t"
		 << "|      2. Transfer                              |\n\t\t\t"
		 << "|      3. Tarik Tunai                           |\n\t\t\t"
		 << "|      4. Ubah PIN                              |\n\t\t\t"
		 << "|      5. Isi Saldo                             |\n\t\t\t"
		 << "|      6. Exit                                  |\n\t\t\t"
		 << "|                                               |\n\t\t\t"
		 << "=================================================\n\n\n\t\t\t"
		 << "Silahkan pilih menu di atas (1/2/3/4/5/6) : ";
	char pil2;
	cin  >> pil2;
	system ("cls");
	switch (pil2)
	{
		case '1' :
			cout << "\n\n\n\t\t\t"
				 << "===========================================\n\t\t\t"
				 << "                                         \n\t\t\t"
				 << "       Saldo yang anda miliki : Rp " << saldo << "\n\t\t\t"
				 << "                                         \n\t\t\t"
				 << "===========================================\n\n\n\t\t\t";
			break;
		case '2' :
			trans :
			cout << "\n\n\n\t\t\t"
				 << "<======================  Transfer  ======================>\n\n\n\t\t\t"
				 << "Silahkan masukkan data anda \n\t\t\t"
				 << "1. Nomor Rekening : "; cin >> nomor_rekening;
			if (nomor_rekening >= "0" && nomor_rekening <= "9")
			{
				goto setelah_nomor_rekening;
			}
			else
			{
				cout << "\n\n\n\t\t\t"
					 << "=============================\n\t\t\t"
					 << "|       Masukkan Angka      |\n\t\t\t"
					 << "=============================\n\n\n\t\t\t";
				waktu1 ();
				system ("cls");
				goto trans;
			}
			setelah_nomor_rekening :
				
			cout << "\n\t\t\t"
				 << "2. Bank           : "; cin >> nama_bank;
			if ((nama_bank >= "a" && nama_bank <= "z")||(nama_bank >= "A" && nama_bank <= "Z"))
			{
				goto setelah_nama_bank;
			}
			else
			{
				cout << "\n\n\n\t\t\t"
					 << "=============================\n\t\t\t"
					 << "|       Masukkan Huruf      |\n\t\t\t"
					 << "=============================\n\n\n\t\t\t";
				waktu1 ();
				system ("cls");
				goto trans;
			}
			setelah_nama_bank :
				
			cout << "\n\t\t\t"
				 << "3. Jumlah         : Rp "; cin >> nominal;
			cout << "\n\t\t\t"
				 << "4. Nama           : "; cin >> nama_orang;
			if ((nama_orang >= "a" && nama_orang <= "z")
				||(nama_orang >= "A" && nama_orang <= "Z"))
			{
				goto setelah_nama_orang;
			}
			else
			{
				cout << "\n\n\n\t\t\t"
					 << "=========================\n\t\t\t"
					 << "|       Masukkan Huruf  |\n\t\t\t"
					 << "=========================\n\n\n\t\t\t";
				waktu1 ();
				system ("cls");
				goto trans;
			}
			setelah_nama_orang :
			waktu1 ();
			system ("cls");
			
			if (nominal <= sisa)
			{
				cout << "\n\n\n\t\t\t"
					 << "=====================================\n\t\t\t"
					 << "|       Transaksi Anda Berhasil      |\n\t\t\t"
					 << "=====================================\n\n\n\t\t\t";
				waktu1 ();
				system ("cls");
			
				cout << "\n\n\n\t\t\t"
					 << "======================================================\n\n\t\t\t"
					 << "         <----   Bukti Transfer  ---->\n\n\t\t\t"
					 << "      Tujuan --==>\n\t\t\t"
					 << "      Nomor Rekening  : " << nomor_rekening << "\n\t\t\t"
					 << "      Bank            : " << nama_bank << "\n\t\t\t"
					 << "      Jumlah          : Rp " << nominal << "\n\t\t\t"
					 << "      Atas Nama       : " << nama_orang << "\n\n\t\t\t"
					 << "      Asal --==>\n\t\t\t"
					 << "      Nomor Rekening  : 111 3010 311 64 506\n\t\t\t"
					 << "      Nama            : Putut Pamilih Widagdo, M.Kom\n\t\t\t"
					 << "      Bank            : Reghurt\n\n\t\t\t"
					 << "======================================================\n\n\n\t\t\t";
			}
			else
			{
				cout << "\n\n\n\t\t\t"
					 << "=====================================\n\t\t\t"
					 << "|       Saldo Anda Tidak Cukup      |\n\t\t\t"
					 << "=====================================\n\n\n\t\t\t";
				waktu1 ();
				system ("cls");
				goto trans;
			}
			saldo = saldo - nominal;
			break;
		case '3' :
			tar :
			cout << "\n\n\n\t\t\t"
				 << "<======================  Tarik Tunai  ======================>\n\n\n\t\t\t"
				 << "Masukkan Jumlah Uang yang Ingin Anda Tarik : Rp "; cin >> duit;
			if (duit <= sisa)
			{
				saldo = saldo - duit;
			
				cout << "\n\n\n\t\t\t"
					 << "=====================================\n\n\t\t\t"
					 << "       Transaksi Anda Berhasil      \n\t\t\t"
					 << "        Sisa Saldo Anda Rp " << saldo << "\n\t\t\t"
					 << "=====================================\n\n\n\t\t\t";
			}
			else
			{
				cout << "\n\n\n\t\t\t"
					 << "=====================================\n\t\t\t"
					 << "|       Saldo Anda Tidak Cukup      |\n\t\t\t"
					 << "=====================================\n\n\n\t\t\t";
				waktu1 ();
				system ("cls");
				goto tar;
			}
			break;
		case '4':
			login ();
			kol :
			cout << "\n\n\n\t\t\t"
				 << "=========================================\n\t\t\t"
				 << "|       Silahkan masukkan PIN Baru      |\n\t\t\t"
				 << "=========================================\n\n\n\t\t\t"
				 << " PIN		: ";
			int pass1;
			cin  >> pass1;
			
			cout << "\n\n\n\t\t\t"
				 << "===============================================\n\t\t\t"
				 << "|       Silahkan masukkan Ulang PIN Baru      |\n\t\t\t"
				 << "===============================================\n\n\n\t\t\t"
				 << " PIN		: ";
			int pass2;
			cin  >> pass2;
			
			if (pass1 == pass2)
			{
				pin [0] =pass1;
				cout << "\n\n\n\t\t\t"
					 << "========================================\n\t\t\t"
					 << "|       PIN Anda Berhasil diganti      |\n\t\t\t"
					 << "========================================\n\n\n\t\t\t";
			}
			else
			{
				cout << "\n\n\n\t\t\t"
					 << "========================================\n\t\t\t"
					 << "|          PIN Anda tidak cocok        |\n\t\t\t"
					 << "========================================\n\n\n\t\t\t";
				goto kol;
			}
			break;
		case '5' :
			int saldo_masuk;
			cout << "\n\n\n\t\t\t"
				 << "<======================  Isi Saldo  ======================>\n\n\n\t\t\t"
				 << "Silahkan masukkan saldo yang ingin anda masukkan : Rp "; cin >> saldo_masuk;
			int saldo_tambahan;
			saldo_tambahan = saldo_masuk * bunga;
			saldo = saldo + saldo_tambahan + saldo_masuk;
			cout << "\n\n\n\t\t\t"
					 << "=====================================\n\t\t\t"
					 << "|       Transaksi Anda Berhasil      |\n\t\t\t"
					 << "=====================================\n\n\n\t\t\t";
				waktu1 ();
				system ("cls");
			break;
		case '6' :
			perpisahan ();
			exit (0);
			break;
		default :
			cout << "\n\n\n\t\t\t"
				 << "====================================================\n\t\t\t"
				 << "|       Silahkan Masukkan Angka (1/2/3/4/5/6)      |\n\t\t\t"
				 << "====================================================\n\n\n\t\t\t";
			goto men;
	}
}

int main ()
{
	system ("color 1F");
	pembuka ();
	log :
	login ();
	menu ();
	
	waktu1 ();
	system ("cls");
	string chouse;
	cout << "\n\n\n\t\t\t"
		 << "<================================================>\n\n\t\t\t"
		 << "       Apakah anda ingin transaksi ulang ? "; cin >> chouse;
	if (chouse == "iya" || chouse == "IYA" || chouse == "Iya" || chouse == "Y" 
		|| chouse == "y" || chouse == "Yes" || chouse == "yes")
	{
		waktu1 ();
		goto log;
	}
	else
	{
		perpisahan ();
	}
	return 0;
}

int perpisahan ()
{
	cout << "\n\n\n\t\t\t"
		 << "============================================\n\t\t\t"
		 << "|       Terima Kasih Telah Berkunjung      |\n\t\t\t"
		 << "============================================\n\n\n\t\t\t";
}
