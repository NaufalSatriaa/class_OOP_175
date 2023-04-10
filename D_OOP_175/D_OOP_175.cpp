#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM = " << nim;
		cin >> nim;
	}
};

class MataKuliah {
private:
	int sks;
	string kode;
	string namaMK;
public:
	void inputMK()
	{
		cout << "\nMasukkan Jumlah sks = ";
		cin >> sks;
		cout << "\nMasukkan Kode MK = ";
		cin >> kode;
		cout << "\nMasukkan Nama MK = ";
		cin >> namaMK;
	}

	void tampilMK() {
		cout << "\Jumlah sks = " << sks;
		cout << "\Kode MK = " << kode;
		cout << "\Nama MK = " << namaMK;
	}
};