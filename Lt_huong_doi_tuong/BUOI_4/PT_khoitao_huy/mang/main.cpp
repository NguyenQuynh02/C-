
#include<bits/stdc++.h>;

using namespace std;
class MANG
{
    int *a;
    int n;
public:
    void nhap();
    void xuat();
    MANG();
    MANG(int y);
   ~MANG();
};
void MANG::nhap()
{
    cout<<"n = "; cin>>n;
    a = new int [n];
    for ( int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void MANG::xuat()
{
      for ( int i=0; i<n ; i++)
        cout<<setw(3)<<a[i];
      cout<<endl;
}
MANG::MANG()
{
    n=0;
    a = NULL;
}
MANG::MANG( int y)
{
    n =y;
    a = new int [n];
    for (int i=0;i<n;i++)
        a[i]=1;
}
MANG::~MANG()
{
    delete[] a; // giai phong bo nho
}







int main()
{
    MANG k;
    k.xuat();

    MANG q(10);
    q.xuat();

    MANG t;
    t.nhap();
    t.xuat();


    return 0;
}
