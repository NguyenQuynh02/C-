#include <iostream>
#include<iomanip>
using namespace std;
class SACH
{
    char MASACH[30];
    char TENSACH[30];
    char NXB[30];
    float SOTRANG;
    float GIATIEN;
public:
    void nhap();
    void xuat();
};
void SACH::nhap()
{
    cout<<"NHAP MA SACH     : ";  fflush(stdin); gets(MASACH);
    cout<<"NHAP TEN SACH    : ";  fflush(stdin); gets(TENSACH);
    cout<<"NHAP NXB         : ";  fflush(stdin); gets(NXB);
    cout<<"NHAP SO TRANG    : "; cin>>SOTRANG;
    cout<<"NHAP GIA TIEN    : "; cin>>GIATIEN;
}
void SACH::xuat()
{
    cout<<MASACH<<setw(20)<<TENSACH<<setw(20)<<NXB<<setw(20)<<SOTRANG<<setw(20)<<GIATIEN<<endl;
}
int main()
{
   SACH *a;
   int n;
   cout<<"NHAP SO LUONG SACH:"; cin>>n;
   a = new SACH[n];

   for ( int i = 0; i<n ; i++)
    a[i].nhap();

cout<<"\n";

   cout<<"MA SACH"<<setw(20)<<"TEN SACH"<<setw(20)<<"NXB"<<setw(20)<<"SO TRANG"<<setw(20)<<"GIA TIEN"<<endl;
    for ( int i = 0; i<n ;i++)
    a[i].xuat();

    return 0;
}
