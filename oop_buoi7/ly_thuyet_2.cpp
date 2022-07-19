#include<iostream>

using namespace std;

class PhanSo{
    private:
       double a,b;
    public:
      void Nhap();
      void Xuat();   
      void Tang(); // tang ca tu mau len mot don vi
      void operator++();
      friend istream &operator >> (istream &is, PhanSo &ps);
};
/*
phương thức toán tử nhập xuất
istream: input stream nhập >>
ostream : output stream xuất <<



*/
istream &operator>>(istream &is, PhanSo ps){
    is >> ps.a;
    is >> ps.b;
}



void PhanSo::operator++(){
    this->a++;
    this->b++;
}
void PhanSo::Nhap(){
    cin>>a>>b;
}

void PhanSo::Xuat(){
    cout<<a<<"/"<<b<<endl;
}
void PhanSo::Tang(){
    this->a++;
    this->b++;
}


int main(){
   PhanSo ps1;
   cin>>ps1;
 //  ps1.Nhap();
   ++ps1;
  // ps1.Tang();
   ps1.Xuat();
    return 0;
}
