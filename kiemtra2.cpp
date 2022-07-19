#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
class CongTy;
class Nguoi{
	protected:
		char hoTen[30];
		int tuoi;
		char gioiTinh[10];
	public:
		void Nhap();
		void Xuat();
		friend void Sua(CongTy s);
};
void Nguoi::Nhap(){
	cout<<" Nhap ho va ten    : "; fflush(stdin); gets(hoTen);
	cout<<" Nhap tuoi         : "; cin>>tuoi;
	cout<<" Nhap gioi tinh    : "; fflush(stdin); gets(gioiTinh);
}
void Nguoi::Xuat(){
	cout<<" Ho va ten         : "<<hoTen<<endl;
	cout<<" Tuoi              : "<<tuoi<<endl;
	cout<<" Gioi tinh         : "<<gioiTinh<<endl;
}

class NhanVien : public Nguoi{
	private:
		char maNV[10];
		char chucVu[20];
		double luong;
	public:
		void Nhap();
		void Xuat();
		friend class CongTy;
		friend void Sua(CongTy s);
		friend void SapXep(CongTy s);
};
void NhanVien::Nhap(){
	Nguoi::Nhap();
	cout<<" Nhap ma nhan vien : "; fflush(stdin); gets(maNV);
	cout<<" Nhap chuc vu      : "; fflush(stdin); gets(chucVu);
	cout<<" Nhap luong        : ";cin>>luong;
}
void NhanVien::Xuat(){
	Nguoi::Xuat();
	cout<<" Ma nhan vien      : "<<hoTen<<endl;
	cout<<" Chuc vu           : "<<tuoi<<endl;
	cout<<" Luong             : "<<luong<<endl;
}
class CongTy{
	private:
		char maCT[10];
		char diaChi[20];
		NhanVien *x;
		int n;
	public:
		void Nhap();
		void Xuat();
		friend void Sua(CongTy s);
		friend void SepXep(CongTy s);
};
void CongTy::Nhap(){
	cout<<" Nhap ma cong ty            : "; fflush(stdin); gets(maCT);
	cout<<" Nhap dia chi               : "; fflush(stdin); gets(diaChi);
	cout<<" Nhap song luong nhan vien  : ";cin>>n;
	x = new NhanVien[n];
	for(int i=0;i<n;i++){
		cout<< " Nhap thong tin nhan vien thu "<<i+1<<endl;
		x[i].Nhap();
	}
}
void CongTy::Xuat(){
	cout<<" Thong tin cua cong ty "<<endl;
	cout<<" Ma cong ty: "<<maCT<<endl;
	cout<<" Dia chi   : "<<diaChi<<endl;
	for(int i=0;i<n;i++){
		cout<<"Thong tin nhan vien thu "<<i+1<<endl;
		x[i].Xuat();
	}
}
void Sua(CongTy s){
	for(int i=0;i<s.n;i++){
		if(s.x[i].tuoi>30 && strcmpi(s.x[i].chucVu,"ke toan")==0)
		{
			s.x[i].luong=1000;
		}
	}
}
 
void SapXep(CongTy s) { 
	for(int i=0;i<s.n-1;i++)
		for(int j=i+1;j<s.n;j++) {
			if(s.x[i].luong > s.x[j].luong) {
				swap(s.x[i],s.x[j]);
			}
		}
}
int main()
{
	CongTy a;
	
	a.Nhap();
	a.Xuat();
	cout<<"Sau khi sua:"<<endl;
	Sua(a);
	a.Xuat();
	cout<<"Sau khi sap xep"<<endl;
	SapXep(a);
		a.Xuat();
 return 0;
}
