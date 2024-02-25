#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    char grade;
    int marks;

    void display() {
        cout << "The Student Name is - " << name << "\n";
        cout << "His Grade is - " << grade << "\n";
        cout << "His gpa is - " << marks << " out of 500";
    }
};

int main() {
    Student mgmg;
    mgmg.name  = "Mg Mg";
    mgmg.grade = 'A';
    mgmg.marks = 480;
    mgmg.display();
}
