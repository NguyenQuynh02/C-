#include<iostream>
using namespace std;
void Hai(int n2)
{

long s2;
cout<<"nhap n2:"; cin>>n2;
for (int i=1;i<=n2; i++){
    s2 += i*i;
	}
    cout<<"S(n2) = 1^2 + 2^2 + … + n^2="<<s2;
   
}
int main ()
{
	 int n2;
	 Hai(n2);
	 return 0;
}
