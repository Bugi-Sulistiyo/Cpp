// Mengikutkan library
#include <iostream>

// Menggunakan standart
using namespace std;

// deklarasi prosedur
void pembuka (), menu_utama (), data_diri (), sedan (), mini_bus (), city_car ();

// deklarasi fungsi
// sedan
int honda_accord (), struk_honda_accord1 (), struk_honda_accord2 (), struk_honda_accord3 ();
int toyota_corolla (), struk_toyota_corolla1 (), struk_toyota_corolla2 (), struk_toyota_corolla3 ();
int vios (), struk_vios1 (), struk_vios2 (), struk_vios3 ();
// minibus
int mitsubishi_xpander (), struk_mitsubishi_xpander1 (), struk_mitsubishi_xpander2 (), struk_mitsubishi_xpander3 ();
int wuling_confero (), struk_wuling_confero1 (), struk_wuling_confero2 (), struk_wuling_confero3 ();
int toyota_voxy (), struk_toyota_voxy1 (), struk_toyota_voxy2 (), struk_toyota_voxy3 ();
// city car
int honda_jazz (), struk_honda_jazz1 (),  struk_honda_jazz2 (),  struk_honda_jazz3 ();
int toyota_yaris (), struk_toyota_yaris1 (), struk_toyota_yaris2 (), struk_toyota_yaris3 ();
int daihatsu_ayla (), struk_daihatsu_ayla1 (), struk_daihatsu_ayla2 (), struk_daihatsu_ayla3 ();

// deklarasi array
char email [32], alamat [40];

// deklarasi variabel
char pilihan; // tipe data charracter
string nama, nomor_ktp, nomor_telphone, bank; // tipe data string
string jumlah_duit, nomor_rekening;

// Funsi waktu
int waktu1 ()
{
	int delay = 0;
	while (delay < 1999999999)
	{
		delay = delay + 1;
	}
	return delay;
}

int waktu2 ()
{
	int delay = 0;
	while (delay < 1000000000)
	{
		delay = delay + 1;
	}
	return delay;
}

int loading ()
{
	int go;
	for (go = 0; go < 100; go ++)
	{
		cout << "\n\n\n\t\t\t\t"
			 << "============================\n\t\t\t\t"
			 << "|                          |\n\t\t\t\t"
			 << "|      Loading " << go << " %         |\n\t\t\t\t"
			 << "|                          |\n\t\t\t\t"
			 << "============================\n";
		system ("cls");
	}
	cout << "\n\n\t\t\t\t"
		 << "Loading selesai !!\n";
	waktu1 ();
	system ("cls");
}

int main ()
{
	system ("color F0");
//	pembuka ();
	data_diri ();
	menu_utama ();
	return 0;
}

// prosedur tampilan awal
void pembuka ()
{
	// paling pertama muncul
	int memuat = 0;
	while (memuat <100)
	{
		cout << "\n\t\t\t\t\t=====================================================\n"
			 << "\t\t\t\t\t|                                                    |\n"
			 << "\t\t\t\t\t|---------------R . E . M . O . T . E----------------|\n"
			 << "\t\t\t\t\t|                   N .     B .     R                |\n"
			 << "\t\t\t\t\t|                   T .     I .     P                |\n"
			 << "\t\t\t\t\t|                   A .     L .     E                |\n"
			 << "\t\t\t\t\t|                   L .       .     R                |\n"
			 << "\t\t\t\t\t|                     .       .     C                |\n"
			 << "\t\t\t\t\t|                     .       .     A                |\n"
			 <<	"\t\t\t\t\t|                     .       .     Y                |\n"
			 << "\t\t\t\t\t|                     .       .     A                |\n"
			 << "\t\t\t\t\t|                                                    |\n"
			 << "\t\t\t\t\t======================================================\n\n\n";
			 
		memuat = memuat + 2;
		cout << "\t\t\t\t\t Mohon tunggu, program sedang dimuat\n\n"
			 << "\t\t\t\t\t\t\t\t Loading " << memuat << " %";
		system ("cls");
	}
	
	// muncul kedua.
	cout << "\n\n\t\t\t\t |---------------Berhasil memuat---------------|\n\n\n"
		 << "\t\t\t\t ================================================\n"
		 << "\t\t\t\t |-------------------Kelompok 8-----------------|\n"
		 << "\t\t\t\t | 1. Muhammad Al Fahri        (1915026013)     |\n"
		 << "\t\t\t\t | 2. Suci Rahmadani           (1915026014)     |\n"
		 << "\t\t\t\t | 3. Angga Syfa Kurniawan     (1915026015)     |\n"
		 << "\t\t\t\t | 4. Bugi Sulistiyo           (1915026018)     |\n"
		 << "\t\t\t\t ================================================\n";
	waktu1 ();
	system ("cls");
}

