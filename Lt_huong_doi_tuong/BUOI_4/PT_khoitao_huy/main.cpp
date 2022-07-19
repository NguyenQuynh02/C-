#include<bits/stdc++.h>

using namespace std;
class HCN
{
    float D;
    float R;
public:
    void NHAP();
    void VE();
    float DIENTICH();
    HCN();// pt khoi tao ko doi
    HCN( float x, float y ); //pt khoi tao co doi
    ~HCN();

};
HCN::HCN()
{
    D=R=5;
}
HCN::HCN( float x, float y )
{
    D = x;
    D = y;
}
HCN::~HCN()
{
    cout<<"PT HUY DC GOI"<<endl;
}


void HCN::NHAP()
{
    cout<<"D = :"; cin>>D;
    cout<<"R = :"; cin>>R;
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

}


int main()
{
    HCN k;
    k.VE();
    cout<<"DIEN TICH HCN:  "<<k.DIENTICH()<<endl;
    HCN q(4,6);
    q.VE();
    cout<<"DIEN TICH:  "<<q.DIENTICH()<<endl;
    return 0;
}
