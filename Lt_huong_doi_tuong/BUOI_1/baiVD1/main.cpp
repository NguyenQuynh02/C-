#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    char HOTEN[30];
    int  TUOI;
    char QUE[30];
public:
    void NHAP();
    void XUAT();
};
void SINHVIEN::NHAP()
{
    cout<<"HO TEN: ";        fflush(stdin);  gets(HOTEN);
    cout<<"TUOI  : ";        cin>>TUOI;
    cout<<"QUE   : ";        fflush(stdin);  gets(QUE);
}
void SINHVIEN::XUAT()
{
    cout<<"HO TEN:  "<<HOTEN<<endl;
    cout<<"TUOI:    "<<TUOI<<endl;
    cout<<"QUE:     "<<QUE<<endl;
}

// con tro  + cap phat bo nho = mang


int main()
{
    SINHVIEN *x;
    
    int n;
      
      cout<<"nhap n = "; cin>>n;
      x = new SINHVIEN[n];
      for ( int i=0; i<n; i++)
        x[i].NHAP();
        
      for (int i=0; i<n; i++)
        x[i].XUAT();



    return 0;
}
