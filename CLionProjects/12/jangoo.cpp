
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name, section;
    int username, grade;
    cout << "Enter your name= ";
    cin >> name;
    cout << "Enter your usrename= ";
    cin >> username;
    cout << "Enter your section A or T or C= ";
    cin >> section;
    cout << "Enter your grade = ";
    cin >> grade;
    cout << "Name: " << name;
    cout << "Username: " << username ;
    if (section == "A")
    {
        cout << "section: Control";
    }
    if (section == "T"){
        cout << "section: Communication";
    }
    if (section == "C"){
        cout << "section: Computer";
    }
    switch (grade){
    case 0 ... 59:
        cout << "grade: F";
        break;
    case 60 ... 69:
        cout << "grade: D";
        break;
    case 70 ... 79:
        cout << "grade: C";
        break;
    case 80 ... 89:
        cout << "grade: B";
        break;
    case 90 ... 100:
        cout << "grade: A";
        break;
    default:
        cout << "error";
    }

    return 0;
}