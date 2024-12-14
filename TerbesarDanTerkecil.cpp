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
  cout << "\nAngka terkecil: " << angka[0];
  cout << "\nAngka terbesar: " << angka[sizeof(angka) / sizeof(int) - 1];
  return 0;
}