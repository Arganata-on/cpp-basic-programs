/*Buat program yang meminta pengguna untuk memasukkan 5 angka. Kemudian,
 * program harus menampilkan angka terbesar dan terkecil di antara angka-angka
 * tersebut.*/

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int angka[5];

  cout << "Masukkan " << sizeof(angka) / sizeof(int) << " angka!\n";
  for (int i = 0; i < sizeof(angka) / sizeof(int); i++) {
    cin >> angka[i];
  }

  sort(begin(angka), end(angka));

  for (int i = 0; i < sizeof(angka) / sizeof(int); i++) {
    cout << angka[i] << " ";
  }
  return 0;
}