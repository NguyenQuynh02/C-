#include<iostream>
#include <string.h>
using namespace std;

class HANG;
class TIVI;

class NSX
{
	private:
	   char tenNSX[30];
	   char diaChi[30];
	public:
	  void Nhap();
	  void Xuat();
	  friend class HANG;
	  friend class TIVI;
};
void NSX::Nhap()
{
	cout<<"Nhap ten NSX: "; fflush(stdin); gets(tenNSX);
	cout<<"Nhap dia chi:  "; fflush(stdin); gets(diaChi);
}
void NSX::Xuat()
{
	cout<<"Ten NSX:  "<<tenNSX<<endl;
	cout<<"Dia chi:  "<<diaChi<<endl;
}
class HANG
{
	protected:
		char tenHang[30];
		NSX x;
		float donGia;
    public:
	  void Nhap();
	  void Xuat();
	  HANG();
	friend class NXS;
};
void HANG::Nhap()
{
	cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
     x.Nhap();
     cout<<"Nhap don gia:  "; cin>>donGia;

}
void HANG::Xuat()
{
	cout<<"Ten Hang:  "<<tenHang<<endl;
	x.Xuat();
	cout<<"Don Gia:  "<<donGia<<endl;
}
 HANG::HANG()
{
   strcpy(tenHang,"");
   strcpy(x.tenNSX,"");
   strcpy(x.diaChi,"");
   	donGia = 0;
}

class DATE
{
	private:
	  int D,M,Y;
	public:
		void Nhap();
		void Xuat();
	friend class TIVI;
};
void DATE::Nhap()
{
	cout<<"Nhap ngay: "; cin>>D;
	cout<<"Nhap thang:  "; cin>>M;
	cout<<"Nhap nam:   "; cin>>Y;
}
void DATE::Xuat()
{
	cout<<"DATE: "<<D<<"/"<<M<<"/"<<Y<<endl;
}
class TIVI : public HANG
{
	private:
		int kichThuoc;
		DATE y;
	public:
	  void Nhap();
	  void Xuat();
	  TIVI();

};
void TIVI::Nhap()
{
	HANG::Nhap();
	cout<<"Nhap kich thuoc: "; cin>>kichThuoc;
	y.Nhap();
}

void TIVI::Xuat()
{
	HANG::Xuat();
	cout<<"Kich thuoc: "<<kichThuoc<<endl;
	y.Xuat();
}
TIVI::TIVI()
{
	kichThuoc = 0;
	y.D = 0;
	y.M = 0;
	y.Y = 0;
	strcpy(tenHang,"");
    strcpy(x.tenNSX,"");
    strcpy(x.diaChi,"");
   	donGia = 0;


}
int main ()
{
	TIVI a;
	cout<<"NHAP THONG TIN HANG\n"<<endl;
	a.Nhap();
	cout<<"\n";
	cout<<"XUAT THONG TIN HANG\n"<<endl;
	a.Xuat();
	return 0;
}

