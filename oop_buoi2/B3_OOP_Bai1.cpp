#include<iostream>
using namespace std;
class Employee{
	private:
		char id[30];
		char name[30];
		int age;
		static int salary;
	public:
	  	Employee (){
	  		salary+=0;
		  }
		void Nhap();
		void Xuat();  	
};
void Employee::Nhap(){
	cout<<"Nhap ID: "; fflush(stdin);      gets(id);
	cout<<"Nhap ten: "; fflush(stdin);      gets(name);
	cout<<"Nhap tuoi: "; cin>>age;
	
}
void Employee::Xuat(){
	cout<<"ID nhan vien:"<<id<<endl;
	cout<<"Ten nhan vien:"<<name<<endl;
	cout<<"Tuoi nhan vien:"<<age<<endl;
	cout<<"Luong cua nhan vien:"<<salary<<endl;
	
}
int Employee::salary =30000;
int main (){
 Employee Nv1, Nv2;
 cout<<"NHAN VIEN THU NHAT"<<endl;
 Nv1.Nhap();
 Nv1.Xuat();
 cout<<"NHAN VIEN THU HAI:"<<endl;
 Nv2.Nhap();
 Nv2.Xuat();
 return 0;
}