// prosedur data diri
void data_diri ()
{
	dat :
	string mungkin;
	cout << "\n\n\t\t\t\t |---------------Masukkan Data Diri----------|\n\n"
		 << "\t\t\t\t  1. Nama          : ";
	getline (cin, nama);
	if ((nama >= "a" && nama <= "z") || (nama >= "A" && nama <= "Z") || (nama == "," || nama == "." || nama == "(" || nama == ")"))
	{
		goto abis_nama;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto dat;
	}
	abis_nama :
		
		cout << "\t\t\t\t  2. Nomor KTP     : ";
		getline (cin, nomor_ktp);
		if (nomor_ktp >= "0" && nomor_ktp <= "9")
		{
			goto abis_nomor_ktp;
		}
		else
		{
			cout << "\n\n\n\t\t\t\t"
				 << "==============================================================\n\t\t\t\t"
				 << "|                                                            |\n\t\t\t\t"
				 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
				 << "|                                                            |\n\t\t\t\t"
				 << "==============================================================\n";
			waktu2 ();
			system ("cls");
			goto dat;
		}
		abis_nomor_ktp :
			cout << "\t\t\t\t  3. Alamat        : ";
			cin.getline (alamat, 40);
			cout << "\t\t\t\t  4. E-mail        : ";
			cin.getline (email, 32); 
			cout << "\t\t\t\t  5. No. Telphone  : ";
			getline (cin, nomor_telphone);
			if ((nomor_telphone >= "0" && nomor_telphone <= "9") || (nomor_telphone == "-"))
			{
				goto abis_nomor_telphone;
			}
			else
			{
				cout << "\n\n\n\t\t\t\t"
					 << "==============================================================\n\t\t\t\t"
					 << "|                                                            |\n\t\t\t\t"
					 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
					 << "|                                                            |\n\t\t\t\t"
					 << "==============================================================\n";
				waktu2 ();
				system ("cls");
				goto dat;
			}
			abis_nomor_telphone :
		
	waktu2 ();
	system ("cls");
	
	// mengecek ulang data diri
	cout << "\n\n\t\t\t\t |-------------------Cek Ulang---------------|\n\n"
		 << "\t\t\t\t 1. Nama           : " << nama << endl
		 << "\t\t\t\t 2. Nomor KTP      : " << nomor_ktp << endl
		 << "\t\t\t\t 3. Alamat         : " << alamat << endl
		 << "\t\t\t\t 4. E-mail         : " << email << endl
		 << "\t\t\t\t 5. No. Telphone   : " << nomor_telphone << endl << endl
		 << "\t\t\t\t Apakah data diri yang anda masukkan sesuai ? ";
	cin  >> mungkin;
	cout << "\n\n\n\n";
	
	if (mungkin =="y" || mungkin == "Y" || mungkin == "iya" || mungkin == "IYA" || mungkin == "Iya")
	{
		cout << "\n\n\n";
		loading ();
		cout << "\n\n\t\t\t\t |---------------Data Diri Berhasil Disimpan----------|\n\n";
	}
	else
	{
		cout << "\n\n\t\t\t\t"
			 << "Silahkan masukkan data anda lagi";
		goto dat;
	}
}

// prosedur menu utama
void menu_utama ()
{
	menu :
	
	cout << "\n\n\t\t\t\t====================================================\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t| - - - - - - - - - Pilihan Menu - - - - - - - - - |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|--------------------------------------------------|\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|               1. Sedan                           |\n"
		 << "\t\t\t\t|               2. Mini Bus                        |\n"
		 << "\t\t\t\t|               3. City Car                        |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|               4. Keluar                          |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t====================================================\n\n"
		 << "\t\t\t Silahkan pilih salah satu menu di atas dengan memasukkan angka : ";
	cin  >> pilihan;
	
	switch (pilihan)
	{
		case '1' :
		 	sedan ();
		 	break;
		case '2' :
		 	mini_bus ();
		 	break;
		case '3' :
		 	city_car ();
		 	break;
		case '4' :
			cout << "\n\n\n\t\t\t\t"
			 << "===================================================================\n\t\t\t\t"
			 << "|                                                                 |\n\t\t\t\t"
			 << "| : : : : : Terima kasih telah mencoba program kami !!! : : : : : |\n\t\t\t\t"
			 << "|                                                                 |\n\t\t\t\t"
			 << "===================================================================\n";
		 	break;
		default :
		 	cout << "\n\n\t\t\t\t Silahkan memasukkan angka yang ada di menu";
		 	waktu2 ();
		 	system ("cls");
		 	goto menu;
	}
}

// prosedur sub menu pertama
void sedan ()
{
	// tampilan awal dari sub menu
	system ("cls");
	char pilih; // deklarasi variabel 
	
	bulik :
	// tampilan awal sub menu
	cout << "\n\n\t\t\t\t====================================================\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t| - - - - - - - - - - -Sedan - - - - - - - - - - - |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|--------------------------------------------------|\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|               1. Honda Accord                    |\n"
		 << "\t\t\t\t|               2. Toyota Corolla                  |\n"
		 << "\t\t\t\t|               3. Vios                            |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|               4. Kembali                         |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t====================================================\n\n"
		 << "\t\t\t\t Silahkan pilih salah satu menu di atas dengan memasukkan angka : ";
	cin  >> pilih;
	system ("cls");
	
	// tempilan setelah memilih sub menu ke 2
	switch (pilih)
	{
		case '1' :
			honda_accord();
			break;
		case '2' :
			toyota_corolla ();
			break;
		case '3' :
			vios ();
			break;
		case '4' :
			menu_utama ();
	}
}


