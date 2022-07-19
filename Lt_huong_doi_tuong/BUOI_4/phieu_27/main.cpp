 #include <bits/stdc++.h>

using namespace std;
class PHIEU;
class NHANVIEN
{
    char TENNV[30];
    char CHUCVU[30];
public:
    void NHAP();
    void XUAT();
};
 void NHANVIEN::NHAP()
{
    cout<<"NHAP TEN NHAN VIEN : "; fflush(stdin); gets(TENNV);
    cout<<"NHAP CHUC VU       : "; fflush(stdin); gets(CHUCVU);

}
void NHANVIEN::XUAT()
{
    cout<<"NHAN VIEN KIEM KE: "<<TENNV<<setw(30)<<"CHUC VU: "<<CHUCVU<<endl;
}
class PHONG
{

    char MAP[30];
    char TENP[30];
    char TENTP[30];
public:
    void NHAP();
    void XUAT();
};
void PHONG::NHAP()
{

    cout<<"NHAP MA PHONG  : "; fflush(stdin); gets(MAP);
    cout<<"NHAP TEN PHONG : "; fflush(stdin); gets(TENP);
    cout<<"NHAP TEN TRUONG P  : "; fflush(stdin); gets(TENTP);

}
void PHONG::XUAT()
{
    cout<<"KIEM KE TAI PHONG: "<<TENP<<setw(30)<<"MA PHONG: "<<MAP<<endl;
    cout<<"TRUONG PHONG: "<<TENTP<<endl;

}
class TAISAN
{
    char TENTS[30];
    int SL;
    char TINHTRANG[30];
    friend class PHIEU;
    friend void TIMKIEM(PHIEU k);
    friend void SAP(PHIEU k);
public:
    void NHAP();
    void XUAT();

};
void TAISAN::NHAP()
{
    cout<<"NHAP TEN TTS  : "; fflush(stdin); gets(TENTS);
    cout<<"NHAP SL TS  : "; cin>>SL;
    cout<<"NHAP TINH TRANG  : "; fflush(stdin); gets(TINHTRANG);
}
void TAISAN::XUAT()
{
    cout<<TENTS<<setw(20)<<SL<<setw(20)<<TINHTRANG<<endl;
}
class PHIEU
{
    char MAPH[30];
    char NGAY[30];
    NHANVIEN x;
    PHONG y;
    TAISAN *z;
    int n;
    friend void TIMKIEM(PHIEU k);
    friend void SAP(PHIEU k);
public:
    void NHAP();
    void XUAT();

};
void PHIEU::NHAP()
{
    cout<<"NHAP MA PHIEU: "; fflush(stdin); gets(MAPH);
    cout<<"NHAP NGAY: "; fflush(stdin); gets(NGAY);
    x.NHAP();
    y.NHAP();
    cout<<"n= "; cin>>n;
    z = new TAISAN[n];
    for ( int i=0; i<n ; i++)
        z[i].NHAP();

}
void PHIEU::XUAT()
{
    cout<<setw(40)<<"PHIEU KIEM KE TAI SAN"<<endl;
    cout<<"MA PHIEU : "<<MAPH<<set(30)<<"NGAY KIEM KE : "<<NGAY<<endl;
    x.XUAT();
    y.XUAT();
    cout<<"TEN TAI SAN"<<setw(20)<<"SO LUONG"<<setw(20)<<"TINH TRANG"<<endl;
    for ( int i=0; i<n; i++)
        z[i].XUAT();
    cout<<"SO TAI SAN KIEM KE: "<<n<<endl;

    int T=0;
    for ( int i=0 ; i<n; i++)
        T = T + z[i].SL;
    cout<<"TONG SO LUONG: "<<T<<endl;
}
void TIMKIEM (PHIEU k)
{
    int d = 0;
    for ( int i=0; i< k.n ,i++)
        if (strcmp (k.z[i].TENTS, "MAY TINH"))
        d++;
    if (d==0)
        cout<<"KHONG CO MAY TINH"<<endl;
    else
        cout<<"CO MAY TINH"<<endl;
}
void SAP ( PHIEU k)
  for ( int i=0; i< k.n; i++)
  for ( int j = i+1; j< k.n; j++)
  if (k.z[i].SL > k.z[j].SL)
  swap( k.z[i], k.z[j]);
int main()
{
    PHIEU k;
    k.NHAP();
    k.XUAT();
    TIMKIEM(k);
    SAP(k);
    return 0;
}
