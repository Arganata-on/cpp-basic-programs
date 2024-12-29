#include <iostream>
using namespace std;

void menampilkanMatriks(int baris, int kolom, int array[][3]);
void menghitungDiagonal();

int main()
{
    int array[3][3];
    int baris = sizeof(array) / sizeof(array[0]);
    int kolom = sizeof(array[0]) / sizeof(array[0][0]);

    cout << "==============================\n";
    cout << "Masukkan isi elemen\n";
    cout << "==============================\n";

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << '[' << i << ']' << '[' << j << ']' << ": ";
            cin >> array[i][j];
        }
    }

    menampilkanMatriks(baris, kolom, array);

    return 0;
}

void menampilkanMatriks(int baris, int kolom, int array[][3])
{
    cout << "==============================\n";

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "| " << array[i][j] << " ";
        }
        cout << "|\n";
    }
}

void menghitungDiagonal()
{
}