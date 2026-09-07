#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Parameterized constructor
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Copy constructor
    Student(const Student &original) {
        this->name = original.name;
        this->age = original.age;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1("Gaurav", 20);

    // Copy constructor
    Student s2(s1);

    s2.display();

    return 0;
}