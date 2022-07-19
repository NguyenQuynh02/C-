#include<iostream>
#include<math.h>
using namespace std;
void nhap( int n)
{
    cout<<" nhap n="; cin>>n;
}
void Mot( int n)
{ 
    // Bài 1: Tính S(n1) = 1 + 2 + 3 + … + n
    long s1;
    for ( int i=1; i<=n; i++){
        s1 += i;
        }
        cout<<" S(n1) = 1 + 2 + 3 +   + n = "<<s1<<endl;

    

}
void Hai( int n)
{
    //Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
    long s2;
    
    for (int i=1;i<=n; i++){
        s2 += i*i;
        }
        cout<<"S(n2) = 1^2 + 2^2 +   + n^2 = "<<s2<<endl;
    
}
void Ba( int n)
{
    //Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n
    double s3;
    
    for ( int i=1; i<=n;i++){
          s3 += 1.0/i;
    }
        cout<<"S(n3) = 1 + 1/2 + 1/3 +  + 1/n = "<<s3<<endl;

    
}
void Bon (int n)
{
    //Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n
    double s4;
     
     for ( int i=1; i<=n; i++){
         s4 += 1.0/2*i;
       }
       cout<<" S(n4)= 1/2 + 1/4 +    1/2n = "<<s4<<endl;
}

void Nam( int n)
{
    //Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
    double s5;

    for (int i=0;i<=n;i++){
        s5 += 1.0/(2*i+1);
    }
    cout<<"S(n5)=1+1/3+1/5+   1/(2n+1) = "<<s5<<endl;
}
void Sau( int n)
{
    //Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)
	
	double s6;
	for( int i=1; i<=n;i++){
		s6 += 1.0/(i*(i+1));
	}
	cout<<" tong S(n6)=  1/1x2 + 1/2x3 +    +1/n6 x (n+1)= "<<s6;
}
void Bay( int n)
{
    //Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1
   
    double s7=0;
    for (int i=1; i<=n;i++){
        s7 += (float) i/(i+1);
    }
    cout<<"  S(n) = 1/2 + 2/3 + 3/4 +   + n / n + 1 ="<<s7;
}
void Tam(int n)
{
    //Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
   
    double s8=0;
    for ( int i=0; i<=n;i++){
        s8 += (float) (2*i+1)/(2*i+2);
    }
    cout<<" S(n) = 1/2 +3/4 + 5/6 + … + 2n + 1/ 2n + 2="<<s8;
}
void Chin( int n) // phải dùng thư viện math.h
{
    //Bài 9: Tính T(n) = 1 x 2 x 3…x N
    
    double s9=1;
    for ( int i=1;i<=n;i++){
        s9 *= i;
    }
    cout<<" T(n) = 1 x 2 x   x N="<<s9;

}
void Muoi( int n, float x)
{
    // Tính T(x, n) = x^n
    cout<<" nhap so mu n="; cin>>n;
    cout<<" nhap so co x="; cin>>x;
    float s=1;
    s = pow(x,n);
    cout<<" T(x,n)=x^n="<<s;
    // ko can gọi hàm nhập
}
void Mmot( int n1)
{ 
    // Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
    cout<<" nhap n1="; cin>>n1;
    float tich=1; 
    long tong =0;
    for ( int i=1; i<=n1; i++){
        tich *= i;
        tong += tich;
    }
       cout<<" Tính S(n) = 1 + 1.2 + 1.2.3 + + 1.2.3  N="<<tong;
}
void Mhai( int n2)
{
    // Tính S(n) = x + x^2 + x^3 + … + x^n
    cout<<" nhap n2="; cin>>n2;
    float x;
    float s2=0;
    cout<<" nhap so x="; 
    cin>>x;
    for ( int i=0;i<=n2;i++){
        s2 += pow(x,i);
    }
    cout<<"S(n) = x + x^2 + x^3 +   + x^n="<<s2;
}

int main ()
{
 int  n2;
 Mhai(n2);
 return 0;
}