// fungsi pembayaran honda accord
int honda_accord ()
{
	string pil; // deklarasi variabel
	cout << "\n\n\t\t\t"
		 << "<-------------------------Honda Accord------------------------>\n\n\t\t\t\t\t"
		 << "1. Kursi            : 5\n\t\t\t\t\t"
		 << "2. Mesin            : 3,5 Liter V6\n\t\t\t\t\t"
		 << "3. Power            : 1.245 HP\n\t\t\t\t\t"
		 << "4. Sistem Penggerak : FWD\n\t\t\t\t\t"
		 << "5. Transmisi        : Otomatis dan Manual\n\n\t\t\t\t\t"
		 << "\t Apakah anda ingin memilih mobil ini ? ";
	cin  >> pil;
			
	// tampilan akan memilih lama sewa
	system ("cls");
	if (pil == "y" || pil == "Y" || pil == "iya" || pil == "IYA" || pil == "Iya" || pil == "yes")
	{
		cout << "\n\n\t\t\t\t"
		     << "<----------------- Daftar Harga Sewa ------------->\n\n\t\t\t\t"
		     << "___________________________________________________\n\t\t\t\t"
		     << "| No.| Lama Sewa |           Harga Sewa           |\n\t\t\t\t"
		     << "|----|-----------|--------------------------------|\n\t\t\t\t"
		     << "| 1. | 1 Hari    | Rp350.000,00                   |\n\t\t\t\t"
		     << "| 2. | 3 Hari    | Rp1.000.000,00                 |\n\t\t\t\t"
			 << "| 3. | 7 Hari    | Rp2.400.000,00                 |\n\t\t\t\t"
			 << "|____|___________|________________________________|\n\n\t\t\t\t"
			 << " 4. Kembali\n\n\n\t\t\t\t\t"
			 << "Silahkan pilih, paket yang ingin disewa (1/2/3/4) ? ";
		char choose; // deklarasi variabel
		cin  >> choose;
		system ("cls");
		switch (choose)
		{
			case '1' :
				struk_honda_accord1 ();												
				break;
			case '2' :
				struk_honda_accord2 ();
				break;
			case '3' :
				struk_honda_accord3 ();
				break;
			case '4' :
				sedan ();				
		}
	}
}

int struk_honda_accord1 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "350000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int diskon = 0;
	int harga_diskon = diskon * 350000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 350.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Sedan\n\t\t\t\t"
		 << "  Merk             : Honda Accord\n\t\t\t\t"
		 << "  Paket            : 1 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_honda_accord2 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "1000000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int diskon = 0;
	int harga_diskon = diskon * 1000000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 1.000.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Sedan\n\t\t\t\t"
		 << "  Merk             : Honda Accord\n\t\t\t\t"
		 << "  Paket            : 3 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_honda_accord3 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "2400000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0.1 * 2400000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 2.400.000,00 \n\t\t\t\t"
		 << "  Diskon           : 10 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Sedan\n\t\t\t\t"
		 << "  Merk             : Honda Accord\n\t\t\t\t"
		 << "  Paket            : 7 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

// fungsi pembayaran toyota corolla
int toyota_corolla ()
{
	string pil; // deklarasi variabel
	cout << "\n\n\t\t\t"
		 << "<-------------------------Toyota Corolla------------------------>\n\n\t\t\t\t\t"
		 << "1. Kursi            : 5\n\t\t\t\t\t"
		 << "2. Mesin            : 4 Silinder \n\t\t\t\t\t"
		 << "3. Power            : 1.375 HP\n\t\t\t\t\t"
		 << "4. Sistem Penggerak : FWD\n\t\t\t\t\t"
		 << "5. Transmisi        : Otomatis dan Manual\n\n\t\t\t\t\t"
		 << "\t Apakah anda ingin memilih mobil ini ? ";
	cin  >> pil;
			
	// tampilan akan memilih lama sewa
	system ("cls");
	if (pil == "y" || pil == "Y" || pil == "iya" || pil == "IYA" || pil == "Iya" || pil == "yes")
	{
		cout << "\n\n\t\t\t\t"
		     << "<----------------- Daftar Harga Sewa ------------->\n\n\t\t\t\t"
		     << "___________________________________________________\n\t\t\t\t"
		     << "| No.| Lama Sewa |           Harga Sewa           |\n\t\t\t\t"
		     << "|----|-----------|--------------------------------|\n\t\t\t\t"
		     << "| 1. | 1 Hari    | Rp350.000,00                   |\n\t\t\t\t"
		     << "| 2. | 3 Hari    | Rp1.000.000,00                 |\n\t\t\t\t"
			 << "| 3. | 7 Hari    | Rp2.400.000,00                 |\n\t\t\t\t"
			 << "|____|___________|________________________________|\n\n\t\t\t\t"
			 << " 4. Kembali\n\n\n\t\t\t\t\t"
			 << "Silahkan pilih, paket yang ingin disewa (1/2/3/4) ? ";
		char choose; // deklarasi variabel
		cin  >> choose;
		system ("cls");
		switch (choose)
		{
			case '1' :
				struk_toyota_corolla1 ();												
				break;
			case '2' :
				struk_toyota_corolla2 ();
				break;
			case '3' :
				struk_toyota_corolla3 ();
				break;
			case '4' :
				sedan ();
							
		}
	}
}

int struk_toyota_corolla1 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "350000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int diskon = 0;
	int harga_diskon = diskon * 350000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 350.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Sedan\n\t\t\t\t"
		 << "  Merk             : Toyota Corolla\n\t\t\t\t"
		 << "  Paket            : 1 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_toyota_corolla2 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "1000000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int diskon = 0;
	int harga_diskon = diskon * 1000000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 1.000.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Sedan\n\t\t\t\t"
		 << "  Merk             : Toyota Corolla\n\t\t\t\t"
		 << "  Paket            : 3 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_toyota_corolla3 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "2400000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0.1 * 2400000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 2.400.000,00 \n\t\t\t\t"
		 << "  Diskon           : 10 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Sedan\n\t\t\t\t"
		 << "  Merk             : Toyota Carolla\n\t\t\t\t"
		 << "  Paket            : 7 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

