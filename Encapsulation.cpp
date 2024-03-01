// Encapsulation In C++

#include <iostream>
#include <string> 
using namespace std;

// Declare Class Function
class Employee{
private: // private modifier
    string Name;
    int Age;
    string Skill;

public: // public modifier 
/* Setter and Getter */
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

// Funtion to display attributes
void show(){
    cout << endl;
    cout << "The new client is " << Name << endl;
    cout << "He/She is " << Age << endl;
    cout << "His/Her positions is " << Skill << "\n" << endl;
    }

// Funtion to declare varibles private to public 
Employee(string name, int age, string skill){
    Name = name;
    Age = age;
    Skill = skill;
    }
};

// Main Function
int main(){
    Employee hh = Employee ("Kraken", 20, "HR");
    hh.show();

    Employee SuSu = Employee ("Su Su", 27, "Assistant Manager");
    SuSu.show();
    
    return 0;
}
