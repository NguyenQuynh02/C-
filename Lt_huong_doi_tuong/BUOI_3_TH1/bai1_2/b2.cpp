#include <iostream>
#include<math.h>
#include<iomanip>

using namespace std;
class HCN
{
    float D;
    float R;
public:
    void NHAP();
    void VE();
    float DIENTICH();
    float CHUVI();

};
void HCN::NHAP()
{
    cout<<"NHAP CHIEU DAI   :"; cin>>D;
    cout<<"NHAP CHIEU RONG  :"; cin>>R;
}
void HCN::VE()
{
    for ( int i=0; i<D;i++)
    {
        for ( int j =0; j<R ; j++)
            cout<<setw(3)<<"+";
        cout<<endl;
    }
}
float HCN::DIENTICH()
{
    return D*R;

}float HCN::CHUVI()
{
    return 2*(D+R);

}






int main()
{
    HCN a;
    a.NHAP();
    a.VE();
    cout<<"\n";
    cout<<"DIEN TICH HCN:  "<<a.DIENTICH()<<endl;
    cout<<"CHU VI HCN:     "<<a.CHUVI()<<endl;
    return 0;
}