//fungsi pembayaran vios
int vios ()
{
	string pil; // deklarasi variabel
	cout << "\n\n\t\t\t"
		 << "<-------------------------Vios------------------------>\n\n\t\t\t\t\t"
		 << "1. Kursi            : 7\n\t\t\t\t\t"
		 << "2. Mesin            : In-line 4 cyl\n\t\t\t\t\t"
		 << "3. Power            : 1.496 HP\n\t\t\t\t\t"
		 << "4. Sistem Penggerak : FWD\n\t\t\t\t\t"
		 << "5. Transmisi        : Manual\n\n\t\t\t\t\t"
		 << "\t Apakah anda ingin memilih mobil ini ? ";
	cin  >> pil;
		
	// tampilan akan memilih lama sewa
	system ("cls");
	if (pil == "y" || pil == "Y" || pil == "iya" || pil == "IYA" || pil == "Iya" || pil == "yes")
	{
		cout << "\n\n\t\t\t\t"
		     << "<----------------- Daftar Harga Sewa ------------->\n\n\t\t\t\t"
		     << "___________________________________________________\n\t\t\t\t"
		     << "| No.| Lama Sewa |           Harga Sewa           |\n\t\t\t\t"
		     << "|----|-----------|--------------------------------|\n\t\t\t\t"
		     << "| 1. | 1 Hari    | Rp300.000,00                   |\n\t\t\t\t"
		     << "| 2. | 3 Hari    | Rp950.000,00                   |\n\t\t\t\t"
			 << "| 3. | 7 Hari    | Rp2.000.000,00                 |\n\t\t\t\t"
			 << "|____|___________|________________________________|\n\n\t\t\t\t"
			 << " 4. Kembali\n\n\n\t\t\t\t\t"
			 << "Silahkan pilih, paket yang ingin disewa (1/2/3/4) ? ";
		char choose; // deklarasi variabel
		cin  >> choose;
		system ("cls");
		switch (choose)
		{
			case '1' :
				struk_vios1 ();												
				break;
			case '2' :
				struk_vios2 ();
				break;
			case '3' :
				struk_vios3 ();
				break;
			case '4' :
				sedan ();
		}
	}
}

int struk_vios1 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "300000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0 * 300000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 300.000,00 \n\t\t\t\t"
		 << "  Diskon           : 10 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Sedan\n\t\t\t\t"
		 << "  Merk             : Vios\n\t\t\t\t"
		 << "  Paket            : 1 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_vios2 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "950000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0 * 950000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 950.000,00 \n\t\t\t\t"
		 << "  Diskon           : 10 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Sedan\n\t\t\t\t"
		 << "  Merk             : Vios\n\t\t\t\t"
		 << "  Paket            : 3 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_vios3 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "2000000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0.1 * 2000000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 2.000.000,00 \n\t\t\t\t"
		 << "  Diskon           : 10 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Sedan\n\t\t\t\t"
		 << "  Merk             : Vios\n\t\t\t\t"
		 << "  Paket            : 7 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

// prosedur sub menu kedua
void mini_bus ()
{
	// tampilan awal dari sub menu
	system ("cls");
	char pilih; // deklarasi variabel 
	
	bulik :
	// tampilan awal sub menu
	cout << "\n\n\t\t\t\t====================================================\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t| - - - - - - - - - - Mini Bus - - - - - - - - - - |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|--------------------------------------------------|\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|               1. Mitsubishi Xpander              |\n"
		 << "\t\t\t\t|               2. Wuling Confero S                |\n"
		 << "\t\t\t\t|               3. Toyota Voxy                     |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|               4. Kembali                         |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t====================================================\n\n"
		 << "\t\t\t\t Silahkan pilih salah satu menu di atas dengan memasukkan angka : ";
	cin  >> pilih;
	system ("cls");
	
	// tempilan setelah memilih sub menu ke 2
	switch (pilih)
	{
		case '1' :
			mitsubishi_xpander ();
			break;
		case '2' :
			wuling_confero ();
			break;
		case '3' :
			toyota_voxy ();
			break;
		case '4' :
			menu_utama ();
	}
}

// funsi pembayaran mitsubishi xpander
int mitsubishi_xpander ()
{
	string pil; // deklarasi variabel
	cout << "\n\n\t\t\t"
		 << "<-------------------------Misubishi Xpnder------------------------>\n\n\t\t\t\t\t"
		 << "1. Kursi            : 7\n\t\t\t\t\t"
		 << "2. Mesin            : 1,5 Liter 16 Valve\n\t\t\t\t\t"
		 << "3. Power            : 1.499 HP\n\t\t\t\t\t"
		 << "4. Sistem Penggerak : FWD\n\t\t\t\t\t"
		 << "5. Transmisi        : Manual\n\n\t\t\t\t\t"
		 << "\t Apakah anda ingin memilih mobil ini ? ";
	cin  >> pil;
			
	// tampilan akan memilih lama sewa
	system ("cls");
	if (pil == "y" || pil == "Y" || pil == "iya" || pil == "IYA" || pil == "Iya" || pil == "yes")
	{
		cout << "\n\n\t\t\t\t"
		     << "<----------------- Daftar Harga Sewa ------------->\n\n\t\t\t\t"
		     << "___________________________________________________\n\t\t\t\t"
		     << "| No.| Lama Sewa |           Harga Sewa           |\n\t\t\t\t"
		     << "|----|-----------|--------------------------------|\n\t\t\t\t"
		     << "| 1. | 1 Hari    | Rp600.000,00                   |\n\t\t\t\t"
		     << "| 2. | 3 Hari    | Rp1.500.000,00                 |\n\t\t\t\t"
			 << "| 3. | 7 Hari    | Rp5.500.000,00                 |\n\t\t\t\t"
			 << "|____|___________|________________________________|\n\n\t\t\t\t"
			 << " 4. Kembali\n\n\n\t\t\t\t\t"
			 << "Silahkan pilih, paket yang ingin disewa (1/2/3/4) ? ";
		char choose; // deklarasi variabel
		cin  >> choose;
		system ("cls");
		switch (choose)
		{
			case '1' :
				struk_mitsubishi_xpander1 ();												
				break;
			case '2' :
				struk_mitsubishi_xpander2 ();
				break;
			case '3' :
				struk_mitsubishi_xpander3 ();
				break;
			case '4' :
				mini_bus ();				
		}
	}
}

