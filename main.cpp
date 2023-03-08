#include <iostream>
using namespace std;

int main() {
  int fiyat;
  int kdv;
  double tutar;
  cout << "Lütfen bir fiyat giriniz.";
  cin >> fiyat;
  cout << "Ürünün kdv değerini giriniz.";
  cin >> kdv;
  if(kdv==0){
  	cout << "Toplam kdv:" << fiyat;
    }
  if(kdv==1){
  	tutar=((double)(fiyat*kdv))/100;
  	cout << "Toplam kdv:" << tutar;
    }
  if(kdv==8){
  	tutar=((double)(fiyat*kdv))/100;
  	cout << "Toplam kdv:" << tutar;
    }
  if(kdv==18){
  	tutar=((double)(fiyat*kdv))/100;
  	cout << "Toplam kdv:" << tutar;
    }
  return 0;
}
