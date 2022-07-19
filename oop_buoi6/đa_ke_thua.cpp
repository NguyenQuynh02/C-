// ĐA KẾ THỪA
#include<iostream>
using namespace std;

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
class LopDiu
{
    // protected truy câp đc trong lớp và hàm con, cháu của nó, ko đc trong hàm main
        public:
        void Love(){
         cout<<"LOVE"<<endl;
      }

};
class SinhVien : public ConNguoi , public LopDiu
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
    S.Love();
    S.Code();
    return 0;
}