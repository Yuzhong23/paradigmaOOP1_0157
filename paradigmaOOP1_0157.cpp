#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    const int id;
    string nama;
    float nilai;

public:
    mahasiswa(int pid, string pnama, float pnilai) :id(pid), nama(pnama), nilai(pnilai) {
        //deklarasi
    }

    ~mahasiswa() {
        cout << "id    = " << id    << endl;
        cout << "nama  = " << nama  << endl;
        cout << "nilai = " << nilai << endl;
    }
};

int main()
{
    mahasiswa msh(12, "Asroni", 90.5);

    return 0;
}
