#include <iostream>
using namespace std;

int main (){
	double ton=35273.92;
	
	double berat;
	cin >> berat;
	
	double ounce = 1/ton;
	double beratTon = berat*ounce;
	
	double jumlah=1/beratTon;
	cout << jumlah;
	cout <<beratTon<<endl;	
}
