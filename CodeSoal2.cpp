#include <iostream>
using namespace std;
int main() {
    int n,i,j,a;

    cout << "Masukkan nilai : ";
    cin >> n;

    if (n == -1) 
    {
        cout << "Tidak ada yang dihitung\n";
        return 0;
    }
    if (n < 3 || n > 9) 
    {
        cout << "Inputan Tidak Memenuhi Batas\n";
    }

    else {
    for (i = 1; i <= n; ++i) 
    {
        for (j = 1; j <= i; ++j) 
        {
            cout << 'x' << " ";
        }
        cout << endl;
    }
        //SEGITIGA TERBALIK
        for (i = 1; i <= n; i++) 
        {
            for (j = 1; j <= i+n-1; j++) 
            {
                cout << "  ";
            }

        for (a = n; a>= i; a--) 
        {
            cout << "x ";
        }
        cout << endl;
        }

        return 0;
        }
    }



