#include<iostream>
using namespace std;
class Employee {
    private:
       int id;
       string firstName;
       string lastName;
       int salary;
    public:
       int getId(){
           return id;
       }
       void setId(int id){
           this->id=id;
       }
       string getFirstName(){
           return firstName;
       }
       void setFistName(string firstname){
           this->firstName=firstName;
       }
       string getLastName(){
           return lastName;
       }
       void setLastName(string LastName){
           this->lastName=lastName;
       }
       
       string getFullName(){
           return firstName+" "+lastName;
       }
       int getSalary(){
           return salary;
       }
       void setSalary(int salary){
           this->salary=salary;
       }
    
};
int main(){
	Employee e(1, "Kien", "Hoang", 1000);
	cout << "Id: " << e.getId() << endl;
	cout << "Name: " << e.getFullName() << endl;
	cout << "Salary: " << e.getSalary() << endl;
	return 0;
}
