#include<iostream>
using namespace std;
class Student {
private:
	int maSV;
	string Ten;
	string NgaySinh;
	string Gt;
	float Dtb;
	string dDuc;
public:
	Student() {

	}

	Student(int maSV, string Ten, string NgaySinh, string Gt, string dDuc) {
		this->maSV = maSV;
		this->Ten = Ten;
		this->NgaySinh = NgaySinh;
		this->Gt = Gt;
		this->setDtb(Dtb);
		this->dDuc = dDuc;
	}

	int getmaSV() {
		return  maSV;
	}

	void setmaSV(string maSV) {
		this->maSV = maSV;
	}

	string getTen() {
		return Ten;
	}

	void setTen(string Ten) {
		this->Ten = Ten;
	}

	string getNgaySinh() {
		return NgaySinh;
	}

	void setNgaySinh(string NgaySinh) {
		this->NgaySinh = NgaySinh;
	}

	string getGt() {
		return Gt;
	}

	void setGt(string Gt) {
		this->Gt = Gt;
	}

	float getDtb() {
		return Dtb;
	}
	void setDtb( float Dtb){
		this->Dtb= Dtb;
	}
};
