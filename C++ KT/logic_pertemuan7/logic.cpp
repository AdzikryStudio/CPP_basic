#include <iostream>

using namespace std;
int main(){
	
	//logika
	//operator = not, and, or
	
	int a = 71;
	int b = 81;
	
	bool hasil;
	
	//not !
	hasil = !(a == 71);
	cout << hasil << endl;
	
	//and
	//harus sama sama true
	
	hasil = (a == 71) and (b == 81);
	cout << hasil << endl;
	
	//or
	//bisa true and false
	
	hasil = (a == 71) or (b == 81); // true and true
	cout << hasil << endl;
	hasil = (a == 61) or (b == 81);
	cout << hasil << endl;
	
	
	return 0;
} 
