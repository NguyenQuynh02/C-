#include <iostream>
#include<stdio.h>



using namespace std;
class SINHVIEN
{
    char Masv[30];
    char Hoten[30];
    int Tuoi;
    float Diem;
public:
    void nhap();
    void xuat();

};
void SINHVIEN::nhap()
{
    cout<<"NHAP MA SV       : "; fflush(stdin); gets(Masv);
    cout<<"NHAP HO TEN SV   : "; fflush(stdin); gets(Hoten);
    cout<<"NHAP TUOI SV     : "; cin>>Tuoi;
    cout<<"NHAP DIEM SV     : "; cin>>Diem;

}
void SINHVIEN::xuat()
{
    cout<<"MA SV       : "<<Masv<<endl;
    cout<<"HO TEN SV   : "<<Hoten<<endl;
    cout<<"TUOI SV     : "<<Tuoi<<endl;
    cout<<"DIEM SV     : "<<Diem<<endl;
}





int main()
{
    SINHVIEN a,b;
    a.nhap();
    b.nhap();
    cout<<"\n";
    cout<<"SV a"<<endl;
    a.xuat();
    cout<<"\n";
    cout<<"SV b"<<endl;
    b.xuat();

    return 0;
}
