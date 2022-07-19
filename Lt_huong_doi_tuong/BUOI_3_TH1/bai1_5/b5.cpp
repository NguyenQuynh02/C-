#include <iostream>

using namespace std;
class MANG
{
    int *a;
    int n;
public:
    void nhap();
    void sap();
    void xuat();
};
void MANG::nhap()
{
    cout<<" NHAP n ="; cin>>n;
    a = new int [n];
    for ( int i=0; i<n ;i++)
    {
        cout<<"a["<<i<<"]= "; cin>>a[i];

    }

}
void MANG::xuat()
{

     for(int i=0; i<n; i++)
     cout<<a[i]<<" ";

}
void MANG::sap()
{
    for ( int i =0 ; i<n ; i++)
    for ( int j =i+1; j<n ; i++)
    if ( a[i] > a[j])
    {
        int tg;
        tg = a[i];
        a[i]= a[j];
        a[j]=tg;
    }
}
int main()
{
    MANG x;
    x.nhap();
    x.sap();
    x.xuat();
    return 0;
}
