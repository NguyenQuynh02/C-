#include<iostream>
using namespace std;
class VEHICLE{
	protected:
		char nhanHieu[50];
		char namSX[15];
		char hang[20];
		
	public:
	   void Nhap();
	   void Xuat();	
};
void VEHICLE::Nhap()
{
	cout<<"Nhap nhan hieu :";   fflush(stdin); gets(nhanHieu);
	cout<<"Nhap nam san xuat:"; fflush(stdin); gets(namSX);
	cout<<"Nhap hang:";         fflush(stdin); gets(hang);
}
void VEHICLE::Xuat()
{
	cout<<"Nhan Hieu:  "<<nhanHieu<<endl;
	cout<<"Nam SX:  "<<namSX<<endl;
	cout<<"Hang:  "<<hang<<endl;
}
class OTO : public VEHICLE
{
	private:
		int soChoNgoi;
		char dungTich[15];
	public:
	     void Nhap();
		 void Xuat();	
};
void OTO::Nhap()
{
	VEHICLE::Nhap();
	cout<<"Nhap so cho ngoi: "; cin>>soChoNgoi;
	cout<<"Nhap dung tich:  ";  fflush(stdin); gets(dungTich);
}
void OTO::Xuat()
{    VEHICLE::Xuat();
	cout<<"So Cho Ngoi: "<<soChoNgoi<<endl;
	cout<<"Dung Tich:  "<<dungTich<<endl;
}
class MOTO : public VEHICLE
{
	private:
		char phanKhoi[20];
	public:
	    void Nhap();
		void Xuat();	
		
};
void MOTO::Nhap()
{
	VEHICLE::Nhap();
	cout<<"Nhap phan khoi: "; fflush(stdin); gets(phanKhoi);
}
void MOTO::Xuat()
{   
    VEHICLE::Xuat();
	cout<<"Phan Khoi: "<<phanKhoi<<endl;
}
int main()
{
	OTO x;
	MOTO y;
	cout<<"THONG TIN OTO"<<endl;
	x.Nhap();
	cout<<"\n";
	x.Xuat();
	cout<<"\n";
	cout<<"THONG TiN MOTO"<<endl;
	y.Nhap();
	cout<<"\n";
	y.Xuat();
	return 0;
}
