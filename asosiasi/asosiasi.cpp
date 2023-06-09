#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
	string nama;
	vector<dokter*> daftar_dokter;
	pasien(string pNama) :nama(pNama) {
		cout << "Pasien \"" << nama << "\" ada\n";
	}
	~pasien() {
		cout << "Pasien \"" << nama << "\" tidak ada\n";
	}
	void tambahDokter(dokter*);
	void cetakDokter();
};

class dokter{
public:
	string nama;
	vector<pasien*>daftar_pasien;

	dokter(string pNama) :nama(pNama) {
		cout << "Dokter \"" << nama << "\"  ada\n";
	}
	~dokter() {
		cout << "Dokter \"" << nama << "\" tidak ada\n";
	}
	~dokter() {
		cout << "Dokter \"" << nama << "\" tidak ada\n";
	}

	void tambahPasien(pasien*);
	void cetakPasien();
};
void pasien::cetakDokter() {
	cout << "Daftar Dokter yang mempunyai pasien \"" << this->nama << "\":\n";
	for (auto& a : daftar_dokter) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
void dokter::cetakPasien() {
	cout << "Daftar pasien yang mempunyai dokter \"" << this->nama << "\":\n";
	for (auto& a : daftar_pasien) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
