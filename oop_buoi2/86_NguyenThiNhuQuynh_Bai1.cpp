#include<iostream>
#include<math.h>
using namespace std;
class PtBac2{
  private: 
    int a,b,c;
  public:
    PtBac2();
    PtBac2( int a1, int b2 , int c1);
    ~PtBac2(){
        cout<<" da giai phuong trinh"<<endl;
    };

   void Nhap();
   void Giai();
   void Xuat();  
};
PtBac2::PtBac2(){
   int a=0;
   int b=0;
   int c=0;
   
}
 PtBac2::PtBac2( int a1, int b1, int c1){
	 a=a1;
	 b=b1;
	 c=c1;
}

void PtBac2::Nhap(){
    
    cout<<" Nhap he so a:"; cin>>a;
    cout<<" Nhap he so b:"; cin>>b;
    cout<<" Nhap he so c:"; cin>>c;
}
void PtBac2::Xuat(){
    
          cout<<a<<"x^2+"<<b<<"x+"<<c<<"="<<0<<endl;
}
void PtBac2::Giai(){
    float x1,x2,denta;
    if(a == 0) {
        cout<<" Khong phai pt bac 2:"<<endl;
    } else {
        denta = b*b - 4*a*c;
        if(denta > 0) {
            cout << "Nghiem thu nhat x1 = " << (-b+sqrt(denta))/(2*a)<<endl;
            cout << "Nghiem thu hai x2 = " << (-b-sqrt(denta))/(2*a) << endl;
        } else if ( denta == 0) {
            cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -b/2*a << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }

}
int main (){

    PtBac2 P,Q;
     cout<<" Phuong trinh P:"<<endl;
      P.Xuat();
      P.Giai();
     cout<<" Phuong trinh Q:"<<endl;
      Q.Nhap();
      Q.Xuat();
      Q.Giai();
    return 0;

}



  
