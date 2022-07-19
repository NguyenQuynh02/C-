#include<iostream>
using namespace std;
class Date{
	private:
		int day, month, year;
	public:
	  // void Nhap();
	  // void Xuat();
	  int GetDay(){ 
	      return day;
	    }
	  int GetMonth(){
	    return month;
		}
	  int GetYear(){
	    return year;
		}
	  void SetDay(int day)	{
	     this->day= day;
		}
	  void SetMonth(int month){
	     this->month= month;
		 }
	  void SetYear( int year){
	      if ( year <= 2003){ //loc du lieu gan doi tuong
	      	this->year=year;
		  }else{
		  	this->year = 1990; // neu ko <2003 mac dinh 1990
		  }
		  }
	  // su dung cac methro public tren dde xuong class person nhap xuat
};
class Student {
	private:
		int id;
		Date birthday;
	public:
	    static int idTemp;	
		void Nhap();
		void Xuat();
		Student();
};
int Student::idTemp = 1;
Student::Student() // ham khoi tao 
{
	this->id = idTemp;   // this->id= Student::idTemp
	idTemp++; // tang no len 
}
void Student::Nhap(){
	int temp;
	cout<<"Nhap ngay sinh:"; cin>>temp; birthday.SetDay(temp);
	cout<<"Nhap thang sinh:"; cin>>temp; birthday.SetMonth(temp);
	cout<<"Nhap nam sinh:"; cin>>temp; birthday.SetYear(temp);
	
}
void Student::Xuat(){
  //	cout<< birthday.GetDay()<<"/"<<birthday.GetMonth()<<"/"<<birthday.GetYear()<<endl;
   cout<< id <<endl;
}
int main (){
	
/*	a.Nhap();
	cout<<"\nThong tin person:"<<endl;
	a.Xuat();
	return 0;
 */
    int n =5;
    Student *a = new Student[n];
    for ( int i =0; i<n; i++){
    	a[i].Xuat();
	}
	cout<<"\nxuat lai:"<<endl;// ma ko thay doi
	for ( int i =0; i<n; i++){
    	a[i].Xuat();
	}
	
	
}
