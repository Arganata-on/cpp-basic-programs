#include <ctime>
#include <iostream>
using namespace std;

int main() {
  srand(time(NULL));
  int dadu = rand() % 6 + 1;

  cout << dadu;

  return 0;
}