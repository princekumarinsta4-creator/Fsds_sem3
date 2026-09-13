#include <iostream>
using namespace std;

class student {
    public:
    int rollno;
    string name ;
    void display(){
        cout<<"roll no:"<<rollno <<endl;
        cout<<"name :" <<name <<endl;
    }
};
int main(){
student s;
s.rollno = 101;
s.name = "Prince";

student *ptr =&s;
ptr->display();
return 0;

}