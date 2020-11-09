/*mohammed adam
secend class
computer*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string student, section;
    int id, grade;
        cout << "Enter the student name= ";
        cin >> student;
        cout << "Enter the student id= ";
        cin >> id;
        cout << "Enter the student section A or T or C= ";
        cin >> section;
        cout << "Enter the student grade= ";
        cin >> grade;
        cout << "the student name  = " << student << endl;
        cout << "id= " << id << endl;
        if (section == "A"){
            cout << "section = Control" << endl;}
        else
            if (section == "T"){
            cout << "section = Communication" << endl;}
            else if (section == "C"){
            cout << "section = Computer" << endl;}
        switch (grade){
            case 90 ... 100:
                cout << "grade= A" << endl;
                break;
            case 80 ... 89:
                cout << "grade= B" << endl;
                break;
            case 70 ... 79:
                cout << "grade= C" << endl;
                break;
            case 60 ... 69:
                cout << "grade= D" << endl;
                break;
            case 0 ... 59:
                cout << "grade= F" << endl;
                break;
            default:
                cout << "error" << endl;
        }
    return 0;
}
