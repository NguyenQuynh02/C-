#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    char MASV[30];
    char TENSV[30];
    int TUOI;
public:
    void nhap();
    void xuat();
};
void SINHVIEN::nhap()
{
    cout<<"NHAP MA SV    :";    fflush(stdin); gets(MASV);
    cout<<"NHAP TEN SV   :";    fflush(stdin); gets(TENSV);
    cout<<"NHAP TUOI     :";    cin>>TUOI;
}
void SINHVIEN::xuat()
{
    cout<<setw(20)<<MASV<<setw(20)<<TENSV<<setw(15)<<TUOI<<endl;
}
class LOPHOC
{
    char MAPH[30];
    char PHONG[10];
    SINHVIEN *X;
    int n;
public:
    void nhap();
    void xuat();
};
void LOPHOC::nhap()
{
    cout<<"NHAP MA PHONG    :";    fflush(stdin); gets(MAPH);
    cout<<"NHAP PHONG       :";    fflush(stdin); gets(PHONG);
    cout<<"n="; cin>>n;
    X = new SINHVIEN[n];
    for ( int i=0;i<n;i++)
        X[i].nhap();
}
void LOPHOC::xuat()
{
    cout<<setw(40)<<"THONG TIN"<<endl;
    cout<<"MA PHONG: "<<MAPH<<endl;
    cout<<"PHONG: "<<PHONG<<endl;
    cout<<setw(20)<<"MA SV"<<setw(20)<<"TEN SV"<<setw(15)<<"TUOI"<<endl;
    for(int i=0; i<n; i++)
        X[i].xuat();

}
int main()
{
   LOPHOC a;
   a.nhap();
   a.xuat();
    return 0;
}
