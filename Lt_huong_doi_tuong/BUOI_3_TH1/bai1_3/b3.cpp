#include <iostream>
#include<iomanip>

using namespace std;
class HANG
{
    char Mahang[10];
    char Tenhang[30];
    float Dongia;
    int Soluong;
public:
    void nhap();
    void xuat();

};
void HANG::nhap()
{
    cout<<"NHAP MA HANG   : ";  fflush(stdin); gets(Mahang);
    cout<<"NHAP TEN HANG  : ";  fflush(stdin); gets(Tenhang);
    cout<<"DON GIA        : "; cin>>Dongia;
    cout<<"SO LUONG       : "; cin>>Soluong;
}
void HANG::xuat()
{
    cout<<Mahang<<setw(20)<<Tenhang<<setw(20)<<Dongia<<setw(20)<<Soluong<<setw(20)<<Dongia*Soluong<<endl;
}

int main()
{
    HANG *x;
    int n ;
    cout<<"So mat hang: "; cin>>n;
    x = new HANG[n];

    for ( int i = 0; i<n ; i++)

        x[i].nhap();

        cout<<"MA HANG"<<setw(20)<<"TEN HANG"<<setw(20)<<"DON GIA"<<setw(20)<<"SO LUONG"<<setw(20)<<"THANH TIEN"<<endl;
        for ( int i = 0; i<n ;i++){

              x[i].xuat();
         }

    return 0;
}
