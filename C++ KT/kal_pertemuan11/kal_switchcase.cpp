#include <iostream>

using namespace std;

int main() {
	//kalkulator sederhana if-else
	
  float a,b,hasil;
  char aritmatika;
  
  cout << " Selamat datang di program kalkulator sederhana \n \n";
  
  //input
  cout << "masukkan nilai pertama: ";
  cin >> a;
  cout << "pilih operator +, -, *, /: ";
  cin >> aritmatika;
   cout << "masukkan nilai kedua: ";
	cin >> b;
  
  cout <<"\n Hasil: ";
  cout << a << aritmatika << b;
  
  switch(aritmatika){
  	case'+':
  		hasil = a+b;
  		break;
  	case'-':
  		hasil = a-b;
  		break;
  	case'*':
  		hasil = a*b;
  		break;
  	case'/':
  		hasil = a/b;
  		break;
  	default:
  	cout << "operator tidak dikenali";
  }
  
  cout << "=" << hasil << endl;
    return 0;
}
