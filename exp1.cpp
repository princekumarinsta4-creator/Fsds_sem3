#include <iostream>
#include <string>
using namespace std;


class StudentInfo
{
    
    private:
        string name;
        int rollNo;
        string course;
        float marks;

    
    public:
        void setData(string n, int r, string c, float m)
        {
            name = n;
            rollNo = r;
            course = c;
            marks = m;
        }

        void displayData()
        {
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Course: " << course << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main()
{
    StudentInfo student;
    student.setData("Prince kumar", 101, "Computer Science", 85.5);
    student.displayData();
    return 0;
}