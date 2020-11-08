#include <iostream>
//#include <student.h>
using namespace std;
int main() {
  int a;
  //int g ;
  int grade ;

  string section;
  char student;
   cout<< "enter the id= ";
   cin >>a;
   cout <<"enter the name= ";
   cin >>student;
   cout <<"enter the section= ";
   cin >>section;
  // cout<<"the grade = ";
   //cin>>grade;
   if (section =="a")
       cout<<"the student join to control section";
   else if (section =="t") {
       cout<<  student;
       cout<<  " join to communications section",student;
   }
   else
       if (section == "c")
       cout<<" the student join to computer section";
   if (grade>=90){
       cout<<"A";}
   else if (grade>=80){
       cout<<"B";}
   else if (grade>=70){
       cout<<"C";}
   else if (grade>=60){
       cout<<"D";}
   else if (grade>=50){
       cout<<"F";}
    return 0;
}
