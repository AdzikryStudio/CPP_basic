#include <iostream>

using namespace std;
int main(){
	
	//sama dengan
	int a = 12;
	int b = 12;
	
	int c = 12;
	int d = 132;
	
	bool hasil1, hasil2;
	
	//komparasi(boolean) atau perbandingan
	
	//sama dengan (==)
	hasil1 = (a==b);
	cout << hasil1 << endl;
	
	//tidak sama dengan(!=)
	hasil2 = (c!=d);
	cout << hasil2 << endl;
	
	//kurang dari (<)
	hasil1 = (a<b);
	cout << hasil1 << endl;
	
	//lebih dari(>)
	hasil2 = (c>d);
	cout << hasil2 << endl;
	
	// kurang dari sama dengan (<=)
	hasil1 = (a<=b);
	cout << hasil1 << endl;
	
	//leboih dari sama dengan(>=)
	hasil2 = (c>=d);
	cout << hasil2 << endl;
	
	return 0;
} 
