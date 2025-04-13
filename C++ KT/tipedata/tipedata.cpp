#include <iostream>

using namespace std;
int main(){
	
	// 1 byte = 8 bit
	
	//bilangan bulat
	// int = 32 bit
		//max int = 21783647 (8digit)
	int a = 10;
	
	//long = lebih panjang
	long b=6;
	
	//short = lebih pndek
	short c =7;
		
	//bilangan desimal
	float d = 1.0;
	double e=  2.5;
	
	//character
	char f= 'a'; //1 bit
	
	//boolean
	bool g = true; //true o false
	
	cout<<a<<endl;
	cout<<sizeof(a)<< "byte"<<endl;
	cout<<INT_MIN<<endl;
	cout<<INT_MAX<<endl;
	cout<<d<<endl;
		cout<<e<<endl;
			cout<<f<<endl;
				cout<<g<<endl;
	cin.get();
	return 0;
} 
