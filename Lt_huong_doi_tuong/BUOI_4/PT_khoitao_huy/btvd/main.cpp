#include<bits/stdc++.h>;


using namespace std;
class HANG
{
    char MAH[30];
    char TENH[30];
    float DG;
    int SL;
public:
    HANG();
    HANG( char *mah, char *tenh, float dg, int sl);
    ~HANG();
    void xuat();
};
void HANG::xuat()
{
    cout<<"MA HANG: " <<MAH<<endl;
    cout<<"TEN HANG: "<<TENH<<endl;
    cout<<"DON GIA: " <<DG<<endl;
    cout<<"SO LUONG: "<<SL<<endl;
}
HANG::HANG()
{
     strcpy(MAH, " ");
    strcpy(TENH, " ");
    DG=0;
    SL=0;
}
HANG::HANG( char *mah, char *tenh, float dg, int sl)
{
    strcpy(MAH, mah);
    strcpy(TENH,tenh);
    DG = dg;
    SL = sl;
}
HANG::~HANG()
{

}

int main()
{
    HANG k;
    k.xuat();
    HANG q( "002", "MT",100, 2);
    q.xuat();
    return 0;
}