int struk_mitsubishi_xpander1 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "600000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0 * 600000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 600.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Mini Bus\n\t\t\t\t"
		 << "  Merk             : Mitsubishi Xpander\n\t\t\t\t"
		 << "  Paket            : 1 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_mitsubishi_xpander2 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "1500000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0 * 1500000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 1.500.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Mini Bus\n\t\t\t\t"
		 << "  Merk             : Mitsubishi Xpander\n\t\t\t\t"
		 << "  Paket            : 3 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_mitsubishi_xpander3 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "5500000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0.1 * 5500000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 5.500.000,00 \n\t\t\t\t"
		 << "  Diskon           : 10 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Mini Bus\n\t\t\t\t"
		 << "  Merk             : Mitsubishi Xpander\n\t\t\t\t"
		 << "  Paket            : 7 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

// fungsi pembayaran wuling confero s
int wuling_confero ()
{
	string pil; // deklarasi variabel
	cout << "\n\n\t\t\t"
		 << "<-------------------------Wuling Confero S------------------------>\n\n\t\t\t\t\t"
		 << "1. Kursi            : 7\n\t\t\t\t\t"
		 << "2. Mesin            : 4 Cyl\n\t\t\t\t\t"
		 << "3. Power            : 1.485 HP\n\t\t\t\t\t"
		 << "4. Sistem Penggerak : FWD\n\t\t\t\t\t"
		 << "5. Transmisi        : Manual\n\n\t\t\t\t\t"
		 << "\t Apakah anda ingin memilih mobil ini ? ";
	cin  >> pil;
			
	// tampilan akan memilih lama sewa
	system ("cls");
	if (pil == "y" || pil == "Y" || pil == "iya" || pil == "IYA" || pil == "Iya" || pil == "yes")
	{
		cout << "\n\n\t\t\t\t"
		     << "<----------------- Daftar Harga Sewa ------------->\n\n\t\t\t\t"
		     << "___________________________________________________\n\t\t\t\t"
		     << "| No.| Lama Sewa |           Harga Sewa           |\n\t\t\t\t"
		     << "|----|-----------|--------------------------------|\n\t\t\t\t"
		     << "| 1. | 1 Hari    | Rp600.000,00                   |\n\t\t\t\t"
		     << "| 2. | 3 Hari    | Rp1.500.000,00                 |\n\t\t\t\t"
			 << "| 3. | 7 Hari    | Rp5.500.000,00                 |\n\t\t\t\t"
			 << "|____|___________|________________________________|\n\n\t\t\t\t"
			 << " 4. Kembali\n\n\n\t\t\t\t\t"
			 << "Silahkan pilih, paket yang ingin disewa (1/2/3/4) ? ";
		char choose; // deklarasi variabel
		cin  >> choose;
		system ("cls");
		switch (choose)
		{
			case '1' :
				struk_wuling_confero1 ();												
				break;
			case '2' :
				struk_wuling_confero2 ();
				break;
			case '3' :
				struk_wuling_confero3 ();
				break;
			case '4' :
				mini_bus ();				
		}
	}
}

int struk_wuling_confero1 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "600000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0 * 600000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 600.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Mini Bus\n\t\t\t\t"
		 << "  Merk             : Wuling Confero S\n\t\t\t\t"
		 << "  Paket            : 1 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_wuling_confero2 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "1500000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0 * 1500000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 1.500.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Mini Bus\n\t\t\t\t"
		 << "  Merk             : Wuling Confero S\n\t\t\t\t"
		 << "  Paket            : 3 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_wuling_confero3 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "5500000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0.1 * 5500000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 5.500.000,00 \n\t\t\t\t"
		 << "  Diskon           : 10 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Mini Bus\n\t\t\t\t"
		 << "  Merk             : Wuling Confero S\n\t\t\t\t"
		 << "  Paket            : 7 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

