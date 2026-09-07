#include<iostream>
#include<string>
using namespace std;

class teacher{
private:
    double salary;
public:
    string name;
    string dept;
    string subject;

    teacher(){
        dept = "Computer Science";
    }

    teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->salary = salary;
        this->subject = subject;
    }

    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Subject : "<<subject <<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

int main(){
    teacher t1;  // Non parameterized constructor.
    teacher t2("Gaurav Singh", "Computer science", "C++",25000);  // parameterized constructor.

    cout << "Default Constructor Object\n";
    cout << "Department: " << t1.dept << endl;

    cout << "\nParameterized Constructor Object\n";
    t2.display();

    return 0;
}