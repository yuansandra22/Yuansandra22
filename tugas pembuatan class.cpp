#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int kode, harga, jumlah, total;
    char nama [20];
    cout << "* PROGRAM PENJUALAN BARANG YUAN SANDRA *\n";
    cout << "----------------------------------------\n";
    
    cout << "Masukan Kode Barang    : ";
    cin >> kode;
    cout << "Masukan Nama Barang    : ";
    cin >> nama;
    cout << "Masukan Harga Barang    : ";
    cin >> harga;
    cout << "Jumlah Beli        : ";
    cin >> jumlah;
    cout << "------------------------------------" << endl;  
    total = harga * jumlah;
    
    cout << "Proses Total - harga x jumlah beli" << endl;
    
    //Output
    
    cout << "         * STRUK PEMBAYARAN *       " << endl;
    cout << "////////////////////////////////////" << endl;
    
    cout << "Nama Barang        : " << nama << endl;
    
    cout << "Harga Barang       : " << harga << endl;
    
    cout << "Jumlah Beli        : " << jumlah << endl;
    
    cout << "Total              : " << total << endl;
    
    cout << "/////////////////////////////////////" << endl;
    cout << "          ~~ Trima Kasih ~~                  ";
    getch();
}
