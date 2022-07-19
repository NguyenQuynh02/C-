#include<iostream>
using namespace std;

class SoPhuc
{ 
   public:
       float Thuc, Ao;
 public:
   SoPhuc();
   SoPhuc(float x, float y);
   friend ostream &operator<<(ostream &x, SoPhuc y);
   SoPhuc operator+(SoPhuc y);
   SoPhuc operator-(SoPhuc y);
   void Nhap();
   void Xuat();
};
SoPhuc::SoPhuc(){
    Thuc = 0;
    Ao = 0;
}
SoPhuc::SoPhuc(float x, float y){
    Thuc=x;
    Ao=y;

}
ostream &operator<<( ostream &x, SoPhuc y){
    x << y.Thuc <<" + i*"<<y.Ao;
    return x;
}
SoPhuc SoPhuc :: operator+(SoPhuc y){
    SoPhuc tg;
    tg.Thuc = Thuc + y.Thuc;
    tg.Ao = Ao + y.Ao;
    return tg;
}
SoPhuc SoPhuc :: operator-(SoPhuc y){
    SoPhuc tg;
    tg.Thuc = Thuc - y.Thuc;
    tg.Ao = Ao - y.Ao;
    return tg;
}



int main(){
SoPhuc p1(4,5);
SoPhuc p2(2,3);
SoPhuc p3= p1+p2;
SoPhuc p4=p1-p2;
cout<<"so phuc p1 = "<<p1<<endl;
cout<<"so phuc p2 = "<<p2<<endl;
cout<<"\n";
cout<<"p1+p2 = "<<p3<<endl;
cout<<"p1-p2 = "<<p4<<endl;




    return 0;
}
