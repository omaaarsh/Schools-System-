#include"validation.cpp"
//-------------------------Student-Service-------------------------------
//student interface
class StudentServiceInterface{
    virtual int addStudent(Student student)=0;
};
//student interface implementation
class StudentServiceImpl:public StudentServiceInterface{
    protected:
    StudentRepoImpl studentRepo ;
    StudentValidation studentValidation;
    public:
    int addStudent(Student student){
        if(studentValidation.validateStudent(student)==1)
        {
            return studentRepo.addStudent(student);
        }
        return -1;
    }
    int getStudentIndex(){
        return studentRepo.getStudentIndex();
    }
    Student& showStudent(int Id){
        return studentRepo.showStudent(Id);
    }
};
//-------------------------Teacher-Service-------------------------------
//Teacher interface
class TeacherServiceInterface{
    virtual int addTeacher(Teacher teacher)=0;
};
//Teacher interface implementation
class TeacherServiceImpl:public TeacherServiceInterface{
    protected:
    TeacherRepoImpl teacherRepo;
    TeacherValidation teachervalidte;
    public:
    int getTeacherIndex(){
        return teacherRepo.getTeacherIndex();
    }
    int addTeacher(Teacher teacher){
        if ( teachervalidte.validateTeacher(teacher)==1 ){
            return teacherRepo.addTeacher(teacher);
        }
        return -1;
    }
    Teacher& showTeacher(int Id){
        return teacherRepo.showTeacher(Id);
    }
};
//-------------------------Course-Service-------------------------------
//Course interface
class CourseServiceInterface{
    virtual int addCourse(Course course)=0;
};
//Course interface implementation
class CourseServiceImpl:public CourseServiceInterface{
    protected:
    CourseRepoImpl coursesRepo;
    CourseValidation coursevalid;
    public:
    int getCourseIndex(){
        return coursesRepo.getCourseIndex();
    }
    int addCourse(Course course){
        if(coursevalid.ValidateCourse(course)==1){
            return coursesRepo.addCourse(course);
        }
        return -1;}
    Course& showCourse(int Id){
        return coursesRepo.showCourse(Id);
    }

};
