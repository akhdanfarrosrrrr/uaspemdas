#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    float nilaix[5];
    float nilaiy[5];
    float nilair[5];
    float koefisdeter[5];
    float korelasi[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan nilai x ke-" << i << ": ";
        cin >> nilaix[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan nilai y ke-" << i << ": ";
        cin >> nilaiy[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan nilai r ke-" << i << ": ";
        cin >> nilair[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan nilai koefisdeter ke-" << i << ": ";
        cin >> koefisdeter[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (korelasi[i])
        {
            cout << "Nilai x: " << nilaix[i] << endl;
            cout << "Nilai y: " << nilaiy[i] << endl;
            cout << "Nilai r: " << nilair[i] << endl;
        }
    }
}