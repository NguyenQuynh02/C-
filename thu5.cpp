// �A K? TH?A
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
     // sinh vien k? th?a c�c thu?c t�nh c?a con ngu?i
};
class LopDiu
{
    // protected truy c�p dc trong l?p v� h�m con, ch�u c?a n�, ko dc trong h�m main
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
