#include<iostream>
using namespace std;
class TamThuc
{
	   float a,b,c;
	public:
	TamThuc();
	TamThuc(float x, float y, float z);
	TamThuc operator+(TamThuc y);
	TamThuc operator-(TamThuc y);
	friend ostream &operator << ( ostream &x, TamThuc y);
	   
	
};
TamThuc::TamThuc(){
	a=b=c=0;
}
TamThuc::TamThuc(float x, float y, float z){
	a=x;
	b=y;
	c=z;
}
TamThuc TamThuc::operator+(TamThuc y){
	TamThuc tg;
	tg.a=a+y.a;
	tg.b=b+y.b;
	tg.c=c+y.c;
	return tg;
}
TamThuc TamThuc::operator-(TamThuc y){
	TamThuc tg;
	tg.a=a-y.a;
	tg.b=b-y.b;
	tg.c=c-y.c;
	return tg;
}
ostream &operator << ( ostream &x , TamThuc y){
	x<<y<<"X";
	if(y.b>=0){
		x<<"+"<<y.b<<"X";
	}else{
		x<<"-"<<-y.b<<"X";
	}
	if(y.c>=0){
		x<<"+"<<y.c;
	}else{
		x<<"-"<<-y.c;
	}
	return x;
	
}
int main (){
	
    TamThuc x(2,1,9), y(2,6,10);
    
   cout<<"Tam thuc x da dao dau: "<<x<<endl;
   cout<<"Tam thuc y da dao dau: "<<y<<endl;
   TamThuc Tong = x+y;
   TamThuc Hieu = x-y;
   cout<<"Tam thuc TONG: "<<Tong<<endl;
   cout<<"Tam thuc HIEU: "<<Hieu<<endl;
    return 0;
}

