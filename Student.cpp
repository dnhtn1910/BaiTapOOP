#include<iostream>
#include"Person.cpp"
using namespace std;

class Student : public Person {
private:
    double diemGK = -1;
    double diemCK = -1;
    double gpa = -1;
    int ID = -1;
public:
    Student(string name, int ID, int age, string address, double diemGK, double diemCK ) : Person(name, age, address) {
        if (diemGK >= 0 && diemGK <= 10) {
            this->diemGK = diemGK;
        }
        if (diemCK >= 0 && diemCK <= 10) {
            this->diemCK = diemCK;
        }
        this->ID = ID;
        this->gpa = this->diemGK * 0.3 + diemCK * 0.7;
    }
    void setDiemGK(double diemGK) {
        if (diemGK >= 0 && diemGK <= 10) {
            this->diemGK = diemGK;
        }
        
    }    
    double getDiemGK() {
        return diemGK;
    }  
    double getDiemCK() {
        return diemCK;
    }
    void setDiemCK(double diemCK) {
        if (diemCK >= 0 && diemCK <= 10) {
            this->diemCK = diemCK;
        }
    }
    void setID(int ID) {
        this->ID = ID;
    }
    int getID() {
        return ID;
    }
    double getGPA() {
        return gpa;
    }
    void display() {
        cout << endl << "\t\tSTUDENT'S INFORMATION!" << endl;
        cout << "Student's ID: " << ID << endl;
        Person::display();
        cout << "Diem giua ki:" << diemGK << endl;
        cout << "Diem cuoi ki:" << diemCK << endl;
        cout << "GPA: " << gpa << endl;
        
    }
};