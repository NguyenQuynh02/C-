#include <bits/stdc++.h>

using namespace std;

class GIAOVIEN
{
    char HOTEN[30];
    int TUOI;
    char KHOA[30];
public:
    void nhap();
    void xuat();
};
void GIAOVIEN::nhap()
{
    cout<<"HO TEN    :";   fflush(stdin); gets(HOTEN);
    cout<<"TUOI      :";   cin>>TUOI;
    cout<<"KHOA      :";   fflush(stdin); gets(KHOA);
}
void GIAOVIEN::xuat()
{
    cout<<setw(20)<<HOTEN<<setw(10)<<TUOI<<setw(15)<<KHOA<<endl;

}
class LOPHOC
{
     char MALOP[30];
     char TENLOP[30];
     char PHONG[30];
     GIAOVIEN x;
 public:
    void nhap();
    void xuat();
};
void LOPHOC::nhap()
{
    cout<<"MA LOP    :"; fflush(stdin);   gets(MALOP);
    cout<<"TEN LOP   :"; fflush(stdin);   gets(TENLOP);
    cout<<"PHONG     :"; fflush(stdin);   gets(PHONG);

    x.nhap();
}
void LOPHOC::xuat()
{
    cout<<setw(10)<<MALOP<<setw(20)<<TENLOP<<setw(15)<<PHONG;
    x.xuat();
}

int main()
{
   LOPHOC A;
   A.nhap();
   A.xuat();
    return 0;
}
