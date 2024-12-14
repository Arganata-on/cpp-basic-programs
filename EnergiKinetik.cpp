#include <cmath>
#include <iostream>

using namespace std;

void hitungEk(double massa, double kecepatan);

int main() {
  double massa, kecepatan;

  cout << "Masukkan massa dalam (kg): ";
  cin >> massa;
  cout << "Masukkan kecepatan dalam (m/s): ";
  cin >> kecepatan;

  hitungEk(massa, kecepatan);

  return 0;
}
void hitungEk(double massa, double kecepatan) {
  double energiKinetik = 0.5 * massa * pow(kecepatan, 2);

  cout << "Energi kinetik: " << energiKinetik << " joule";
}