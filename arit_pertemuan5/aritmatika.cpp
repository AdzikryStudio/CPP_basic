#include <iostream>

using namespace std;
int main(){
	
	//untuk memunculkan hasil koma menggunakan float
	//operator = +, -, *, /, %
	int a=5;
	int b=6;

	int hasil;
	
	//penjumlahan
	hasil = a + b;
	cout << a << "+" << b << "=" << hasil << endl;
	
	//penjumlahan
	hasil = a + b;
	cout << a << "+" << b << "=" << hasil << endl;
	
	//pengurangan
	hasil = a - b;
	cout << a << "-" << b << "=" << hasil << endl;
	
	//perkalian
	hasil = a * b;
	cout << a << "*" << b << "=" << hasil << endl;
	
	//pembagian
	hasil = a / b;
	cout << a << "+" << b << "=" << hasil << endl;
	
	//modulus
	hasil = a % b;
	cout << a << "%" << b << "=" << hasil << endl;
	
	//urutan eksekusi (sama seperti urutan dalam matemtika)
	hasil = a +b * a;
	cout << a << "+" << b << "*" << a <<"=" << hasil <<endl;
	return 0;
} 
