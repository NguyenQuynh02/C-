#include<iostream>
#include<math.h>
using namespace std;
class PhanSo{
    public:
       int a;
       int b;
      PhanSo();
      PhanSo( int a1 , int b1);
      ~PhanSo(){
         cout<<"Phan so huy:"<<endl;
          };  
      void Nhap();
      void Xuat();
      void RutGon();
};
PhanSo::PhanSo(){
    int a = 0;
    int b = 0;
}
PhanSo::PhanSo( int a1, int b1){
    a = a1;
    b = b1;
}
void PhanSo::Nhap(){
    cout<<"Nhap mau so a :"; cin>>a;
    cout<<"Nhap tu so b:"; cin>>b;
}
void PhanSo::Xuat(){
    cout<<"Phan so = "<<a<<"/"<<b<<"\n";

}
float ucln( int a, int b){
   int tg;
    while(b != 0) {
        tg = a % b;
        a = b;
        b = tg;
    }
     return a;
}
void PhanSo::RutGon(){
        int u = ucln ( a,b);
        a = a / u;
        b = b / u;
         cout<<"Phan so da rut gon:"<<a<<"/"<<b<<endl;
}
int main (){
    PhanSo P,Q;
    cout<<"Phan so P:";
    P.Xuat();
    cout<<"Phan so Q:"<<"\n";
    Q.Nhap();
    Q.Xuat();
    Q.RutGon();
    return 0;
}
