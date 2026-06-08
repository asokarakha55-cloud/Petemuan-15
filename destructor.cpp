#include <iostream>
using namespace std;

/// @brief Program untuk mendemonstrasikan penggunaan destruktor dalam C++
/**Class angka digunakan untuk mengelola array of integers */
class angka
{
private:
    /// @brief Pointer untuk menyimpan alamat array of integers
    int *arr;
    /// @brief Variabel untuk menyimpan panjang array
    int panjang;

public:
    /// @brief konstruktor angka
    /// @param
    angka(int);
    /// @brief destruktor angka
    ~angka();
    void cetakData();
    void isiData();
};

angka::angka(int i)
{
    panjang = i;
    arr = new int[i];
    isiData();
}

angka::~angka()
{
    cout << endl;
    cetakData();
    delete[] arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}

/// @brief Fungsi untuk mencetak data dalam array
/**Digunakan untuk menampilkan isi dari array of integers */
void angka::cetakData()
{
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }
}

/// @brief Fungsi untuk mengisi data dalam array
/**Digunakan untuk mengisi nilai ke dalam array of integers */
void angka::isiData()
{
    for (int i = 1; i < panjang; i++)
    {
        cout << i << " = ";
        cin >> arr[i];
    }
    cout << endl;
}

/// @brief Main Program
/**Tempat menjalankan program utama */
int main()
{
    angka belajarcpp(3);
    angka *ptrBelajarcpp = new angka(5);
    delete ptrBelajarcpp;

    return 0;
}