#include <iostream>
#include <string>
using namespace std;

class Bonus{
    virtual void AskForBonus() = 0;
};

class Employee:Bonus {
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
    cout << "His/Her positions is " << Skill << endl;
    cout << "Welcome to our new company" << "\n" << endl;
    }

Employee(string name, int age, string skill){
    Name = name;
    Age = age;
    Skill = skill;
    }

void AskForBonus(){
    if(Age > 30)
        cout << Name << " got Bonus" << endl;
    else 
        cout << Name << " need more skills and experiences" << endl;
    }
};

int main(){
    Employee hh = Employee ("Kraken", 31, "HR");
    hh.show();

    Employee SuSu = Employee ("Su Su", 23, "Assistant Manager");
    SuSu.show();
    
    hh.AskForBonus();
    SuSu.AskForBonus();
    return 0;
}
