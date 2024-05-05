#include"repository.cpp"
class StudentValidation{
    public:
    int validateStudent(Student student){
        if (student.getName().size()==0||student.getName().size()<3
        || student.getName().size()>10)
        {
            cout<<"Invalid Name!"<<endl;
        }
        else if(student.getAge()<17||student.getAge()>30)
        {
            cout<<"Invalid Age!"<<endl;
        }
        else if(student.getPhoneNumber().size()==0||student.getPhoneNumber()[0]!='0'||(
            (student.getPhoneNumber()[1]+student.getPhoneNumber()[2]!='1'+'2')&&
            (student.getPhoneNumber()[1]+student.getPhoneNumber()[2]!='1'+'1')&&
            (student.getPhoneNumber()[1]+student.getPhoneNumber()[2]!='1'+'0')&&
            (student.getPhoneNumber()[1]+student.getPhoneNumber()[2]!='1'+'5'))
            ||student.getPhoneNumber().size()!=11){
            cout<<"Invalid Phone Number!"<<endl;
        }
        else if(student.getGpa()>4){
            cout<<"Invalid GPA!"<<endl;
        }
        else{
            return 1;

        }
        return -1;
    }
};
class CourseValidation{
    public:
    int ValidateCourse(Course course){
        if(course.getName().size()==0){
            cout<<"invalid name!!";
        }
        else if(course.getHours()<=2 || course.getHours()>=5){
            cout<<"invalid hours";
        }
        else{
            return 1;
        }
        return -1;
    }   
};
class TeacherValidation{
    public:
    int validateTeacher(Teacher teacher){
    if (teacher.getName().size()==0||teacher.getName().size()<3
        || teacher.getName().size()>10)
        {
            cout<<"Invalid Name!"<<endl;
        }
        else if(teacher.getAge()<30||teacher.getAge()>70)
        {
            cout<<"Invalid Age!"<<endl;
        }
        else if(teacher.getPhoneNumber().size()==0||teacher.getPhoneNumber()[0]!='0'||(
            (teacher.getPhoneNumber()[1]+teacher.getPhoneNumber()[2]!='1'+'2')&&
            (teacher.getPhoneNumber()[1]+teacher.getPhoneNumber()[2]!='1'+'1')&&
            (teacher.getPhoneNumber()[1]+teacher.getPhoneNumber()[2]!='1'+'0')&&
            (teacher.getPhoneNumber()[1]+teacher.getPhoneNumber()[2]!='1'+'5'))
            ||teacher.getPhoneNumber().size()!=11){
            cout<<"Invalid Phone Number!"<<endl;
        }
        else if(teacher.getSalary()<4000){
            cout<<"Invalid Salary!"<<endl;
        }
        else{
            return 1;
        }
        return -1;
    }
};