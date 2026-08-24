#include <iostream>
using namespace std;
 
struct Student
{
    int id;
    int age;
    float cgpa;
    char department[50];
    char email[100];
    char phone[25];
    char address[100];
    char gender[10];
    int semester;
    int creditHours;
    char status[20];
    char name[100];
};
 
int main()
{
    Student student;
 
    cout << "Enter Student ID: ";
    cin >> student.id;
 
    cout << "Enter Student Age: ";
    cin >> student.age;
 
    cout << "Enter Student CGPA: ";
    cin >> student.cgpa;
 
    cout << "Enter Department: ";
    cin >> student.department;
 
    cout << "Enter Email: ";
    cin >> student.email;
 
    cout << "Enter Phone Number: ";
    cin >> student.phone;
 
    cout << "Enter Address: ";
    cin >> student.address;
 
    cout << "Enter Gender: ";
    cin >> student.gender;
 
    cout << "Enter Semester: ";
    cin >> student.semester;
 
    cout << "Enter Credit Hours: ";
    cin >> student.creditHours;
 
    cout << "Enter Status: ";
    cin >> student.status;
 
    cout << "Enter Student Name: ";
    cin >> student.name;
 
    cout << "\n--- Student Information ---" << endl;
    cout << "Student ID: " << student.id << endl;
    cout << "Age: " << student.age << endl;
    cout << "CGPA: " << student.cgpa << endl;
    cout << "Department: " << student.department << endl;
    cout << "Email: " << student.email << endl;
    cout << "Phone: " << student.phone << endl;
    cout << "Address: " << student.address << endl;
    cout << "Gender: " << student.gender << endl;
    cout << "Semester: " << student.semester << endl;
    cout << "Credit Hours: " << student.creditHours << endl;
    cout << "Status: " << student.status << endl;
    cout << "Name: " << student.name << endl;
 
    return 0;
}