#include <iostream>

int main()
{
   float c,f,r;
   int input;

   cout<<"Program Konversi Suhu\n";
   cout<<"============================\n";
   cout<<"[1] Celcius ke Reamur\n";
   cout<<"[2] Celcius ke Fahrenheit\n";
   cout<<"Silahkan pilih salah satu [1]/[2] ?";
   cin>>input;
   cout<<"============================\n";

   if (input==1)
   {
      cout<<"Konversi Dari Celcius ke Reamur\n";
      cout<<"============================\n";
      cout<<"Masukkan Suhu dalam satuan Celcius = ";cin>>c;
      r=c*4/5;
      cout<<"\nSuhu Dalam Reamur = ";cout<<r;
   }
   else
   {
      if(input==2)
      {
    cout<<"Konversi Dari Celcius ke Fahrenheit\n";
       cout<<"============================\n";
    cout<<"Masukkan Suhu dalam satuan Celcius = ";cin>>c;
       f=(c*9/5)+32;
    cout<<"\nSuhu Dalam Fahrenheit = ";cout<<f;
      }
      else
      {
          cout<<"inputan salah";
      }
   }
   getch();
}
