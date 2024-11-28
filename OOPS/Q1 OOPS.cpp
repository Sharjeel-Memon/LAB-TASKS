#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
protected:
    string name;
    int age;
    string address;

public:
    Person(string name, int age, string address) : name(name), age(age), address(address) {}

    virtual void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};


class Student : public Person {
private:
    int studentID;
    vector<int> grades;

public:
    Student(string name, int age, string address, int studentID) 
        : Person(name, age, address), studentID(studentID) {}

    void addGrade(int grade) {
        grades.push_back(grade);
    }

    double calculateGPA() {
        if (grades.empty()) return 0.0;
        double sum = 0;
        for (int grade : grades) {
            sum += grade;
        }
        return sum / grades.size();
    }

    void displayDetails() override {
        Person::displayDetails();
        cout << "Student ID: " << studentID << endl;
        cout << "GPA: " << calculateGPA() << endl;
    }
};


class Payable {
public:
    virtual double calculateSalary() = 0;
};


class Teacher : public Person, public Payable {
private:
    int teacherID;
    string subject;
    int classesTaught;
    double ratePerClass;

public:
    Teacher(string name, int age, string address, int teacherID, string subject, int classesTaught, double ratePerClass)
        : Person(name, age, address), teacherID(teacherID), subject(subject), classesTaught(classesTaught), ratePerClass(ratePerClass) {}

    void assignGrade(Student &student, int grade) {
        student.addGrade(grade);
    }

    double calculateSalary() override {
        return classesTaught * ratePerClass;
    }

    void displayDetails() override {
        Person::displayDetails();
        cout << "Teacher ID: " << teacherID << endl;
        cout << "Subject: " << subject << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};


int main() {
   
    cout << "Enter teacher details:\n";
    string tName, tAddress, tSubject;
    int tAge, tID, tClasses;
    double tRate;
    cout << "Name: ";
    cin >> tName;
    cout << "Age: ";
    cin >> tAge;
    cout << "Address: ";
    cin >> tAddress;
    cout << "Teacher ID: ";
    cin >> tID;
    cout << "Subject: ";
    cin >> tSubject;
    cout << "Number of classes taught: ";
    cin >> tClasses;
    cout << "Rate per class: ";
    cin >> tRate;

    Teacher teacher(tName, tAge, tAddress, tID, tSubject, tClasses, tRate);

   
    cout << "\nEnter first student details:\n";
    string s1Name, s1Address;
    int s1Age, s1ID;
    cout << "Name: ";
    cin >> s1Name;
    cout << "Age: ";
    cin >> s1Age;
    cout << "Address: ";
    cin >> s1Address;
    cout << "Student ID: ";
    cin >> s1ID;
    Student student1(s1Name, s1Age, s1Address, s1ID);

   
    cout << "\nEnter second student details:\n";
    string s2Name, s2Address;
    int s2Age, s2ID;
    cout << "Name: ";
    cin >> s2Name;
    cout << "Age: ";
    cin >> s2Age;
    cout << "Address: ";
    cin >> s2Address;
    cout << "Student ID: ";
    cin >> s2ID;
    Student student2(s2Name, s2Age, s2Address, s2ID);

    teacher.assignGrade(student1, 85);
    teacher.assignGrade(student1, 90);
    teacher.assignGrade(student2, 78);
    teacher.assignGrade(student2, 82);

    cout << "\nTeacher Details:\n";
    teacher.displayDetails();

    cout << "\nStudent 1 Details:\n";
    student1.displayDetails();

    cout << "\nStudent 2 Details:\n";
    student2.displayDetails();

    return 0;
}
