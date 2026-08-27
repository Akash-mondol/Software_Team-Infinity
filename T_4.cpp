#include <iostream>
using namespace std;

struct Student
{
    int id;
    char name[50];
    int age;
    float cgpa;
    char department[50];
    char email[100];
};

int main()
{
    Student student;

    cout << "Enter Student ID: ";
    cin >> student.id;

    cout << "Enter Student Name: ";
    cin >> student.name;

    cout << "Enter Student Age: ";
    cin >> student.age;

    cout << "Enter Student CGPA: ";
    cin >> student.cgpa;

    cout << "Enter Student Department: ";
    cin >> student.department;

    cout << "Enter Student Email: ";
    cin >> student.email;

    cout << "\n--- Student Information ---" << endl;
    cout << "ID: " << student.id << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "CGPA: " << student.cgpa << endl;
    cout << "Department: " << student.department << endl;
    cout << "Email: " << student.email << endl;

    return 0;
}