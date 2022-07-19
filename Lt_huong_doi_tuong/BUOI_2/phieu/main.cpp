#include<iostream>
#include<iomanip>
using namespace std;
class PHIEU;
class NCC
{
    char MaNCC[15];
    char TenNCC[30];
    char DiaChi[30];
    char SDT[10];
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void NCC::nhap()
{
    cout<<"NHAP DIA CHI :"; fflush(stdin); gets(DiaChi);
    cout<<"NHAP SDT     :"; fflush(stdin); gets(SDT);
    cout<<"NHAP MA NCC  :"; fflush(stdin); gets(MaNCC);
    cout<<"NHAP TenNCC  :"; fflush(stdin); gets(TenNCC);

}
void NCC::xuat()
{
    cout<<"DIA CHI: "<<DiaChi<<setw(20)<<"SDT: "<<SDT<<endl;
    cout<<"MA NHA CUNG CAP:   "<<MaNCC<<setw(20)<<"TEN NHA CUNG CAP: "<<TenNCC<<endl;
}
class SANPHAM
{
    char MaSP[30];
    char TenSP[30];
    int SL;
    long DG;
public:
    void nhap();
    void xuat();
    friend class PHIEU;
    friend int DEM( PHIEU a);
    friend void sapxep( PHIEU b);

};
void SANPHAM::nhap()
{
    cout<<"NHAP MA SP   :"; fflush(stdin); gets(MaSP);
    cout<<"NHAP TEN SP  :"; fflush(stdin); gets(TenSP);
    cout<<"NHAP SO LUONG:"; cin>>SL;
    cout<<"NHAP DON GIA :"; cin>>DG;

}
void SANPHAM::xuat()
{
    cout<<MaSP<<setw(20)<<TenSP<<setw(20)<<SL<<setw(20)<<DG<<setw(20)<<SL*DG<<endl;
}
class PHIEU
{
    char MaP[30];
    char NgayTL[15];
    NCC x;
    int n;
    SANPHAM *a;
public:
    void nhap();
    void xuat();
    friend int DEM( PHIEU a);
    friend void sapxep( PHIEU b);
};
void PHIEU::nhap()
{
    cout<<"NHAP MA PHIEU:"; fflush(stdin); gets(MaP);
    cout<<"NHAP NGAY TL :"; fflush(stdin); gets(NgayTL);
    x.nhap();
    cout<<"NHAP SO SP:"; cin>>n;
    a = new SANPHAM[n];
    for ( int i=0; i<n ;i++)
        a[i].nhap();


}
void PHIEU::xuat()

{
    cout<<"Dai Hoc Victory"<<endl;
    cout<<"\t\t\t\t\t PHIEU NHAP VAN PHONG PHAM\n\n\n"<<endl;
    cout<<"MA PHIEU: "<<MaP<<setw(20)<<"NGAY TL:"<<NgayTL<<endl;
    x.xuat();
    cout<<"\n";
    cout<<"MA SP"<<setw(20)<<"TEN SP"<<setw(20)<<"SO LUONG"<<setw(20)<<"DON GIA"<<setw(20)<<"THANH TIEN"<<endl;
    for (int i=0; i<n; i++)
    a[i].xuat();
    int tong=0;
    for (int i=0; i<n ;i++)
        tong = tong + a[i].SL*a[i].DG;

    cout<<setw(60)<<"TONG"<<setw(20)<<tong<<endl;
    cout<<"Hieu truong"<<setw(30)<<"Phong Tai Chinh"<<setw(30)<<"Nguoi Lap"<<endl;

}
int DEM( PHIEU b)
{
    int dem =0;
    for ( int i=0; i<b.n; i++){
        if( b.a[i].SL < 80)
            dem++;
            return dem ;
    }

}
void sapxep( PHIEU b)
{
    for ( int i =0; i< b.n-1;i++)
    {
        for ( int j =i+1 ; j< b.n; j++)
        {
            if (b.a[i].DG > b.a[j].DG)
                swap ( b.a[i], b.a[j]);
        }
    }
}




 int main()
 {
     PHIEU h;
     h.nhap();
     h.xuat();
     cout<<"SL NHO <  80:"<<DEM(h)<<endl;
     sapxep(h);
     cout<<"\n\n\n";
     cout<<" PHIEU SAU KHI SAP XEP SO LUONG"<<endl;
     h.xuat();

     return 0;

 }
