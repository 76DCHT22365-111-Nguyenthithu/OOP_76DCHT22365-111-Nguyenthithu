#include <iostream>
#include <string>

using namespace std;

class nguoi {
protected:
    string hoten;
    int ns;
public:
    void nhap();
    void xuat();
    string get_hoten();
};

class sinhvien : public nguoi {
private:
    string msv;
    float dtb;
public:
    void nhap();
    void xuat();
    string get_msv();
};

void nguoi::nhap() {
    cout << "Nhap ho ten: ";getline(cin, hoten);
    cout << "Nhap nam sinh: ";cin >> ns;cin.ignore();
}

void nguoi::xuat() {
    cout << "Ho ten: " << hoten << endl;
    cout << "Nam sinh: " << ns << endl;
}

string nguoi::get_hoten() {
    return hoten;
}

void sinhvien::nhap() {
    nguoi::nhap();cout << "Nhap ma sinh vien: ";getline(cin, msv);
    cout << "Nhap diem trung binh: ";cin >> dtb;cin.ignore();
}

void sinhvien::xuat() {
    nguoi::xuat();
    cout << "Ma sinh vien: " << msv << endl;
    cout << "Diem trung binh: " << dtb << endl;
}

string sinhvien::get_msv() {
    return msv;
}

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";cin >> n;cin.ignore(); 

    sinhvien ds[100]; 
    
    cout << "\n--- NHAP DANH SACH SINH VIEN ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Sinh vien thu " << i + 1 << ":" << endl;
        ds[i].nhap();
    }

    string tukhoa;
    cout << "\nNhap ma SV hoac ho ten can tim: ";
    getline(cin, tukhoa);

    bool timthay = false;
    cout << "\n--- KET QUA TIM KIEM ---" << endl;
    for (int i = 0; i < n; i++) {
        if (ds[i].get_msv() == tukhoa || ds[i].get_hoten() == tukhoa) {
            ds[i].xuat();
            timthay = true;
        }
    }

    if (!timthay) {
        cout << "Khong tim thay thong tin!" << endl;
    }

    return 0;
}
