#include <iostream>

using namespace std;

int main()
{

    int user_or_admin;
    string nama_barang[999];
    int kuantitas_barang[999],
        harga_barang[999],
        pilihan;
    int id = 0;

pilih_role:

    cout << "Pilih Role :" << endl;
    cout << "1. Admin " << endl;
    cout << "2. User " << endl;

    cout << "masukkan inputan [1/2] :";
    cin >> user_or_admin;
    system("cls");

    switch (user_or_admin)
    {
    case 1:
    {
        string un,
            ps;
        cout << "masukkan username : ";
        cin >> un;
        cout << "masukkan password : ";
        cin >> ps;
        system("cls");

        if (un == "admin123" && ps == "admin123")
        {
        menu_pilihan:
            cout << "========== APLIKASI DATA BARANG ==========" << endl;
            cout << "1. Lihat Semua Data " << endl;
            cout << "2. Lihat Detail Data " << endl;
            cout << "3. Tambahkan Data Barang " << endl;
            cout << "4. Perbaharui Data Barang " << endl;
            cout << "5. Hapus Data Barang " << endl;
            cout << "6. Kembali" << endl;
            cout << endl;

            cout << "Masukkan Pilihan [1-6] : ";
            cin >> pilihan;
            system("cls");

            switch (pilihan)
            {
            case 1:
            {
                cout << "MENAMPILKAN SEMUA DATA :" << endl;

                if (id == 0)
                {
                    cout << "data kosong / tidak ada data yang dapat ditampilkan" << endl;
                }
                else
                {
                    for (int i = 0; i < id; i++)
                    {
                        if (nama_barang[i] != "dihapus")
                        {
                            cout << "id barang : " << i << " , Nama Barang : " << nama_barang[i] << endl;
                        }
                    }
                }

                cout << endl;
                goto menu_pilihan;
                cout << endl;
                break;
            }

            case 2:
            {
                cout << "MELIHAT DETAIL BARANG" << endl;

                if (id == 0)
                {
                    cout << "data kosong / tidak ada data yang dapat ditampilkan" << endl;
                }
                else
                {
                    for (int i = 0; i < id; i++)
                    {
                        if (nama_barang[i] != "dihapus")
                        {
                            cout << "id barang : " << i << " , Nama Barang : " << nama_barang[i] << endl;
                        }
                    }

                    cout << endl;
                    cout << "Masukkan id barang : ";
                    int id_detail;
                    cin >> id_detail;

                    cout << "Nama Barang : " << nama_barang[id_detail] << endl;
                    cout << "Kuantitas Barang : " << kuantitas_barang[id_detail] << endl;
                    cout << "Harga Barang: Rp." << harga_barang[id_detail] << endl;

                    cout << endl;
                    goto menu_pilihan;
                    cout << endl;
                }

                break;
            }

            case 3:
            {

                cout << "MENAMBAHKAN DATA BARANG" << endl;
                cout << "Masukkan Nama Barang : ";
                getline(cin >> ws, nama_barang[id]);
                cout << "Masukkan Kuantitas Barang : ";
                cin >> kuantitas_barang[id];
                cout << "Masukkan Harga Barang : Rp.";
                cin >> harga_barang[id];
                id += 1;
                cout << "DATA BERHASIL DI TAMBAHKAN" << endl;

                cout << endl;
                goto menu_pilihan;
                cout << endl;
                break;
            }

            case 4:
            {
                cout << "MENGUBAH DATA BARANG" << endl;
                string new_nama;
                int new_harga,
                    new_kuantitas,
                    new_id;

                if (id == 0)
                {
                    cout << "data kosong / tidak ada data yang dapat ditampilkan" << endl;
                }
                else
                {
                    for (int i = 0; i < id; i++)
                    {
                        if (nama_barang[i] != "dihapus")
                        {
                            cout << "id barang : " << i << " , Nama Barang : " << nama_barang[i] << " , Kuantitas Barang : " << kuantitas_barang[i] << " , Harga Barang : " << harga_barang[i] << endl;
                        }
                    }
                }

                cout << endl;
                cout << "Masukkan id barang : ";
                cin >> new_id;

                if (new_id < id)
                {
                    cout << "Nama Barang : ";
                    getline(cin >> ws, new_nama);
                    nama_barang[new_id] = new_nama;
                    cout << "Kuantitas Barang : ";
                    cin >> new_kuantitas;
                    kuantitas_barang[new_id] = new_kuantitas;
                    cout << "Harga Barang : Rp.";
                    cin >> new_harga;
                    harga_barang[new_id] = new_harga;

                    cout << "DATA BERHASIL DI PERBAHARUI" << endl;
                }
                else
                {
                    cout << "Id tidak valid";
                }

                cout << endl;
                goto menu_pilihan;
                cout << endl;
            }
            break;

            case 5:
            {
                cout << "MENGHAPUS DATA BARANG" << endl;
                int deleted_id;

                if (id == 0)
                {
                    cout << "data kosong / tidak ada data yang dapat ditampilkan" << endl;
                }
                else
                {
                    for (int i = 0; i < id; i++)
                    {
                        if (nama_barang[i] != "dihapus")
                        {
                            cout << "id barang : " << i << " , Nama Barang : " << nama_barang[i] << " , Kuantitas Barang : " << kuantitas_barang[i] << " , Harga Barang : " << harga_barang[i] << endl;
                        }
                    }
                }

                cout << "Masukkan id barang yang akan dihapus : ";
                cin >> deleted_id;
                nama_barang[deleted_id] = "dihapus";
                kuantitas_barang[deleted_id] = 0;
                harga_barang[deleted_id] = 0;
                cout << "DATA BERHASIL DI HAPUS" << endl;

                cout << endl;
                goto menu_pilihan;
                cout << endl;
            }

            break;

            case 6:
            {
                goto pilih_role;
                break;
            }

            default:
            {
                cout << endl
                     << "invalid input";
            }

            break;
            }
        }

        else
        {
            cout << "username atau password salah !";
        }
    }

    break;
    case 2:
    {
        int id_barang, jumlah_beli, sisa_stok, jumlah_harga, lanjut;
    daftar_barang:
        cout << "========== PILIH BARANG DI BAWAH UNTUK DIBELI ==========" << endl;
        if (id == 0)
        {
            cout << "data kosong / tidak ada data yang dapat ditampilkan" << endl;
        }
        else
        {
            for (int i = 0; i < id; i++)
            {
                if (nama_barang[i] != "dihapus")
                {
                    cout << i << "." << nama_barang[i] << endl;
                }
            }
        }
        cout << endl;
        cout << "Masukkan nomor yang ingin dibeli : ";
        cin >> id_barang;

        cout << "Nama Barang : " << nama_barang[id_barang] << endl;
        cout << "Stok Barang : " << kuantitas_barang[id_barang] << endl;
        cout << "Harga Barang: Rp." << harga_barang[id_barang] << endl;
        cout << "Masukkan jumlah yang ingin di beli : ";
        cin >> jumlah_beli;
        if (jumlah_beli > kuantitas_barang[id_barang])
        {
            cout << "jumlah barang tidak boleh melebihi kuantitas" << endl;
            cout << "masukkan ulang jumlah barang yang ingin dibeli : ";
            cin >> jumlah_beli;
        }
        sisa_stok = kuantitas_barang[id_barang] - jumlah_beli;
        kuantitas_barang[id_barang] = sisa_stok;
        jumlah_harga = jumlah_beli * harga_barang[id_barang];
        cout << "Harga yang harus di bayarkan : Rp." << jumlah_harga << endl
             << endl;
        cout << "lanjut/tidak ? [1/2] : ";
        cin >> lanjut;

        system("cls");
        switch (lanjut)
        {
        case 1:
            goto daftar_barang;
            break;

        case 2:
            system("exit");
            break;
        }
    }
    }
}