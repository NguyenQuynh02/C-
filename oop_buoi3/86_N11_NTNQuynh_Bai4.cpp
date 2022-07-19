#include<iostream>
using namespace std;
class School{
	private:
		char Name[30];
		char Date[30];
	public:
	   void Nhap();
	   void Xuat();
	   friend class Faculty;	
};
void School::Nhap(){
	cout<<"Nhap ten truong:"; fflush(stdin); gets(Name);
	cout<<"Nhap ngay thang:"; fflush(stdin); gets(Date);
}
void School::Xuat(){
	cout<<"Ten Truong:"<<Name<<endl;
	cout<<"Ngay Thang:"<<Date<<endl;
}
class Faculty{
	private:
		char name[30];
		char date[30];
		School x;
	public:
	  void Nhap();
	  void Xuat();
	  friend class Student;	
};
void Faculty::Nhap(){
	cout<<"Nhap ten khoa :"; fflush(stdin); gets(name);
	cout<<"Nhap thoi gian:"; fflush(stdin); gets(date);
	x.Nhap();
}
void Faculty::Xuat(){
	cout<<"Ten Khoa:"<<name<<endl;
	cout<<"Thoi Gian:"<<date<<endl;
	x.Xuat();
}
class Student{
	private:
		Faculty y;
		char Class[30];
		float Score;
	public:
	    void Nhap();
		void Xuat();	
};
void Student::Nhap(){
	y.Nhap();
	cout<<"Nhap lop:"; fflush(stdin); gets(Class);
	cout<<"Nhap diem:"; cin>>Score;
}
void Student::Xuat(){
	y.Xuat();
	cout<<"Lop cua sinh vien:"<<Class<<endl;
	cout<<"Diem cua sinh vien:"<<Score<<endl;
}
int main (){
	int n;
	Student Sv;
	cout<<"Nhap so sinh vien:";  cin>>n;
	for ( int i = 1; i <= n ; i++){
	cout<<"Thong tin sinh vien "<<i<<":"<<endl;
	Sv.Nhap();
	Sv.Xuat();
	Student();
   }
   return 0;
}
