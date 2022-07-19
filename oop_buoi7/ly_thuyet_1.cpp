#include<iostream>

using namespace std;
int Sum(int a, int b){
	return a+b;
}


float Sum(float a, float b){
	return a+b;
}


double Sum(double a, double b){
	return a+b;
}





int main(){
	cout<< Sum(1,2)<<endl;
	cout<< Sum(1.7f , 2.3f)<<endl;
	cout<< Sum(3.5,2.5)<<endl;
	
	
	return 0;
	
}
// function overlading: