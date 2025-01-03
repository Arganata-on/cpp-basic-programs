#include <cmath>
#include <iostream>

using namespace std;

void volumeKubus(int panjangSisi);
void luasPermukaan(int panjangSisi);

int main() {
  int panjangSisi;

  cout << "Masukkan panjang sisi kubus (dalam cm): ";
  cin >> panjangSisi;

  volumeKubus(panjangSisi);
  luasPermukaan(panjangSisi);

  return 0;
}
void volumeKubus(int panjangSisi) {
  double volume = pow(panjangSisi, 3);
  cout << "Volume dari kubus tersebut adalah: " << volume << " cm³\n";
}
void luasPermukaan(int panjangSisi) {
  double luasPermukaan = 6 * pow(panjangSisi, 2);
  cout << "Luas permukaan dari kubus tersebut adalah: " << luasPermukaan
       << "cm²";
}