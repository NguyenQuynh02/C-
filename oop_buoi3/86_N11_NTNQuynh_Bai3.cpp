#include<iostream>
using namespace std;
class Date{
	private:
		int day, month, year;
	public:	
	void Nhap();
	void Xuat();
	friend class DoanhNghiep;
};
void Date::Nhap(){
	cout<<"Nhap ngay:"; cin>>day;
	cout<<"Nhap thang:"; cin>>month;
	cout<<"Nhap nam:"; cin>>year;
}
void Date::Xuat(){
	cout<<"Thoi gian:"<<day<<"/"<<month<<"/"<<year<<endl;
}
class DiaChi{
	private:
	   char dienThoai[12];
	   char phuong[30];
	   char quan[30];
	   char thanhPho[30];
	public:   
	void Nhap();
	void Xuat();
	friend class DoanhNghiep;
	
};
void DiaChi::Nhap(){
    cout<<"Nhap sdt:";         fflush(stdin); gets(dienThoai);
    cout<<"Nhap phuong:";      fflush(stdin); gets(phuong);
    cout<<"Nhap quan:";        fflush(stdin); gets(quan);
    cout<<"Nhap thanh pho:";   fflush(stdin); gets(thanhPho);
   
}
void DiaChi::Xuat(){
	cout<<"SDT:"<<dienThoai<<"  "<<"Phuong:"<<phuong<<"  "<<"Quan:"<<quan<<"  "<<"TP:"<<thanhPho<<endl;
	
}
class DoanhNghiep{
	private:
	   int maDn;
	   char tenDn[30];
	   Date ngayTl;
	   DiaChi diaChi;
	   char giamDoc[30];
	   long doanhThu;
	public:
	void Nhap();
	void Xuat();   
};
void DoanhNghiep::Nhap(){
	cout<<"Nhap ma doanh nghiep:"; cin>>maDn;
	cout<<"Nhap ten doanh nghiep:"; fflush(stdin); gets(tenDn);
	ngayTl.Nhap();
	diaChi.Nhap();
	cout<<"Nhap giam doc:"; fflush(stdin); gets(giamDoc);
	cout<<"Nhap doanh thu:"; cin>>doanhThu;
	
}
void DoanhNghiep::Xuat(){
	cout<<"Ma Doanh Nghiep:"<<maDn<<endl;
	cout<<"Ten Doanh Nghiep:"<<tenDn<<endl;
	ngayTl.Xuat();
	diaChi.Xuat();
	cout<<"Giam Doc:"<<giamDoc<<endl;
	cout<<"Doanh Thu:"<<doanhThu<<endl;
}
int main (){
	DoanhNghiep DN1;
	cout<<"THONG TIN DOANH NGHIEP"<<endl;
	DN1.Nhap();
	DN1.Xuat();
}
