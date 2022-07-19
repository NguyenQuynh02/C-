#include<bits/stdc++.h>
using namespace std;
class ThongTin{
	private:
		char maPH[10];
		char maNCC[20];
		char tenNCC[20];
		char diaChi[30];
		char Sdt[15];
	public:
	  void Nhap();
	  void Xuat();
	  friend class Phieu;	
};
void ThongTin::Nhap(){
	cout<<"Nhap ma phieu:"; fflush(stdin); gets(maPH);
	cout<<"Nhap ma nha cung cap:";  fflush(stdin); gets(maNCC);
	cout<<"Nhap ten nha cung cap:";  fflush(stdin); gets(tenNCC);
	cout<<"Nhap dia chi:";  fflush(stdin); gets(diaChi);
	cout<<"Nhap so dien thoai:";  fflush(stdin); gets(Sdt);
}
void ThongTin::Xuat(){
	cout<<left<< "Ma Phieu:" << setw(15) <<maPH<<endl;
	cout<<left<< "Ma Nha Cung Cap:" << setw(15) <<maNCC<< "Ten Nha Cung Cap:" << setw(20 )<<tenNCC<<endl;
	cout<<left<< "Dia chi:"<< setw(15) <<diaChi<<"SDT:"<< setw(20) << Sdt<<endl;
}
class SanPham{
	private:
		char maSP[10];
		char tenSP[20];
		char tinhTrang[10];
		int soLuong;
		float donGia;
		friend class Phieu;
	public:
	  void Nhap();
	  void Xuat();	
};
void SanPham::Nhap(){
	cout<<"Nhap ma san pham:"; fflush(stdin);  gets(maSP);
	cout<<"Nhap ten san pham:"; fflush(stdin);  gets(tenSP);
	cout<<"Nhap tinh trang:"; fflush(stdin);  gets(tinhTrang);
	cout<<"Nhap so luong:"; cin>>soLuong;
	cout<<"Nhap don gia:"; cin>>donGia;
}
void SanPham::Xuat(){
	cout<<left<< setw(20) <<maSP<< setw(20) <<tenSP<< setw(20) <<tinhTrang<< setw(20) <<soLuong<< setw(20) <<donGia<<setw(20)<<(long long)soLuong*donGia<<endl;
	 
}
class Phieu{
	private:
		ThongTin a;
		SanPham *b;
		int n;
	public:
	   void Nhap();
	   void Xuat();	
};
void Phieu::Nhap(){
	a.Nhap();
	cout<<"Nhap so san pham:"; cin>>n;
	b = new SanPham[n];
	for ( int i=1; i<=n; i++){
		cout<<"Nhap thong tin san pham thu "<<i<<":"<<endl;
		b[i].Nhap();
   }
}
void Phieu::Xuat(){
	cout<<"------------------------------------------------\n";
	cout<<"Dai Hoc Cong Nghiep Ha Noi"<<endl;
	cout<<"                           PHIEU NHAP THIET BI MAY TINH"<<endl;
	a.Xuat();
	cout<<left<<setw(20)<<"MA SP"<<setw(20)<<"Ten san pham"<<setw(20)<<"Tinh trang"<<setw(20)<<"So luong"<<setw(20)<<"Don gia"<<setw(20)<<"Thanh tien"<<endl;
	for ( int i = 1 ; i<=n; i++){
    	b[i].Xuat();
	}
	long long sum = 0;
	for ( int i = 1 ; i<=n; i++){
		sum += b[i].donGia*b[i].soLuong;
	}
	cout<<"Tong so san pham:"<< left << setw(80)<<n;
	cout<<"Tong so tien:"<<sum<<endl;
	
}
int main(){
	Phieu p;
	p.Nhap();
	p.Xuat();
	return 0;
}
