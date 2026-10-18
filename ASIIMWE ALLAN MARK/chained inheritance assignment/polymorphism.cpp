#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int age;
public:
    Employee(string name, int age) : name(name), age(age){}
    virtual void Introduce(){
        cout << "My name is " << name << " and I am an employee." <<endl; 
    }
    void GiveAge(){
        cout << "I am " << age << " years old";
    }

};
class Teacher : public Employee // Teacher inherits all puclic functions from employee
{
public:
    Teacher(string name, int age) : Employee(name, age){}
    void Introduce(){
        cout << "My name is " << name << " and I am a teacher." <<endl;
    }
};
class Doctor : public Employee{
public:
    Doctor(string name, int age): Employee(name, age){}
    void Introduce(){
        cout << "My name is " << name << " and I am a doctor." <<endl;
    }
};

int main(){
    //Create employee object
    Employee employee("Asiimwe Allan",43);
    employee.Introduce();
    //Create Teacher object
    Teacher teacher("Mukwaya Teacher",25);
    Employee * teach = &teacher;
    teach->Introduce();
    //Create Doctor instance
    Doctor doctor("Doctor Manu",55);
    Employee * doc = &doctor;
    doc->Introduce();
    //Create other objects
    Employee lecturer = teacher;
    //Here the overriding function wont work because we change back to the base class and take its function instead.
    lecturer.Introduce();
    

    return 0;
}