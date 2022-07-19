#include<iostream>
using namespace std;
class SinhVien
{
private:
  char MaSV[10]; // thuoc tinh
  char HoTen[30];
  int Tuoi;
  float DiemTB;

public:  
  void an(); // phuong thuc
  void choi();
  void ngu();
  void Nhap();
  void Xuat();    
};

void SinhVien::Nhap()
{
     cout<<"nhap MSV:";     fflush(stdin);  gets(MaSV);
     cout<<"nhap ho ten:";  fflush(stdin);   gets(HoTen);
     cout<<"nhap tuoi:";    cin>>Tuoi;
     cout<<"nhap diem trung binh:"; cin>>DiemTB;
}
void SinhVien::Xuat()
{
    cout<<"MSV:"<<MaSV<<"\n";
    cout<<" Ho Ten:"<<HoTen<<"\n";
    cout<<" Tuoi:"<<Tuoi<<"\n";
    cout<<" Điem Trung Binh:"<<DiemTB<<"\n";
}
class ex
{
    private:
      int n;
      string str;
    public:
    ex(); // phg thuc khoi tao ko tham so
    ex( int temp, string stringNew );
}