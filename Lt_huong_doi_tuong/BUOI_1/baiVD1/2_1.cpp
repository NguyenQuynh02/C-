#include <bits/stdc++.h>

using namespace std;

class HANG
{ 
      char MaH[30];
      char TenH[30];
      float DG;
   public:
   	  void NHAP();
   	  void XUAT();
};
void HANG::NHAP()
{
	cout<<"Nhap ma hang   :";    fflush(stdin);  cin.getline(MaH, 30);
	cout<<"Nhap ten hang  :";    fflush(stdin);  cin.getline(TenH, 30);
	cout<<"Nhap don gia   :";    cin>>DG;
}
void HANG::XUAT()
{
	cout<<setw(20)<<MaH<<setw(30)<<TenH<<setw(15)<<DG<<endl;
}
int main()
{
	HANG *a;
	
	int n;
	cout<<"Nhap so hang n= "; cin>>n;
	a = new HANG[n];
	
	
	for ( int i=0; i<n; i++)
	    a[i].NHAP();
	    
	    
	cout<<setw(20)<<"MA HANG"<<setw(30)<<"TEN HANG"<<setw(15)<<"DON GIA"<<endl;


	
    for ( int i=0; i<n ;i++)
        a[i].XUAT();
        
	return 0;
}
