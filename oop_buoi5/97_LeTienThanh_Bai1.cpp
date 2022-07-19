#include <iostream>

using namespace std;

class STUDENT
{
private:
    string masv;
    string hoTen;
    int day, month, year;
    string gioiTinh;
    double diemTB;
    string xeploaidd;
public:
    STUDENT()
    {

    }
    STUDENT(string masv, string hoTen, int day, int month, int year, string gioiTinh, double diemTB, string xeploaidd)
    {

        this -> masv = masv;
        fflush(stdin);
        this -> hoTen = hoTen;
        this -> day = day;
        this -> month = month;
        this -> year = year;
        this -> gioiTinh = gioiTinh;
        this -> diemTB = diemTB;
        this -> xeploaidd = xeploaidd;
    }
    ~STUDENT()
    {
    };
    void setMasv(string masv)
    {
        this -> masv = masv;
    }
    void setHoTen(string hoTen)
    {
        this -> hoTen = hoTen;
    }
    void setDay(int day)
    {
        this -> day = day;
    }
    void setMonth(int month)
    {
        this -> month = month;
    }
    void setYear(int year)
    {
        this -> year = year;
    }
    void setGioiTinh(string gioiTinh)
    {
        this -> gioiTinh = gioiTinh;
    }
    void setDiemTB(double diemTB)
    {
        this -> diemTB = diemTB;
    }
    void setXeploaidd(string xeploaidd)
    {
        this -> xeploaidd = xeploaidd;
    }
    string getMasv()
    {
        return masv;
    }
    string getHoTen()
    {
        return hoTen;
    }
    int getDay()
    {
        return day;
    }
    int getMonth()
    {
        return month;
    }
    int getYear()
    {
        return year;
    }
    string getGioiTinh()
    {
        return gioiTinh;
    }
    double getDiemTB()
    {
        return diemTB;
    }
    string getXeploaidd()
    {
        return xeploaidd;
    }
    friend class abc;
};

class abc
{
private:
    STUDENT *student;
    int n;
public:
    void Nhap()
    {
        cout << "Nhap vao so hoc sinh: ";
        cin >> n;
        student = new STUDENT[n];
        for(int i = 0; i < n; i++)
        {
            int t = 0;
            string a;
            cout << "Nhap vao ma sinh vien: ";
            fflush(stdin);
            getline(cin,a);
            student[i].setMasv(a);

            cout << "Nhap vao ho ten sinh vien: ";
            fflush(stdin);
            getline(cin,a);
            student[i].setHoTen(a);

            cout << "Nhap vao ngay sinh: ";
            cin >> t;
            student[i].setDay(t);

            cout << "Nhap vao thang sinh: ";
            cin >> t;
            student[i].setMonth(t);

            cout << "Nhap vao nam sinh: ";
            cin >> t;
            student[i].setYear(t);

            cout << "Nhap vao gioi tinh cua sinh vien: ";
            fflush(stdin);
            getline(cin,a);
            student[i].setGioiTinh(a);

            double r = 0;
            cout << "Nhap vao diem trung binh cua sinh vien: ";
            cin >> r;
            student[i].setDiemTB(r);

            cout << "Nhap vao xep loai dao duc: ";
            fflush(stdin);
            getline(cin,a);
            student[i].setXeploaidd(a);
        }
    }
    void Xuat()
    {
        cout << "\n" << endl;
        for(int i = 0; i < n; i++)
        {
            cout << "Sinh vien thu " << i + 1 << endl;
            cout << "Ma sinh vien: " << student[i].getMasv() << endl;
            cout << "Ten sinh vien: " << student[i].getHoTen() << endl;
            cout << "Ngay thang nam sinh: " << student[i].getDay() << "/" << student[i].getMonth()
            << "/" << student[i].getYear() << endl;
            cout << "Gioi tinh: " << student[i].getGioiTinh() << endl;
            cout << "Diem trung binh: " << student[i].getDiemTB() << endl;
            cout << "Xep loai dao duc: " << student[i].getXeploaidd() << endl;
            cout << endl;
        }
    }
    friend void loc(abc &a);
};

void loc(abc &a)
{
    cout << "Nhung sinh vien co xep loai dao duc tot la: " << endl;
    for(int i = 0; i < a.n; i++)
    {
        if(a.student[i].getXeploaidd() == "Tot")
        {
            cout << "Ma sinh vien: " << a.student[i].getMasv() << endl;
            cout << "Ten sinh vien: " << a.student[i].getHoTen() << endl;
            cout << "Ngay thang nam sinh: " << a.student[i].getDay() << "/" << a.student[i].getMonth()
            << "/" << a.student[i].getYear() << endl;
            cout << "Gioi tinh: " << a.student[i].getGioiTinh() << endl;
            cout << "Diem trung binh: " << a.student[i].getDiemTB() << endl;
            cout << "Xep loai dao duc: " << a.student[i].getXeploaidd() << endl;
            cout << endl;
        }
    }
}

int main()
{
    abc a;
    a.Nhap();
    a.Xuat();
    loc(a);
}
