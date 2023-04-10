#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM = " << nim;
		cout << "Nama = " << nama;
		
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
		cout << "\nJumlah sks = " << sks;
		cout << "\nKode MK = " << kode;
		cout << "\nNama MK = " << namaMK << endl;
	}
};

int main() {
	Mahasiswa mhs;
	MataKuliah mk;

	cout << "\nMasukkan NIM = ";
	cin >> mhs.nim;
	cout << "\nMasukkan Nama = ";
	cin >> mhs.nama;

	mk.inputMK();
	mhs.tampil();
	mk.tampilMK();
}