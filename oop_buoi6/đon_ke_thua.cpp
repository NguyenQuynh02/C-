//kế thừa 
//cha chỉ dùng  public/protected
//xây dựng lớp 
//cha trc con sau
#include<iostream>
using namespace std;
// đơn kế thừa
class ConNguoi
{
    private:
      char hoTen[30];
      char ngaySinh[10];
      char queQuan[50];
    public:
     void NhapA();
     void XuatA();
     void An () {
         cout<<"An."<<endl;
     } 
     // sinh vien kế thừa các thuộc tính của con người
};
class SinhVien : public ConNguoi
{
    private:
       char tenTruong[30];
       char chuyenNganh[30];
       int MSSV;
    public:
       void Nhap();
       void Xuat();
       void Code(){
           cout<< " Code"<<endl;
       }   

};
int main ( int argc, char const *argv[])
{
    SinhVien S;
    S.An();
    strcpy (S.hoTen, "Nguyen Van A");
    cout<<"Ho Ten:"<<S.hoTen<<endl;
    S.Code();
    return 0;
}