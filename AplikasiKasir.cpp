/*##  Program C++ Aplikasi Kasir  ##
==================================

# Selamat datang di Mini Market ILKOOM #

Masukkan jumlah barang yang ingin dibeli: 3

Barang ke-1
Nama barang  : Sabun mandi
Harga satuan : 3000
Jumlah Sabun mandi yang dibeli: 12

Barang ke-2
Nama barang  : Deterjen
Harga satuan : 25000
Jumlah Deterjen yang dibeli: 7

Barang ke-3
Nama barang  : Gula pasir
Harga satuan : 18000
Jumlah Gula pasir yang dibeli: 4


----------------------------------------------------------
####----         Struk Mini Market ILKOOM         ----####
----------------------------------------------------------
No   Barang    Jumlah     Harga Satuan     Sub Total
1 Sabun mandi    12              3000          36000
2 Deterjen        7             25000         175000
3 Gula pasir      4             18000          72000
----------------------------------------------------------
Total harga : Rp.283000

Jumlah Bayar: Rp.300000

Kembalian   : Rp.17000

----------------------------------------------------------
####   Terimakasih sudah berbelanja, datang kembali   ####
----------------------------------------------------------*/

#include <iostream>
using namespace std;

int items();

int main() {
  double harga;

  cout << "##  Program C++ Aplikasi Kasir  ##\n";
  cout << "==================================\n\n";
  cout << "# Selamat datang di Mini Market Arganata #\n\n";

  items();

  return 0;
}
int items() {
  int jumlahBarang;

  cout << "Masukkan jumlah barang yang ingin dibeli: ";
  cin >> jumlahBarang;

  int barang;

  for (int i = 0; i < jumlahBarang; i++) {
    cin >> barang;
  }
  switch (barang) {
  case 1:
    string namaBarang = "Sabun mandi";
    double hargaSatuan = 3000;
    break;
  }

  return 0;
}
