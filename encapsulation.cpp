// Encapsulation In C++

#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
    string Name;
    int Age;
    string Skill;

public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }
    void setSkill(string skill){
        Skill = skill;
    }
    string getSkill(){
        return Skill;
    }

void show(){
    cout << endl;
    cout << "The new client is " << Name << endl;
    cout << "He/She is " << Age << endl;
    cout << "His/Her positions is " << Skill << "\n" << endl;
    }

Employee(string name, int age, string skill){
    Name = name;
    Age = age;
    Skill = skill;
    }
};

int main(){
    Employee hh = Employee ("Kraken", 20, "HR");
    hh.show();

    Employee SuSu = Employee ("Su Su", 27, "Assistant Manager");
    SuSu.show();
    
    return 0;
}
