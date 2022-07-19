#include<iostream>
using namespace std;
class HinhTron{
    public:
    double bk;
    void nhap(){
    	cout<<"nhap ban kinh:"; cin>>bk;
    	
	}

	void s();
	void cv();
};
	void HinhTron::s()
	{
		cout<<"dien tich hinh tron la:"<<3.14*bk*bk<<"\n";
	}
	void HinhTron::cv()
	{
		cout<<" chu vi hinh tron la:"<<2*3.14*bk<<"\n";
	}


int main ()
{
    HinhTron r ;
    r.nhap();
    r.s();
    r.cv();
    return 0;
}

