
#include<iostream>
using namespace std;

class ConNguoi
{
    protected:
      char hoTen[30];
      char ngaySinh[10];
      char queQuan[50];
    public:
     void NhapA();
     void XuatA();
     // sinh vien kế thừa các thuộc tính của con người
};
void ConNguoi::NhapA(){
    ConNguoi::NhapA(); // them phuong thuc, ten ham
    cout<<"Nhap ho ten:"; fflush(stdin); gets(hoTen);
    cout<<"Nhap ngay sinh:"; fflush(stdin); gets(ngaySinh);
    cout<<"Nhap que quan:"; fflush(stdin); gets(queQuan);
}
void ConNguoi::XuatA(){
   cout<<"Ho ten:"<<hoTen<<endl;
   cout<<"Ngay sinh:"<<ngaySinh<<endl;
   cout<<"Que quan:"<<queQuan<<endl;

}
class SinhVien : public ConNguoi 
{
    private:
       char tenTruong[30];
       char chuyenNganh[30];
       int MSSV;
    public:
       void Nhap();
       void Xuat();

};
void SinhVien::Nhap(){
    ConNguoi::NhapA();
    cout<<"Nhap ten truong:"; fflush(stdin); gets(tenTruong);
    cout<<"Nhap chyen nganh:"; fflush(stdin); gets(chuyenNganh);
    cout<<"Nhap MSSV:"; cin>>MSSV;
}
void SinhVien::Xuat(){
    ConNguoi::XuatA();
    cout<<"Truong hoc:"<< tenTruong <<endl;
    cout<<"Chuyen nghanh:"<<chuyenNganh<<endl;
    cout<<"MSSV:"<<MSSV<<endl;
}
int main ()
{
    SinhVien S;
    S.Nhap();
    S.Xuat();
    return 0;
}
