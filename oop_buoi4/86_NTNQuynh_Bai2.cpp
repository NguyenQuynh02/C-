#include<bits/stdc++.h>
using namespace std;
class ThongTin{
	private:
	   char maPH[10];
	   char ngayTL[10];
	   char maNCC[10];
	   char tenNCC[10];
       char diaChi[30];
       
     public:
	 void Nhap();
	 void Xuat();  
	 friend class PHIEU;
};
void ThongTin::Nhap(){
	cout<<"Nhap ma phieu:";  fflush(stdin); gets(maPH);
	cout<<"Nhap  ngay thanh lap:"; fflush(stdin); gets(ngayTL);
	cout<<"Nhap ma NCC:"; fflush(stdin); gets(maNCC);
	cout<<"Nhap ten NCC:"; fflush(stdin); gets(tenNCC);
	cout<<"Nhap dia chi:"; fflush(stdin); gets(diaChi);
}
void ThongTin::Xuat(){
	cout<<left<< "Ma Phieu:" << setw(15) <<maPH<<"Ngay lap:"<< setw(30) <<ngayTL<<endl;
	cout<<left<< "Ma NCC:" << setw(15) <<maNCC<< "Ten NCC:" << setw(30 )<<tenNCC<<endl;
	cout<<left<< "Dia chi:"<< setw(15) <<diaChi<<endl;
}

class Hang{
	private:
	  char tenHang[20];
	  float Gia;
	  int soLuong;
	   
	public:
		void Nhap();
		void Xuat();
		friend class PHIEU;
};
void Hang::Nhap(){
	cout<<"Nhap ten hang:"; fflush(stdin);  gets(tenHang);
	cout<<"Nhap don gia:"; cin>>Gia;
	cout<<"Nhap so luong hang:"; cin>>soLuong;
	
}
void Hang::Xuat(){
	cout<<left<< setw(30) <<tenHang<< setw(30) <<Gia<< setw(30) <<soLuong<< setw(30) <<Gia*soLuong<<endl; 
}
class PHIEU{
	private:
	  ThongTin x;
	  Hang *y;
	  int n;
	public:
	  void Nhap();
	  void Xuat();  
};
void PHIEU::Nhap(){
	x.Nhap();
	cout<<"Nhap so mat hang:"; cin>>n;
	y = new Hang[n];
	for ( int i=1; i<=n; i++){
		cout<<"Nhap thong tin mat hang thu "<<i<<":"<<endl;
		y[i].Nhap();
	}
	
}
void PHIEU::Xuat(){
	cout<<"--------------------------------------\n";
	cout<<"\n\t\t\t\t PHIEU NHAP HANG"<<endl<<endl;
	x.Xuat(); 
	cout<<left<< setw(30) <<"Ten Hang"<< setw(30) << "Don Gia" << setw(30) << "So luong" << setw(30) << "Thanh Tien"<<endl;
    for ( int i = 1 ; i<=n; i++){
    	y[i].Xuat();
	}
	double tongTien = 0;
	for ( int i = 1 ; i<=n; i++){
		tongTien += y[i].Gia*y[i].soLuong;
	}
	cout<<left<<setw(60)<<" "<<setw(30)<<"Cong thanh tien:"<<tongTien<<endl;
	
}
int main(){
	PHIEU s;
	s.Nhap();
	s.Xuat();
	return 0;
}
