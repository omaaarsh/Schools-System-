This project is a System Management Application built in C++ to manage students, teachers, and courses. The system is designed to interact with the user through a console interface, providing options to manage and manipulate the data of students, teachers, and courses.

Key Features:

	1.	Main System Menu:
	•	The system offers a main menu where users can choose between managing students, teachers, courses, or exiting the system.
	2.	Student Management System:
	•	Allows the user to:
	•	Add a new student by inputting details such as name, age, phone number, and GPA.
	•	Show student information based on their unique ID.
	•	Other options for editing and removing students can be added in the future.
	3.	Teacher Management System:
	•	Users can:
	•	Add a new teacher by inputting details such as name, age, phone number, and salary.
	•	Display teacher information by their unique ID.
	•	Other options such as editing and removing teachers can also be extended.
	4.	Course Management System:
	•	The system allows users to:
	•	Add a course by inputting the course name and hours.
	•	View a course by providing the Course Reference Number (CRN).
	5.	Data Limits:
	•	The system supports up to 25 records for each entity (students, teachers, and courses), with simple validation to ensure no records are added beyond this limit.
	6.	Controllers:
	•	Separate controllers (StudentController, TeacherController, CourseController) are assumed to be included for managing the backend logic of adding, removing, and displaying records.

Structure:

	•	User Interface: The console-based interface accepts user inputs for performing various operations on students, teachers, and courses.
	•	Entity Classes: The Student, Teacher, and Course classes are used to hold data related to each entity.
	•	Controllers: Controllers are responsible for handling the logic related to adding, displaying, and managing the records.

Improvements:

	•	Error handling can be enhanced for invalid inputs.
	•	Functionality for editing and removing students, teachers, and courses can be implemented.
	•	The program could be extended with file handling or database integration for persistent data storage.

This project is ideal for learning object-oriented programming, user interaction, and basic data management concepts in C++.