// fungsi pembayaran toyota Voxy
int toyota_voxy ()
{
	string pil; // deklarasi variabel
	cout << "\n\n\t\t\t"
		 << "<-------------------------Toyota Voxy------------------------>\n\n\t\t\t\t\t"
		 << "1. Kursi            : 7\n\t\t\t\t\t"
		 << "2. Mesin            : 4 Silinder\n\t\t\t\t\t"
		 << "3. Power            : 1.987 HP\n\t\t\t\t\t"
		 << "4. Sistem Penggerak : FWD\n\t\t\t\t\t"
		 << "5. Transmisi        : Manual dan Otomatis\n\n\t\t\t\t\t"
		 << "\t Apakah anda ingin memilih mobil ini ? ";
	cin  >> pil;
			
	// tampilan akan memilih lama sewa
	system ("cls");
	if (pil == "y" || pil == "Y" || pil == "iya" || pil == "IYA" || pil == "Iya" || pil == "yes")
	{
		cout << "\n\n\t\t\t\t"
		     << "<----------------- Daftar Harga Sewa ------------->\n\n\t\t\t\t"
		     << "___________________________________________________\n\t\t\t\t"
		     << "| No.| Lama Sewa |           Harga Sewa           |\n\t\t\t\t"
		     << "|----|-----------|--------------------------------|\n\t\t\t\t"
		     << "| 1. | 1 Hari    | Rp1.000.000,00                 |\n\t\t\t\t"
		     << "| 2. | 3 Hari    | Rp2.500.000,00                 |\n\t\t\t\t"
			 << "| 3. | 7 Hari    | Rp6.500.000,00                 |\n\t\t\t\t"
			 << "|____|___________|________________________________|\n\n\t\t\t\t"
			 << " 4. Kembali\n\n\n\t\t\t\t\t"
			 << "Silahkan pilih, paket yang ingin disewa (1/2/3/4) ? ";
		char choose; // deklarasi variabel
		cin  >> choose;
		system ("cls");
		switch (choose)
		{
			case '1' :
				struk_toyota_voxy1 ();												
				break;
			case '2' :
				struk_toyota_voxy2 ();
				break;
			case '3' :
				struk_toyota_voxy3 ();
				break;
			case '4' :
				mini_bus ();				
		}
	}
}

