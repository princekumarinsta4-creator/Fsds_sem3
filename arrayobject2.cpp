#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    string name;

    void display(){
        cout<< " id: "<<id <<endl;
        cout<<"name:"<< name <<endl;
    }
};

int main(){
    Employee *emp = new Employee;

    emp->id = 101;
    emp->name = "Prince";
    emp->display();
    delete emp;
    return 0;
} 