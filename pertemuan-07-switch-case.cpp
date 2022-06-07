#include <iostream>
using namespace std;

int main(){
	int angka_hari;
	cout << "Masukkan nomor hari = ";
	cin >> angka_hari;
	
	switch(angka_hari){
		case 1:
			cout << "Senin";
		break;
		case 2:
			cout << "Selasa";
		break;
		case 3:
			cout << "Rabu";
		break;
		default:
			cout << "Maaf hari tidak ditemukan";
		break;
	}	
}
