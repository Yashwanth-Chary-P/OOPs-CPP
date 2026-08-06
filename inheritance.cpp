#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;
    
    Person(string name, int age){
        cout << "This is the parent constructor\n";
        this->name = name;
        this->age = age;
    }

    ~Person(){
        cout << "This is the parent destructor\n";
    }
};

class Student : public Person{
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age){
        cout << "This is the child constructor\n";
        this->name = name;
        this->age = age;
        this->rollno = rollno;
    }

    void getInfo(){
        cout << "Information display \n";
    }

    ~Student(){
        cout << "This is child Destructor\n";
    }
};

int main(){
    Student s("Ravi", 21, 101);
    s.getInfo();

    return 0;
}