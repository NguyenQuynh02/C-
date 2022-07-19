#include<bits/stdc++.h>
using namespace std;
class Hang{
	private:
		char Mahang[30];
		char Tenhang[30];
		char Ngaynhap[2];
		char Ngaysx[2];
		long Dongia;
		int Solg;
	public:	
		Hang();
		Hang(char MaHangNew[30], char TenHangNew[30], char NgayNhapNew[2], char NgaySxNew[2],int DonGiaNew,long SoLgNew);
		~Hang(){
			cout<<" da nhap hang:"<<endl;
		}
		void Nhap();
		void Xuat();
};
Hang::Hang(){
	    strcpy(Mahang,"");
	    strcpy(Tenhang,"");
	    strcpy(Ngaynhap,"");
	    strcpy(Ngaysx,"");
		 Dongia = 0;
		 Solg = 0;
  
}
Hang::Hang( char MaHangNew[30], char TenHangNew[30], char NgayNhapNew[2], char NgaySxNew[2],int DonGiaNew,long SoLgNew){
	strcpy(Mahang,MaHangNew);
	strcpy(Tenhang,TenHangNew);
	strcpy(Ngaynhap,NgayNhapNew);
	strcpy(Ngaysx,NgaySxNew);
    Dongia = DonGiaNew;
    Solg = SoLgNew;
}
void Hang::Nhap(){
	cout<<" Nhap ma:"; fflush(stdin);      gets(Mahang);
	cout<<" Nhap ten :"; fflush(stdin);      gets(Tenhang);
	cout<<" Nhap ngay nhap:"; fflush(stdin);      gets(Ngaynhap);
	cout<<" Nhap ngay sx:"; fflush(stdin);      gets(Ngaysx);
	cout<<" Nhap don gia:"; cin>>Dongia;
	cout<<" Nhap so luong:"; cin>>Solg;
}
void Hang::Xuat(){
	cout<<" Ma don hang:"<<Mahang<<"\n";
	cout<<" Ten don hang:"<<Tenhang<<"\n";
	cout<<" Ngay nhap hang:"<<Ngaynhap<<"\n";
	cout<<" Ngay san xuat:"<<Ngaysx<<"\n";
	cout<<" Don gia:"<<Dongia<<"\n";
	cout<<" So luong:"<<Solg<<"\n";
	cout<<" Thanh tien:"<<(long)Dongia*Solg<<"\n";
	
}
int main(){
	Hang P,Q;
	cout<<" Mat hang P:"<<endl;
	P.Xuat();
	cout<<" Mat hang Q:"<<endl;
	Q.Nhap();
	Q.Xuat();
	return 0;
	
}
