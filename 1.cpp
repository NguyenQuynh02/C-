#include<iostream>
using namespace std;

/*
  static: �u?c c?p ph�t � nh? khi bi�n d?ch chuong tr�nh, kh�ng thay d?i
  truy xu?t: tenClass::tenBien
  kh?i t?o: int Student::cnt = 10;
*/
class Student {
private:
  static int cnt;
  int tuoi;
public:
  Student() {
    cnt+=0;
  }
  void Nhap();
  void Xuat();

};

void Student::Nhap() {
  cout << "Nhap tuoi: "; cin >> tuoi;
}
void Student::Xuat() {
  
  cout << "cnt: " << Student::cnt << endl;
  cout << "Tuoi: " << &tuoi << endl;
}
int Student::cnt = 10;
// void ShowInfo(Student student) {
//   cout << "cnt: " << student.cnt << endl;
//   cout << "Ten: " << student.hoTen << endl;
// }

int main( ) {
  Student svA;

  Student svB;
  svA.Nhap();
  svA.Xuat();
  svB.Xuat();



 

  return 0;
} 
