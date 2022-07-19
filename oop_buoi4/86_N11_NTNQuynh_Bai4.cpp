#include<bits/stdc++.h>
using namespace std;
class DiaChi{
	private:
		int So;
		char Ngo[30];
		char Phuong[30];
		char Quan[30];
		char TP[20];
	public:
	  void Nhap();
	  void Xuat();
	  friend class ThongTin;	
};
void DiaChi::Nhap(){
	cout<<"Nhap so :"; cin>>So;
	cout<<"Nhap ngo:"; fflush(stdin); gets(Ngo);
	cout<<"Nhap phuong:"; fflush(stdin); gets(Phuong);
	cout<<"Nhap quan:"; fflush(stdin); gets(Quan);
	cout<<"Nhap TP:"; fflush(stdin); gets(TP);
}
void DiaChi::Xuat(){
	cout<<"Dia chi:"<<"So "<<So<<", ngo "<<Ngo<<", phuong "<<Phuong<<", quan "<<", "<<TP<<endl;
}
class ThongTin{
	private:
		char maPH[10];
		char Ngay[10];
		char tenNguoi[30];
		char Sdt[15];
		DiaChi x;
		
	public:
	  void Nhap();
	  void Xuat();	
	  friend class PhieuDiCho;
};
void ThongTin::Nhap(){
	cout<<"Nhap ma phieu:"; fflush(stdin); gets(maPH);
	cout<<"Nhap thoi gian:"; fflush(stdin); gets(Ngay);
	cout<<"Nhap ten nguoi di cho:"; fflush(stdin); gets(tenNguoi);
	cout<<"Nhap so dien thoai:"; fflush(stdin); gets(Sdt);
	x.Nhap();
	
}
void ThongTin::Xuat(){
	cout<<left<<"Ma Phieu:"<<setw(15)<<maPH<<"Ngay:"<<setw(30)<<Ngay<<endl;
	cout<<"Ho va ten nguoi di cho:"<<tenNguoi<<endl;
	cout<<"So dien thoai:"<<Sdt<<endl;
     x.Xuat();
}
class ThucPham{
	private:
		char tenHang[15];
		double donGia;
		int soLuong;
	public:
		void Nhap();
		void Xuat();
		friend class PhieuDiCho;
};
void ThucPham::Nhap(){
	cout<<"Nhap ten hang:"; fflush(stdin); gets(tenHang);
	cout<<"Nhap don gia:"; cin>>donGia;
	cout<<"Nhap so luong:"; cin>>soLuong;
}
void ThucPham::Xuat(){
	cout<<left<< setw(30) <<tenHang<< setw(30) <<donGia<< setw(30) <<soLuong<< setw(30) <<donGia*soLuong<<endl; 
}
class PhieuDiCho{
	private:
		ThongTin p;
		ThucPham *q;
		int n ;
	public:
	  void Nhap();
	  void Xuat();	
};
void PhieuDiCho::Nhap(){
	p.Nhap();
	cout<<"Nhap so thuc pham:"; cin>>n;
	q = new ThucPham[n];
	for ( int i=1; i<=n; i++){
		cout<<"Nhap thong tin thuc pham thu "<<i<<":"<<endl;
		q[i].Nhap();
	}
}
void PhieuDiCho::Xuat(){
	cout<<"\n\t\t\t\t PHIEU DI CHO"<<endl<<endl;
	p.Xuat(); 
	cout<<left<< setw(30) <<"Ten Hang"<< setw(30) << "Don Gia" << setw(30) << "So luong" << setw(30) << "Thanh Tien"<<endl;
    for ( int i = 1 ; i<=n; i++){
    	q[i].Xuat();
	}
	double tongTien = 0;
	for ( int i = 1 ; i<=n; i++){
		tongTien += q[i].donGia*q[i].soLuong;
	}
	cout<<left<<setw(60)<<" "<<setw(30)<<"Cong thanh tien:"<<tongTien<<endl;
	cout<<"Luu ys:Phieu chi co tac dung trong BTVN buoi 4 cua lop OOP 2021"<<endl;
}
int main(){
	PhieuDiCho x;
	x.Nhap();
	x.Xuat();
	return 0;
}
