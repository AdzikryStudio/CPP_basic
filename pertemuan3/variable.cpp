#include <iostream>
using namespace std;

int main(){

	string nama;
	string asal;
	int nomor;
	
	cout<<"masukkan nama anda \t: ";
	getline(cin, nama);
	
	cout<<"masukkan tempat tinggal anda "<<nama <<"\t: ";
	getline(cin, asal);
	
	cout<<"masukkan nomor antrian: ";
	cin>>nomor;
	
	cout<<"namamu adalah "<<nama<<" tempat tinggalmu adalah "<<asal<<endl;
	cout<<"nomor antrianmu "<<nomor<<endl;
	cout<<"GUNAKAN INI UNTUK PENDAFTARAN "<<endl;
	cout<<"HANYA BERLAKU 24 JAM SETELAH COMPILE ";
}
