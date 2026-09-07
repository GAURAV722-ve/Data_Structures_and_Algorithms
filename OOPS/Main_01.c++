#include<iostream>
#include<string>
using namespace std;

class teacher{
private:
   double salary;
public:
    string name;
    string dept;
    string sub;

    void changeDept(string newdept){
        dept = newdept;
    }
    
    void set_sal(double s){
        salary = s;
    }

    double get_sal() {
        return salary;
    }

};

int main(){
    
    teacher t1;
    t1.name = "Gaurav Singh";
    t1.dept = "CSE";
    t1.sub = "C++";
    t1.set_sal(25000);
    cout<<t1.get_sal()<<endl;
    
    return 0;
}