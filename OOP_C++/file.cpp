#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee
{
     virtual void AskforPromotion() = 0;
};

class Employee:AbstractEmployee
{
private:
     string Company;
     int Age;
protected:
     string Name;

public:
     void setName(string name){
          Name = name;
     }
     string getName(){
          return Name;
     }
     void setCompany(string company){
          Company = company;
     }
     string getCompany(){
          return Company;
     }
     void setAge(int age){
          if(age>=18)
               Age = age;
     }
     int getAge(){
          return Age;
     }
     void introduction()
     {
          cout << "Name - " << Name << endl;
          cout << "Company - " << Company << endl;
          cout << "Age - " << Age << endl;
     }

     // Creating a constructor
     Employee(string s, string c, int a)
     {
          Name = s;
          Company = c;
          Age = a;          
     }

     void AskforPromotion(){
          if(Age>30)
               cout<<Name<<" got promoted!"<<endl;
          else
               cout<<Name<<" no promotion for you!"<<endl;

     }

     virtual void Work()
     {
          cout<<Name<<" is checking email, task backlog."<<endl;
     }
};

class Developer : public Employee
{
public:
     string FavProgrammingLang;

     Developer(string s, string c, int a, string favProgrammingLang)
          :Employee(s, c, a)
     {
               FavProgrammingLang = favProgrammingLang;          
     }

     void FixBug()
     {
          cout<<Name<<" fixed bug using "<<FavProgrammingLang<<endl;
     }

     void Work()
     {
          cout<<Name<<" is writing "<<FavProgrammingLang<<" code."<<endl;
     }
};

class Teacher : public Employee
{
public:
     string Subject;
     void PrepareLesson()
     {
          cout<<Name<<" is preparing "<<Subject<<" lesson"<<endl;
     }
     Teacher(string s, string c, int a, string subject)
          : Employee(s,c,a)
     {
          Subject = subject;
     }

     void Work()
     {
          cout<<Name<<" is teaching "<<Subject<<endl;
     }
};

int main()
{
     // Employee emp1 = Employee("Mahaprasad", "AlphaGrep", 20);    
     // Employee emp2 = Employee("John", "Amazon", 32);
     Developer dev1 = Developer("Adam", "Google", 45, "Java");
     // dev1.FixBug();
     // dev1.AskforPromotion();
     
     Teacher teach1 = Teacher("Smita", "AECS", 40, "Chemistry.");
     // teach1.PrepareLesson();
     // teach1.AskforPromotion();

     Employee *e1 = &dev1;
     Employee *e2 = &teach1;

     e1 -> Work();     ;
     e2 -> Work();
     
     // emp1.setAge(15);
     // cout<<emp1.getName()<<" is "<<emp1.getAge()<<" years old."<<endl;
     

}