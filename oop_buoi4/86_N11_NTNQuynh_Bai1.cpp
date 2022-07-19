#include<bits/stdc++.h>
using namespace std;

class Date{
	private:
		int d,m,y;
	public:
		void Nhap();
		void Xuat();
};

class NhanSu{
	private:
		static int maNhanSu;
		int ma;
		char hoTen[20];
		Date nS;
	public:
		void Nhap();
		void Xuat();
};

int NhanSu::maNhanSu = 0;

void TieuDe () {
	cout<<setw(15)<<left<<"Ma nhan su";
	cout<<setw(15)<<left<<"Ho Ten";
	cout<<setw(15)<<left<<"Ngay sinh"<<endl;
}

int main () {
	NhanSu nsu;
	NhanSu *p = &nsu;
	int n;
	cout<<"Nhap so luong nhan vien: "; cin >> n;
	p = new NhanSu[n];
	for(int i=0;i<n;i++) {
		cout<<"Nhap thong tin cho sinh vien thu "<<i+1<<":\n";
		p[i].Nhap();
	}
	cout<<"\nBang thong tin nhan vien\n";
	TieuDe();
	for(int i=0;i<n;i++) {
		p[i].Xuat();
	}
	return 0;
}

void Date::Nhap() {
	cout<<"Nhap vao ngay sinh cua nhan vien: "; cin >> this->d;
	cout<<"Nhap vao thang sinh cua nhan vien: "; cin >> this->m;
	cout<<"Nhap vao nam sinh cua nhan vien: "; cin >> this->y;
}

void Date::Xuat() {
	cout<<this->d<<"/"<<this->m<<"/"<<this->y<<endl;
}

void NhanSu::Nhap() {
	maNhanSu++;
	ma = maNhanSu;
	cout<<"Nhap vao ho ten: ";			fflush(stdin);	gets(this->hoTen);
	cout<<"Nhap vao ngay thang nam sinh cua nhan su:\n";	nS.Nhap();
}

void NhanSu::Xuat() {
	cout<<setw(15)<<left<<this->ma;
	cout<<setw(15)<<left<<this->hoTen;
	nS.Xuat();
}


