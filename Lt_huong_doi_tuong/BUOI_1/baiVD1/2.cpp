#include <bits/stdc++.h>

using namespace std;

class HANG
{ 
      char MaH;
      char TenH[30];
      float DG;
   public:
   	  void NHAP();
   	  void XUAT();
};
void HANG::NHAP()
{
	cout<<"Nhap ma hang   :";    fflush(stdin);  gets(MaH);
	cout<<"Nhap ten hang  :";    fflush(stdin);  gets(TenH);
	cout<<"Nhap don gia   :";    cin>>DG;
}
void HANG::XUAT()
{
	cout<<"MA HANG    :"<<MaH<<endl;
	cout<<"TEN HANG   :"<<TenH<<endl;
	cout<<"DON GIA    :"<<DG<<endl;
}
int main()
{
	HANG *a;
	
	int n;
	cout<<"Nhap so hang n= "; cin>>n;
	a = new HANG[n];
	
	
	for ( int i=0; i<n; i++)
	    a[i].NHAP();
	
    for ( int i=0; i<n ;i++)
        a[i].XUAT();
        
	return 0;
}