int struk_toyota_voxy1 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "1000000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0 * 1000000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 1.000.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Mini Bus\n\t\t\t\t"
		 << "  Merk             : Toyota Voxy\n\t\t\t\t"
		 << "  Paket            : 1 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_toyota_voxy2 ()
{
	
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "2500000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0 * 2500000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 2.500.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Mini Bus\n\t\t\t\t"
		 << "  Merk             : Toyota Voxy\n\t\t\t\t"
		 << "  Paket            : 3 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_toyota_voxy3 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "6500000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0.1 * 6500000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 6.500.000,00 \n\t\t\t\t"
		 << "  Diskon           : 10 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : Mini Bus\n\t\t\t\t"
		 << "  Merk             : Toyota Voxy\n\t\t\t\t"
		 << "  Paket            : 7 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

// prosedur sub menu ketiga
void city_car ()
{
	// tampilan awal dari sub menu
	system ("cls");
	char pilih; // deklarasi variabel 
	
	bulik :
	// tampilan awal sub menu
	cout << "\n\n\t\t\t\t====================================================\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t| - - - - - - - - - - City Car - - - - - - - - - - |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|--------------------------------------------------|\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|               1. Honda Jazz                      |\n"
		 << "\t\t\t\t|               2. Toyota Yaris                    |\n"
		 << "\t\t\t\t|               3. Daihatsu Ayla                   |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|               4. Kembali                         |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t|                                                  |\n"
		 << "\t\t\t\t====================================================\n\n"
		 << "\t\t\t\t Silahkan pilih salah satu menu di atas dengan memasukkan angka : ";
	cin  >> pilih;
	system ("cls");
	
	// tempilan setelah memilih sub menu ke 2
	switch (pilih)
	{
		case '1' :
			honda_jazz ();
			break;
		case '2' :
			toyota_yaris ();
			break;
		case '3' :
			daihatsu_ayla ();
			break;
		case '4' :
			menu_utama ();
	}
}

// fungsi pembayaran honda jazz
int honda_jazz ()
{
	string pil; // deklarasi variabel
	cout << "\n\n\t\t\t"
		 << "<-------------------------Honda Jazz------------------------>\n\n\t\t\t\t\t"
		 << "1. Kursi            : 5\n\t\t\t\t\t"
		 << "2. Mesin            : 1,5 Liter 4 cylinder\n\t\t\t\t\t"
		 << "3. Power            : 1.497 HP\n\t\t\t\t\t"
		 << "4. Sistem Penggerak : FWD\n\t\t\t\t\t"
		 << "5. Transmisi        : Manual\n\n\t\t\t\t\t"
		 << "\t Apakah anda ingin memilih mobil ini ? ";
	cin  >> pil;
			
	// tampilan akan memilih lama sewa
	system ("cls");
	if (pil == "y" || pil == "Y" || pil == "iya" || pil == "IYA" || pil == "Iya" || pil == "yes")
	{
		cout << "\n\n\t\t\t\t"
		     << "<----------------- Daftar Harga Sewa ------------->\n\n\t\t\t\t"
		     << "___________________________________________________\n\t\t\t\t"
		     << "| No.| Lama Sewa |           Harga Sewa           |\n\t\t\t\t"
		     << "|----|-----------|--------------------------------|\n\t\t\t\t"
		     << "| 1. | 1 Hari    | Rp100.000,00                   |\n\t\t\t\t"
		     << "| 2. | 3 Hari    | Rp150.000,00                   |\n\t\t\t\t"
			 << "| 3. | 7 Hari    | Rp1.000.000,00                 |\n\t\t\t\t"
			 << "|____|___________|________________________________|\n\n\t\t\t\t"
			 << " 4. Kembali\n\n\n\t\t\t\t\t"
			 << "Silahkan pilih, paket yang ingin disewa (1/2/3/4) ? ";
		char choose; // deklarasi variabel
		cin  >> choose;
		system ("cls");
		switch (choose)
		{
			case '1' :
				struk_honda_jazz1 ();												
				break;
			case '2' :
				struk_honda_jazz2 ();
				break;
			case '3' :
				struk_honda_jazz3 ();
				break;
			case '4' :
				city_car ();				
		}
	}
}

int struk_honda_jazz1 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "100000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0 * 100000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 100.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : City Car\n\t\t\t\t"
		 << "  Merk             : Honda Jazz\n\t\t\t\t"
		 << "  Paket            : 1 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_honda_jazz2 ()
{	
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "150000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0 * 150000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 150.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : City Car\n\t\t\t\t"
		 << "  Merk             : Honda Jazz\n\t\t\t\t"
		 << "  Paket            : 3 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_honda_jazz3 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "1000000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0.1 * 1000000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 1.000.000,00 \n\t\t\t\t"
		 << "  Diskon           : 10 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : City Car\n\t\t\t\t"
		 << "  Merk             : Honda Jazz\n\t\t\t\t"
		 << "  Paket            : 7 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

// fungsi pembayaran toyota yaris
int toyota_yaris ()
{
	string pil; // deklarasi variabel
	cout << "\n\n\t\t\t"
		 << "<-------------------------Toyota Yaris------------------------>\n\n\t\t\t\t\t"
		 << "1. Kursi            : 5\n\t\t\t\t\t"
		 << "2. Mesin            : In-line 4 Cyl 16 Valve\n\t\t\t\t\t"
		 << "3. Power            : 1.496 HP\n\t\t\t\t\t"
		 << "4. Sistem Penggerak : FWD\n\t\t\t\t\t"
		 << "5. Transmisi        : Manual\n\n\t\t\t\t\t"
		 << "\t Apakah anda ingin memilih mobil ini ? ";
	cin  >> pil;
			
	// tampilan akan memilih lama sewa
	system ("cls");
	if (pil == "y" || pil == "Y" || pil == "iya" || pil == "IYA" || pil == "Iya" || pil == "yes")
	{
		cout << "\n\n\t\t\t\t"
		     << "<----------------- Daftar Harga Sewa ------------->\n\n\t\t\t\t"
		     << "___________________________________________________\n\t\t\t\t"
		     << "| No.| Lama Sewa |           Harga Sewa           |\n\t\t\t\t"
		     << "|----|-----------|--------------------------------|\n\t\t\t\t"
		     << "| 1. | 1 Hari    | Rp100.000,00                   |\n\t\t\t\t"
		     << "| 2. | 3 Hari    | Rp150.000,00                   |\n\t\t\t\t"
			 << "| 3. | 7 Hari    | Rp1.000.000,00                 |\n\t\t\t\t"
			 << "|____|___________|________________________________|\n\n\t\t\t\t"
			 << " 4. Kembali\n\n\n\t\t\t\t\t"
			 << "Silahkan pilih, paket yang ingin disewa (1/2/3/4) ? ";
		char choose; // deklarasi variabel
		cin  >> choose;
		system ("cls");
		switch (choose)
		{
			case '1' :
				struk_toyota_yaris1 ();												
				break;
			case '2' :
				struk_toyota_yaris2 ();
				break;
			case '3' :
				struk_toyota_yaris3 ();
				break;
			case '4' :
				city_car ();				
		}
	}
}

int struk_toyota_yaris1 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "100000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0 * 100000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 100.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : City Car\n\t\t\t\t"
		 << "  Merk             : Toyota Yaris\n\t\t\t\t"
		 << "  Paket            : 1 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_toyota_yaris2 ()
{	
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "150000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0 * 150000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 150.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : City Car\n\t\t\t\t"
		 << "  Merk             : Toyota Yaris\n\t\t\t\t"
		 << "  Paket            : 3 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_toyota_yaris3 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "1000000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0.1 * 1000000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 1.000.000,00 \n\t\t\t\t"
		 << "  Diskon           : 10 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : City Car\n\t\t\t\t"
		 << "  Merk             : Toyota Yaris\n\t\t\t\t"
		 << "  Paket            : 7 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

//fungsin pembayaran daihatu ayla
int daihatsu_ayla ()
{
	string pil; // deklarasi variabel
	cout << "\n\n\t\t\t"
		 << "<-------------------------Daihatsu Ayla------------------------>\n\n\t\t\t\t\t"
		 << "1. Kursi            : 5\n\t\t\t\t\t"
		 << "2. Mesin            : 1,0 Liter 3 Cyl\n\t\t\t\t\t"
		 << "3. Power            : 998 HP\n\t\t\t\t\t"
		 << "4. Sistem Penggerak : FWD\n\t\t\t\t\t"
		 << "5. Transmisi        : Manual\n\n\t\t\t\t\t"
		 << "\t Apakah anda ingin memilih mobil ini ? ";
	cin  >> pil;
			
	// tampilan akan memilih lama sewa
	system ("cls");
	if (pil == "y" || pil == "Y" || pil == "iya" || pil == "IYA" || pil == "Iya" || pil == "yes")
	{
		cout << "\n\n\t\t\t\t"
		     << "<----------------- Daftar Harga Sewa ------------->\n\n\t\t\t\t"
		     << "___________________________________________________\n\t\t\t\t"
		     << "| No.| Lama Sewa |           Harga Sewa           |\n\t\t\t\t"
		     << "|----|-----------|--------------------------------|\n\t\t\t\t"
		     << "| 1. | 1 Hari    | Rp100.000,00                   |\n\t\t\t\t"
		     << "| 2. | 3 Hari    | Rp150.000,00                   |\n\t\t\t\t"
			 << "| 3. | 7 Hari    | Rp1.000.000,00                 |\n\t\t\t\t"
			 << "|____|___________|________________________________|\n\n\t\t\t\t"
			 << " 4. Kembali\n\n\n\t\t\t\t\t"
			 << "Silahkan pilih, paket yang ingin disewa (1/2/3/4) ? ";
		char choose; // deklarasi variabel
		cin  >> choose;
		system ("cls");
		switch (choose)
		{
			case '1' :
				struk_daihatsu_ayla1 ();												
				break;
			case '2' :
				struk_daihatsu_ayla2 ();
				break;
			case '3' :
				struk_daihatsu_ayla3 ();
				break;
			case '4' :
				city_car ();				
		}
	}
}

int struk_daihatsu_ayla1 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "100000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0 * 100000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 100.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : City Car\n\t\t\t\t"
		 << "  Merk             : Daihatsu Ayla\n\t\t\t\t"
		 << "  Paket            : 1 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_daihatsu_ayla2 ()
{
	
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "150000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0 * 150000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 150.000,00 \n\t\t\t\t"
		 << "  Diskon           : 0 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : City Car\n\t\t\t\t"
		 << "  Merk             : Daihatsu Ayla\n\t\t\t\t"
		 << "  Paket            : 3 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}

int struk_daihatsu_ayla3 ()
{
	balik :
		
	// memasukkan data untuk pembayaran
	string pilihan;
	juy :
	cout << "\n\n\t\t\t\t"
		 << "<------------------Pembayaran-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                                 : ";
	getline (cin, nomor_rekening);
	if ((nomor_rekening >= "0" && nomor_rekening <= "9") || (nomor_rekening == "-"))
	{
		goto abis_nomor_rekening;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_nomor_rekening :
								
	cout << "\t\t\t\t2. Bank                                           : ";
	getline (cin, bank);
	if ((bank >= "a" && bank <= "z") || (bank >= "A" && bank <= "Z"))
	{
		goto abis_bank;	
	}	
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan huruf dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_bank :
							
	cout << "\t\t\t\t3. Jumlah uang yang dikirimkan (>= Harga sewa)    : Rp ";
	getline (cin, jumlah_duit);
	if ((jumlah_duit >= "0" && jumlah_duit <= "9") && (jumlah_duit >= "1000000"))
	{
		goto abis_jumlah_duit;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t"
			 << "==============================================================\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "| : : : : : Silahkan masukkan angka dan ulangi !!! : : : : : |\n\t\t\t\t"
			 << "|                                                            |\n\t\t\t\t"
			 << "==============================================================\n";
		waktu2 ();
		system ("cls");
		goto juy;
	}
	abis_jumlah_duit :
	
	// cek ulang data pembayaran
	cout << "\n\n\t\t\t\t"
		 << "<------------------Cek Ulang-------------->\n\n"
		 << "\t\t\t\t1. Nomor Rekening                 : " << nomor_rekening << endl
		 << "\t\t\t\t2. Bank                           : " << bank << endl
		 << "\t\t\t\t3. Jumlah uang yang dibayarkan    : Rp " << jumlah_duit << endl
		 << "\t\t\t\t Apakah data yang anda masukkan benar ? ";
		cin  >> pilihan;
		
	if (pilihan == "y" || pilihan == "Y" || pilihan == "IYA" || pilihan == "iya" || pilihan == "Iya" || pilihan == "yes")
	{
		loading ();
	}
	else
	{
		system ("cls");
		cout << "\n\n\n\n\t\t\t\t"
			 << "Silahkan masukkan ulang data anda\n\n";
			
		waktu1 ();
		system ("cls");
		goto juy;
	}
			
	// diskon
	int harga_diskon = 0.1 * 1000000;
	// struk
	cout << "\n\n\n\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - -R.E.M.O.T.E- - - - - - - - |\n\t\t\t\t"
		 << "|- - - - - - - -Struk Pembayaran - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Data Diri Pembeli                           |\n\t\t\t\t"
		 << "  Nama             : " << nama << "\n\t\t\t\t"
		 << "  Nomor KTP        : " << nomor_ktp << "\n\t\t\t\t"
		 << "  E-mail           : " << email << "\n\t\t\t\t"
		 << "  No. Telphone     : " << nomor_telphone << "\n\t\t\t\t"
		 << "  Alamat           : " << alamat << "\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "| Pembayaran                                  |\n\t\t\t\t"
		 << "  No. Rekening     : " << nomor_rekening << "\n\t\t\t\t"
		 << "  Bank             : " << bank << "\n\t\t\t\t"
		 << "  Uang Dibayarkan  : Rp " << jumlah_duit << "\n\t\t\t\t"
		 << "  Harga Sewa       : Rp 1.000.000,00 \n\t\t\t\t"
		 << "  Diskon           : 10 % \n\t\t\t\t"
		 << "  Harga diskon     : - Rp " << harga_diskon << "\n\t\t\t\t"
		 << "|-------------------------------------------- |\n\t\t\t\t"
		 << "| Sewa                                        |\n\t\t\t\t"
		 << "  Jenis            : City Car\n\t\t\t\t"
		 << "  Merk             : Daihatu Ayla\n\t\t\t\t"
		 << "  Paket            : 7 hari\n\t\t\t\t"
		 << "|---------------------------------------------|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "| - - - - - - - - Terima Kasih - - - - - - - -|\n\t\t\t\t"
		 << "|                                             |\n\t\t\t\t"
		 << "===============================================\n\t\t\t\t";
}
