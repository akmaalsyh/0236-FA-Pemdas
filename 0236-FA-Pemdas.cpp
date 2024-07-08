#include <iostream>
using namespace std;

class MasukUniversitas 
{
private: // isi access modifier disini
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;
 // isi daftar variable yang dibutuhkan di bawah ini
public:
    MasukUniversitas() 
    {
        uangPendaftaran = 0;
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalBiaya = 0;
    // isi nilai default variable yang dibutuhkan di bawah ini
    }

    virtual void namaJalurMasuk() 
    { 
        return; 
    }

    // isi disini dengan fungsi virtual yang dibutuhkan

    void insert()
    {
        int uangPendaftaran;
        cout << "Masukkan uang pendaftaran:";
        cin >> uangPendaftaran;

        int uangSemesterPertama;
        cout << "Masukkan Uang Semester Pertama:";
        cin >> uangSemesterPertama;

        int uangBangunan;
        cout << "Masukkan Uang Bangunan:";
        cin >> uangBangunan;


        if(uangPendaftaran + uangBangunan + uangSemesterPertama > 20000000)
        {
            cout << "Total Biaya: " << endl;
            cout << "Kategori: Mahal" << endl;
            cout << "Rekomendasi: Tidak Direkomendasikan" << endl;
        }

    }

    void setUangPendaftaran(int nilai) 
    {
        this->uangPendaftaran = nilai;
    }

    float getUangPendaftaran() 
    {
        int uangPendaftaran;
        cout << "Masukkan uang pendaftaran:";
        cin >> uangPendaftaran;

        int uangSemesterPertama;
        cout << "Masukkan Uang Semester Pertama:";
        cin >> uangSemesterPertama;

        int uangBangunan;
        cout << "Masukkan Uang Bangunan:";
        cin >> uangBangunan;
        
        if(uangPendaftaran + uangBangunan + uangSemesterPertama > 10000000)
        {
            cout << "Kategori: Sedang" << endl;
            cout << "Rekomendasi: Dipertimbangkan" << endl;
        }
    
        return uangPendaftaran;
    }

    void display()
    {

    }
    // isi setter dan getter variable yang dibutuhkan di bawah ini
};

class SNBT : public MasukUniversitas 
{
    void masukUniversitas()
    {

    }
    // isi disini untuk melengkapi class SNBT
};

class SNBP : public MasukUniversitas 
{
    // isi disini untuk melengkapi class SNBP
};

int main() 
{
    MasukUniversitas mu;
    int choice;

    do
    {
        cout << "\nPilih Jalur Masuk:\n";
        cout << "1. SNBT\n";
        cout << "2. SNBP\n";
        cout << "3. Keluar\n";
        cout << "Pilih: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            mu.insert();
            break;
        case 2:
            mu.getUangPendaftaran();
            break;
        case 3:
            cout << "Keluar...\n";
            break;
        default:
            cout << "Invalid choice, please try again\n";
        }
    } while (choice != 3);

    return 0;
 // isi disini untuk fungsi main
}