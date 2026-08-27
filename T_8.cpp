#include <iostream>
#include <cstring>
using namespace std;
 
struct Student {
    int id;
    char name[50];
    int age;
    float cgpa;
    char department[50];
    char email[100];
    char phone[20];
    char address[100];
    char gender[10];
    int semester;
};
 
int main() {
    Student s;
 
    s.id = 101;
    strcpy(s.name, "Akash");
    s.age = 22;
    s.cgpa = 3.75;
    strcpy(s.department, "CSE");
    strcpy(s.email, "akash@example.com");
    strcpy(s.phone, "01700000000");
    strcpy(s.address, "Dhaka");
    strcpy(s.gender, "Male");
    s.semester = 8;
 
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "CGPA: " << s.cgpa << endl;
    cout << "Department: " << s.department << endl;
    cout << "Email: " << s.email << endl;
    cout << "Phone: " << s.phone << endl;
    cout << "Address: " << s.address << endl;
    cout << "Gender: " << s.gender << endl;
    cout << "Semester: " << s.semester << endl;
 
    return 0;
}