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
  
  if (aritmatika == '+'){
  hasil = a+b;
  } else if (aritmatika == '-'){
  hasil = a-b;
  } else if (aritmatika == '*'){
  hasil = a*b;
  } else if (aritmatika == '/'){
  hasil = a/b;
  }
  else {
 	 cout << "operator anda salah" << endl;
 }
  
  cout << "=" << hasil << endl;
    return 0;
}
