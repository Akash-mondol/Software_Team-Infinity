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
    int creditHours;
};

int main() {
    Student s;

    s.id = 101;
    std::strcpy(s.name, "Akash");
    s.age = 22;
    s.cgpa = 3.75;
    std::strcpy(s.department, "CSE");
    std::strcpy(s.email, "akash@example.com");
    std::strcpy(s.phone, "01700000000");
    std::strcpy(s.address, "Dhaka");
    std::strcpy(s.gender, "Male");
    s.semester = 8;
    s.creditHours = 120;

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
    cout << "Credit Hours: " << s.creditHours << endl;

    return 0;
}