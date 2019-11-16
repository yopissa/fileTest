#include <iostream.h>
#include <conio.h>

   int main(){

   	int diskon;
      int a, jumlah;

      cout<<"DumbWaysAsik, potongan 50%, minimal uang belanja 20000, Maksimal diskon 20000"<<endl;
      cout<<"DumbWaysMantap, potongan 30%, minimal uang belanja 50000, maksimal diskon 40000"<<endl;

      cout<<"Masukkan Jumlah yang harus dibayar : ";
      cin>>a;

      if(a>=20000 && a<=49999){
      	diskon = a*0.5;
         jumlah = a-diskon;
         cout<<"anda mendapat diskon DumsWayAsik "<<diskon<<endl;
         cout<<"Uang : "<<a<<endl;
         cout<<"Kembalian : "<<jumlah;
      }
      if(a>=50000){
         diskon = a*0.3;
         jumlah = a-diskon;
         cout<<"anda mendapat diskon DumsWayMantap "<<diskon<<endl;
         cout<<"Uang : "<<a<<endl;
         cout<<"Kembalian : "<<jumlah;
      }
      else if(a<=1999){
      	cout<<"Maaf Anda tidak mendapatkan diskon";
      }


     getch();
   }
