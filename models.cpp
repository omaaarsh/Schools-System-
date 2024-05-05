#include<iostream>
using namespace std;
//model Public data
class PublicData{
    protected:
    string name;
    int id;
    public:
    void setName(string name){
        this->name = name;
    }
    void setId(int id){
        this->id = id;
    }
    string getName(){
        return name;
    }
    int getId(){
        return id;
    }
};
//model Base Data
class BaseData:public PublicData{
    protected:
        string phoneNumber;
        int age;
    public:
    void setPhoneNumber(string phoneNumber){
        this->phoneNumber = phoneNumber;
    }
    void setAge(int age){
        this->age = age;
    }
    string getPhoneNumber(){
        return phoneNumber;
        }
    int getAge(){
        return age;
    }
};
//model Course
class Course:public PublicData{
    protected:
    double hours;
    int studentIds[5];
    public:
    void setHours(double hours){
        this->hours = hours;
    }
    double getHours(){
        return hours;
        }
    void setStudentIds(int studentIds[5]){
        for (int i = 0; i <sizeof(this->studentIds)/sizeof(this->studentIds[0]); i++)
        {
            this->studentIds[i] = studentIds[i];
        }
    }
    int * getStudentIds(){
        return studentIds;
    }
    friend ostream& operator<<(ostream& output,Course &c){
        output<<"Name: "<<c.name<<"\n";
        output<<"CRN: "<<c.id<<"\n";
        output<<"Hours : "<<c.hours<<"\n";
        return output;
       }  
};
//model Teacher
class Teacher:public BaseData{
    protected:
    double salary;
    int studentIds[5];
    public:
    void setSalary(double salary){
        this->salary = salary;
    }
    void setStudentIds(int studentIds[5]){
        for (int i = 0; i <sizeof(this->studentIds)/sizeof(this->studentIds[0]); i++)
        {
            this->studentIds[i] = studentIds[i];
        }
    }
    int * getStudentIds(){
        return studentIds;
    }
    double getSalary(){
        return salary;
    }
    friend ostream& operator<<(ostream& output,Teacher &t){
        output<<"Name: "<<t.name<<"\n";
        output<<"Id: "<<t.id<<"\n";
        output<<"Age: "<<t.age<<"\n";
        output<<"PhoneNumber: "<<t.phoneNumber<<"\n";
        output<<"Salary: "<<t.salary<<"\n";
        return output;
       }  
};
//model Student
class Student:public BaseData{
    protected:
    double gpa;
    Teacher teachers[5];
    Course courses[5];
    public:
    void setGpa(double gpa){
        this->gpa = gpa;
    }
    void setTeacher(Teacher teachers[5]){
        for (int i = 0; i <sizeof(this->teachers)/sizeof(this->teachers[0]); i++)
        {
        this->teachers[i] = teachers[i];
        }
    }
    void setTeacher(Course courses[5]){
        for (int i = 0; i <sizeof(this->courses)/sizeof(this->courses[0]); i++)
        {
        this->courses[i] = courses[i];
        }
    }
    Teacher * getTeacher(){
        return teachers;
    }
    Course * getCourse(){
        return courses;
    }
    double getGpa(){
        return gpa;}
    friend ostream& operator<<(ostream& os,Student &s){
        os<<"Name: "<<s.name<<"\n";
        os<<"Id: "<<s.id<<"\n";
        os<<"Age: "<<s.age<<"\n";
        os<<"PhoneNumber: "<<s.phoneNumber<<"\n";
        os<<"Gpa: "<<s.gpa<<"\n";
        return os;
       }
};
