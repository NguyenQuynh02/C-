#include<iostream>
using namespace std;

class Nsx {
	private:
	  int maNsx;
	  char tenNsx[30];
	  char dcNsx[30];
	public:
		void Nhap();
	    void Xuat();
	    friend class Hang;  
};
void Nsx::Nhap(){
	cout<<"Nhap ma nsx:"; cin>>maNsx;
	cout<<"Nhap ten nsx:"; fflush(stdin); gets(tenNsx);
	cout<<"Nhap dia chi nsx:"; fflush(stdin); gets(dcNsx);
}
void Nsx::Xuat(){
	cout<<"Ma:"<<maNsx<<"  "<<"Ten:"<<tenNsx<<"  "<<"Dia chi:"<<dcNsx<<endl;
}
class Hang{
	private:
		int maHang;
		char tenHang[30];
		Nsx x;
	public:
		void Nhap();
		void Xuat();
		
};
void Hang::Nhap(){
	cout<<"Nhap ma hang:"; cin>>maHang;
	cout<<"Nhap ten hang:"; fflush(stdin); gets(tenHang);
	x.Nhap();
}
void Hang::Xuat(){
	cout<<"Ma hang:"<<maHang<<endl;
	cout<<"Ten hang:"<<tenHang<<endl;
	cout<<" Hang X: ";
	x.Xuat();
}
int main (){
	int n;
	Hang h1;
	cout<<"Nhap so mat hang:";  cin>>n;
	for ( int i = 1; i <= n ; i++){
	cout<<"Thong tin mat hang "<<i<<":"<<endl;
	h1.Nhap();
	h1.Xuat();
   }
   return 0;
}
	

