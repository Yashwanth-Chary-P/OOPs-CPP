#include <bits/stdc++.h>
using namespace std;

class Teacher {

public:
    string name;
    string dept;
    string subject;
    double salary;

    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {

    Teacher t1;

    t1.name = "Yashwanth";
    t1.dept = "Computer Science & Engneering";
    t1.subject = "OOPs";
    t1.salary = 1000000000000000.00;

    t1.changeDept("Deep Learning");

    cout << "Name    : " << t1.name << endl;
    cout << "Department : " << t1.dept << endl;
    cout << "Subject : " << t1.subject << endl;
    cout << "Salary  : " << t1.salary << endl;

    return 0;
}