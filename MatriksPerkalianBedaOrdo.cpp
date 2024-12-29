#include <iostream>
using namespace std;

void perkalianMatriks(int baris, int kolom1, int kolom2, int matriks1[][2], int matriks2[][4], int hasil[][4]);
void hasilPerkalian(int baris, int kolom2, int hasil[][4]);

int main()
{
    int hasil[3][4] = {0};

    int matriks1[][2] = {{1, 2},
                         {3, 4},
                         {5, 6}};

    int matriks2[][4] = {{1, 2, 3, 4},
                         {5, 6, 7, 8}};

    int baris = sizeof(matriks1) / sizeof(matriks1[0]);
    int kolom1 = sizeof(matriks1[0]) / sizeof(matriks1[0][0]);
    int kolom2 = sizeof(matriks2[0]) / sizeof(matriks2[0][0]);

    cout << "Hasil perkalian: \n";

    perkalianMatriks(baris, kolom1, kolom2, matriks1, matriks2, hasil);
    hasilPerkalian(baris, kolom2, hasil);

    return 0;
}

void perkalianMatriks(int baris, int kolom1, int kolom2, int matriks1[][2], int matriks2[][4], int hasil[][4])
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom2; j++)
        {
            for (int k = 0; k < kolom1; k++)
            {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
}

void hasilPerkalian(int baris, int kolom2, int hasil[][4])
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom2; j++)
        {
            cout << hasil[i][j] << " ";
        }
        cout << '\n';
    }
}
