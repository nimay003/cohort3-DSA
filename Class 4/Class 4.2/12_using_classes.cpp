#include<bits/stdc++.h>

using namespace std;

class Student {
    string name;
    string address;
    int roll_no;
    float cgpa;
    int attendence;

    public :
        Student(){
            this->name = "";
            this->address = "";
            this->roll_no = 0;
            this->attendence = 0;
            this->cgpa = 0.0;
        }

        Student(string name, string address, int roll_no, float cgpa){
            this->name = name;
            this->address = address;
            this->roll_no = roll_no;
            this->attendence = 0;
            this->cgpa = cgpa;
        }

        Student(const Student &cop){
            this->name = cop.name;
            this->address = cop.address;
            this->roll_no = cop.roll_no;
            this->attendence = 0;
            this->cgpa = cop.cgpa;
        }

        void mark_attendence(){
            this->attendence++;
        }

        string getName() {return name;}
        string getAddress() {return address;}
        int getRollNo() {return roll_no;}
        float getCgpa() {return cgpa;}
        int getAttendence() {return attendence;}
};

int main(){
    Student ram;
    cout << "Default Constructor: " << endl;
    cout << "Name: " << ram.getName() << endl;
    cout << "Address: " << ram.getAddress() << endl;
    cout << "Roll No: " << ram.getRollNo() << endl;
    cout << "CGPA: " << ram.getCgpa() << endl;
    cout << "Attendance: " << ram.getAttendence() << endl;
    cout << "---------------------------------" << endl;

    Student shyam("Shyam", "Delhi", 101, 8.5);
    shyam.mark_attendence();
    cout << "Parameterized Constructor: " << endl;
    cout << "Name: " << shyam.getName() << endl;
    cout << "Address: " << shyam.getAddress() << endl;
    cout << "Roll No: " << shyam.getRollNo() << endl;
    cout << "CGPA: " << shyam.getCgpa() << endl;
    cout << "Attendance: " << shyam.getAttendence() << endl;
    cout << "---------------------------------" << endl;

    Student mohan(shyam);
    cout << "Copy Constructor (Mohan copied from Shyam): " << endl;
    cout << "Name: " << mohan.getName() << endl;
    cout << "Address: " << mohan.getAddress() << endl;
    cout << "Roll No: " << mohan.getRollNo() << endl;
    cout << "CGPA: " << mohan.getCgpa() << endl;
    cout << "Attendance: " << mohan.getAttendence() << endl;
    cout << "---------------------------------" << endl;

    return 0;
}