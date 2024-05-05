#include"service.cpp"
//-------------------------Student-Controller-------------------------------
class StudentController{
    protected:
    StudentServiceImpl studentService ;
    public:
        public:
    int getStudentIndex(){
        return studentService.getStudentIndex();
    }
    int addStudent(Student student){
        return studentService.addStudent(student);
    }
    Student & showStudent(int Id){
        return studentService.showStudent(Id);
    }
};
//-------------------------Teacher-Controller-------------------------------
class TeacherController{
    protected:
    TeacherServiceImpl teacherService;
    public:
    int getTeacherIndex(){
        return teacherService.getTeacherIndex();
    }
    int addTeacher(Teacher teacher){
        return teacherService.addTeacher(teacher);
    }
    Teacher& showTeacher(int Id){
        return teacherService.showTeacher(Id);
    }
};
//-------------------------Course-Controller-------------------------------
class CourseController{
    protected:
    CourseServiceImpl courseService;
    public:
    int getCourseIndex(){
        return courseService.getCourseIndex();
    }
    int addCourse(Course course){
        return courseService.addCourse(course);
    }
    Course& showCourse(int Id){
        return courseService.showCourse(Id);
    }
};
