#include <iostream>
using namespace std; 

int main (){
	double luasrumah = 42; 
	double lantaiprkt = 193*1215;
	double luas1box= lantaiprkt*8/1000000;
	double jumlahboxP,biayaP,biayaPG,totalB;
	
	cout <<"luas rumah 	  :"<<luasrumah<<"m2"<<endl;
	cout <<"luas 1 box parket :"<<luas1box<<"m2"<<endl;
	
	jumlahboxP=luasrumah/luas1box;
	cout <<"jumlah box parket :"<<jumlahboxP<<endl;
	
}
