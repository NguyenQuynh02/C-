#include <iostream>
#include <iomanip>

using namespace std;

class PHIEU;

class NHANVIEN
{
private:
    string tennv, chuc;
public:
    void Nhap()
    {
        cout << "Nhap vao ten nhan vien: ";
        fflush(stdin);
        getline(cin, tennv);
        cout << "Nhap vao chuc vu: ";
        fflush(stdin);
        getline(cin, chuc);
    }
    void Xuat()
    {
        cout << left << setw(21) << " Nhan vien kiem ke: " << setw(22)<< tennv << setw(15) << "Chuc vu: "
        << chuc << endl;
    }
};

class PHONG
{
private:
    string tenphong, maphong, truongphong;
public:
    void Nhap()
    {
        cout << "Nhap ten phong kiem ke: ";
        fflush(stdin);
        getline(cin,tenphong);
        cout << "Nhap ma phong kiem ke: ";
        fflush(stdin);
        getline(cin,maphong);
        cout << "Nhap ten truong phong : ";
        fflush(stdin);
        getline(cin,truongphong);
    }
    void Xuat()
    {
        cout << left << setw(21) << " Kiem ke tai phong: " << setw(22) << tenphong << setw(15) <<
        "Ma phong: " << maphong << endl;
        cout << " Truong phong:  " << truongphong << endl;
    }
};

class TAISAN
{
private:
    string tents,tinhtrang;
    int soluong;
public:
    TAISAN()
    {

    }
    TAISAN(string tents, int soluong, string tinhtrang)
    {
        this -> tents = tents;
        this -> soluong = soluong;
        this -> tinhtrang = tinhtrang;
    }
    void Nhap()
    {
        cout << "Nhap vao ten tai san: ";
        fflush(stdin);
        getline(cin,tents);
        cout << "Nhap vao so luong: ";
        cin >> soluong;
        cout << "Nhap vao tinh trang: ";
        fflush(stdin);
        getline(cin,tinhtrang);
    }
    void Xuat()
    {
        cout << left << " " << setw(30) << tents << setw(30) << soluong << tinhtrang << endl;
    }
    friend class PHIEU;
    friend void abc(PHIEU &a);
    friend void sapxep(PHIEU a);
};

class PHIEU
{
private:
    string maphieu, ngaykiem;
    NHANVIEN nv;
    PHONG phong;
    TAISAN *ts;
    int n;
public:
    void Nhap()
    {
        cout << "Nhap vao ma phieu: ";
        fflush(stdin);
        getline(cin,maphieu);
        cout << "Nhap vao ngay kiem ke: ";
        fflush(stdin);
        getline(cin,ngaykiem);
        nv.Nhap();
        phong.Nhap();
        cout << "Nhap vao so tai san: ";
        cin >> n;
        ts = new TAISAN[n + 1];
        for(int i = 0; i < n; i++)
        {
            cout << "Tai san " << i + 1 << endl;
            ts[i].Nhap();
        }
    }
    void Xuat()
    {
        cout << "\t\t\t PHIEU KIEM KE TAI SAN" << endl;
        cout << left << setw(21) << " Ma phieu: " << setw(22) << maphieu << setw(15) << "Ngay kiem ke: "
        << ngaykiem << endl;
        nv.Xuat();
        phong.Xuat();
        cout << endl;
        cout << left << setw(30) << " Ten tai san" << setw(30) << "So luong" << "Tinh trang" << endl;
        int p = 0;
        for(int i = 0; i < n; i++)
        {
            ts[i].Xuat();
            p+= ts[i].soluong;
        }
        cout << left << setw(24) << " So tai san da kiem ke: " << setw(20) << n << "Tong so luong: " << p << endl;
    }
    friend void abc(PHIEU &a);
    friend void chen(PHIEU &a, TAISAN s,int x);
    friend void sapxep(PHIEU a);
};

void abc(PHIEU &a)
{
    for(int i = 0; i < a.n; i++)
    {
        if(a.ts[i].tents == "May vi tinh")
        {
            a.ts[i].soluong = 20;
        }
    }
}

void chen(PHIEU &a, TAISAN s,int x)
{
    for(int i = a.n; i >= x; i--)
    {
        a.ts[i] = a.ts[i - 1];
    }
    a.ts[x - 1] = s;
    a.n++;
}

void sapxep(PHIEU a)
{
    for(int i = 0; i < a.n - 1; i++)
    {
        for(int j = i + 1; j < a.n; j++)
        {
            if(a.ts[i].soluong > a.ts[j].soluong)
            {
                TAISAN b = a.ts[i];
                a.ts[i] = a.ts[j];
                a.ts[j] = b;
            }
        }
    }
}

int main()
{
    PHIEU a;
    a.Nhap();
    a.Xuat();
    abc(a);
    cout << "\nBONUS1 \n" << endl;
    a.Xuat();
    TAISAN s("Laptop",10,"Tot");
    chen(a,s,2);
    cout << "\nBONUS2 \n" << endl;
    a.Xuat();
    sapxep(a);
    cout << "\nBONUS3 \n" << endl;
    a.Xuat();

}
