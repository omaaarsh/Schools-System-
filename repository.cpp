#include"models.cpp"
class Data{ //Static data
    public:
    static Student students[25];
    static int studentIndex;
    static int studentId;
    static Teacher teachers[25];
    static int teacherIndex;
    static int teacherId;
    static Course courses[25];
    static int coursesIndex;
    static int coursesId;
};
Student Data:: students[25];
int Data:: studentIndex=0;
int Data:: studentId=2000;
Teacher Data:: teachers[25];
int Data:: teacherIndex=0;
int Data:: teacherId=6000;
Course Data:: courses[25];
int Data:: coursesIndex=0;
int Data:: coursesId=4000;
//-------------------------Student--------------------------------
//student interface
class StudentRepoInterface{
    virtual int addStudent(Student student)=0;
};
//student interface implementation
class StudentRepoImpl:public StudentRepoInterface{
    protected:
    Data data;
    public:
    int getStudentIndex(){
        return data.studentIndex;
    }
    int addStudent(Student student){
        student.setId(++(data.studentId));
        data.students[data.studentIndex]=student;
        data.studentIndex++;
        return data.studentId;
    }
    Student& showStudent(int Id){
        return data.students[Id-2001];
    }
};
//-------------------------Teacher--------------------------------
//Teacher interface
class TeacherRepoInterface{
    virtual int addTeacher(Teacher teacher)=0;
};
//Teacher interface implementation
class TeacherRepoImpl:public TeacherRepoInterface{
    protected:
    Data data;    
    public:
    int getTeacherIndex(){
        return data.teacherIndex;
    }
    int addTeacher(Teacher teacher){
        teacher.setId(++(data.teacherId));
        data.teachers[data.teacherIndex]=teacher;
        data.teacherIndex++;
        return data.teacherId;
    }
    Teacher& showTeacher(int Id){
        return data.teachers[Id-6001];
    }
};
//-------------------------Course--------------------------------
//Course interface
class CourseRepoInterface{
    virtual int addCourse(Course course)=0;
};
//Course interface implementation
class CourseRepoImpl:public CourseRepoInterface{
    protected:
    Data data;    
    public:
    int getCourseIndex(){
        return data.coursesIndex;
    }
    int addCourse(Course course){
        course.setId(++(data.coursesId));
        data.courses[data.coursesIndex]=course;
        data.coursesIndex++;
        return data.coursesId;
    }
    Course& showCourse(int Id){
        return data.courses[Id-4001];
    }
};

