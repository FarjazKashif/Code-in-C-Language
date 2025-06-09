/*
In a university system, different types of individuals exist, such as students and teachers.
All individuals share common characteristics like name and ID, which can be captured
using a base class called Person. Students can enroll in multiple courses, and they maintain
a personal transcript that records the grades they receive in each enrolled course. Teachers,
on the other hand, are assigned to specific departments and are responsible for teaching
various courses. Each department consists of multiple teachers and offers a variety of
courses. Every course is uniquely identified by its title and code and is associated with the
teacher responsible for teaching it. This system should support the functionality to enroll
students in courses, assign courses to teachers, and generate a transcript for each student
showing their course results. A hospital includes doctors, nurses, and patients. Patients
book appointments with doctors. Each patient has a medical history that is regularly
updated after checkups. Nurses are assigned to patients and doctors. Doctors belong to
various departments like cardiology, pediatrics, etc. The system must support patient
registration, appointment scheduling, and checkup records.
*/

#include <iostream>
#include <vector>
using namespace std;

class Person
{
public:
    int id;
    string name;
    Person(int i, string n) : id(i), name(n) {}
};

class Course
{
public:
    string code, title;
    Person *teacher;
    Course(string c, string t, Person *teach) : code(c), title(t), teacher(teach) {}
};

class Transcript
{
public:
    Course *course;
    string grade;
    Transcript(Course *c, string g) : course(c), grade(g) {}
};

class Student : public Person
{
public:
    vector<Course *> enrolled;
    vector<Transcript> transcript;
    Student(int i, string n) : Person(i, n) {}
    void enroll(Course *c) { enrolled.push_back(c); }
    void addGrade(Course *c, string g) { transcript.emplace_back(c, g); }
};

class Teacher : public Person
{
public:
    string dept;
    vector<Course *> teaches;
    Teacher(int i, string n, string d) : Person(i, n), dept(d) {}
};

class Department
{
public:
    string name;
    vector<Teacher *> teachers;
    vector<Course *> courses;
};

class Appointment;

class Patient
{
public:
    string name, history;
    vector<Appointment *> appointments;
};

class Doctor
{
public:
    string name, department;
};

class Nurse
{
public:
    string name;
    vector<Patient *> patients;
    vector<Doctor *> doctors;
};

class Appointment
{
public:
    Patient *patient;
    Doctor *doctor;
};
