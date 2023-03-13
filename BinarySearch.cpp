#include <iostream>
using namespace std;

int BinarySearch(int array[], int total, int cari) //menggunakann nama "BinarySearch" yang didalamnya terhubung dengan int main()
{
    int kecil = 0; //diset 0, agar mulai dari 0
    int besar = total - 1; //-1 karena total yang ditulis merupakan total data yang ada
    int tengah;

    while (kecil <= besar) //diset agar program berjalan
    {
        tengah = (kecil + besar)/2; //binary search

        if(cari == array[tengah])
        {
            return tengah;
        }
        else if(cari > array[tengah])
        {
            kecil = tengah + 1; //+1 agar pegoram lebih efisien
        }
        else
        {
            besar = tengah - 1; //-1 agar program lebih efisien
        }

    }

    return -1; //karena setnya 0 maka returnnya menggunakan kurang dari 0
}

int main()
{
    int data[] = {1,2,3,4,5,6,7,8,9}; //data yang ada

    int nilai;
    cout << "data yang ingin anda cari: " << endl;
    cin >> nilai;

    int hasil = BinarySearch(data, 9, nilai); //masukan agar bisa masuk ke int BinarySearch

    if (hasil >= 0)
    {
        cout << data[hasil] <<" ditemukan pada indeks ke-" << hasil << endl;
    }
    else
    {
        cout <<"data yang anda cari tidak ditemukan" << endl;
    }
//pada c++ defaultnya adalah return 0
}