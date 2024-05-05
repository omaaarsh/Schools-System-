#include"controller.cpp"
#include<iostream>
#include<algorithm>
#include<array>
#include<string>
using namespace std;
int choice;   // the number of the system
void printMesssage(){
cout<<"(*****Welcome To System Management*****\n";
cout<<"1. Student System\t2. Teacher System\n";
cout<<"3. Course System\t4. Exit System \n";
}
void printSystem(string type){
cout<<"***** "<<type<<" System Management*****\n";
cout<<"1.Add "<<type<<"\t\t2.Show "<<type<<"\n";
cout<<"3.Edit "<<type<<"\t\t4.Remove"<<type;
cout<<"\n5.Exit\n";
}
void addStudent(){
StudentController studentController;
Student student;
if (studentController.getStudentIndex()>=25)
    {
    cout<<"Students is full\n";
    return;
    }
cout<<"Student information: \n";
cout<<"Enter Student Name:";
string stdName;
cin>>stdName;
student.setName(stdName);
cout<<"Enter Student Age:";
int stdAge;
cin>>stdAge;
student.setAge(stdAge);
cout<<"Enter Student Phone Number:";
string stdPhoneNumber;
cin>>stdPhoneNumber;
student.setPhoneNumber(stdPhoneNumber);
cout<<"Enter Student Gpa:";
double stdGpa;
cin>>stdGpa;
student.setGpa(stdGpa);
if(studentController.addStudent(student)!=-1){
    cout<<"succesfully added "<<endl;
}
}
void showStudent(){
    int id ;
    cout<<"Enter Student ID: ";
    cin>>id;
    if (id>2000 && id<=2025)
        {      
            StudentController studentController;
            cout<<studentController.showStudent(id);
        }
    else{
        cout<<"Invalid Student ID";
        }
}
void studentSwitch(int choice){
     switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            showStudent();
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;    
        }
}
void addTeacher(){
TeacherController teacherController;
Teacher teacher;
if (teacherController.getTeacherIndex()>=25)
    {
    cout<<"Teacher is full\n";
    return;
    }
cout<<"Teacher information: \n";
cout<<"Enter Teacher Name:";
string TeacherName;
cin>>TeacherName;
teacher.setName(TeacherName);
cout<<"Enter Teacher Age:";
int TeacherAge;
cin>>TeacherAge;
teacher.setAge(TeacherAge);
cout<<"Enter Teacher Phone Number:";
string TeacherPhoneNumber;
cin>>TeacherPhoneNumber;
teacher.setPhoneNumber(TeacherPhoneNumber);
cout<<"Enter Teacher Salary:";
double salary;
cin>>salary;
teacher.setSalary(salary);
if(teacherController.addTeacher(teacher)!=-1){
    cout<<"Teacher successfully added  "<<endl;
}
}
void showTeacher(){
    int id ;
    cout<<"Enter Teacher ID: ";
    cin>>id;
    if (id>6000 && id<=6025)
        {      
            TeacherController teacherController;
            cout<<teacherController.showTeacher(id);
        }
    else{
        cout<<"Invalid Student ID";
        }
}
void teacherSwitch(int choice){
     switch (choice)
        {
        case 1:
            addTeacher();
            break;
        case 2:
            showTeacher();
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;    
        }
}
void addCourse(){
CourseController courseController;
Course course;
if (courseController.getCourseIndex()>=25)
    {
    cout<<"Course is full\n";
    return;
    }
cout<<"Course information: \n";
cout<<"Enter Course Name:";
string courseName;
cin>>courseName;
course.setName(courseName);
cout<<"Enter Course Hours:";
double courseHours;
cin>>courseHours;
course.setHours(courseHours);
if(courseController.addCourse(course)!=-1){
    cout<<"Course successfull added "<<endl;
}
}   
void showCourse(){
    int CRN ;
    cout<<"Enter Course CRN: ";
    cin>>CRN;
    if (CRN>4000 && CRN<=4025)
        {      
            CourseController courseController;
            cout<<courseController.showCourse(CRN);
        }
    else{
        cout<<"Invalid CRN";
        }
}
void courseSwitch(int choice){
    switch (choice)
    {
    case 1:
        addCourse();
        break;
    case 2:
        showCourse();
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;    
    }
}
int main()
{
    int flag = 0;
    while(true)
    {
        printMesssage();
        cout<<"Enter the number of the operation you want to do!: ";
        cin >> choice;
        switch (choice)
        {
            case 1:   //Student System
                printSystem("Student");
                cout<<"Enter the number of the student operation you want to do!: ";
                cin>>choice;
                studentSwitch(choice);    
                break;
            case 2:   //Teacher System
                printSystem("Teacher");
                cout<<"Enter the number of the teacher operation you want to do!: ";
                cin>>choice;    
                teacherSwitch(choice);
                break;
            case 3:   //Course System
                printSystem("Course");
                cout<<"Enter the number of the course operation you want to do!: ";
                cin>>choice;    
                courseSwitch(choice);
                break;
            case 4:
                cout << "Exiting the system." << endl;
                flag=1;
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }
        if (flag ==1)
        {
            break;
        }
    }

}