#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "User.h"

using namespace std;

class Student : public User
{
private:
    int studentID;
    string fullName;
    string dob;
    string address;
    string contactInfo;
    vector<string> enrolledCourses;       // Stores course IDs
    map<string, string> grades;           // Maps course ID to grade

public:
    // Default constructor
    Student();

    // Parameterized constructor
    Student(int studentID, const string& fullName, const string& dob, const string& address, const string& contactInfo,
        const string& username, const string& password, const string& role);

    // Enrollment Operations
    void enrollInCourse(const string& courseID);    // Enroll in a course
    void dropCourse(const string& courseID);        // Drop a course

    // Grade Operations
    void addGrade(const string& courseID, const string& grade);  // Add or update a grade
    void viewGrades() const;                                    // Display all grades
    double calculateGPA() const;                                // Compute and return the GPA

    // Student Information Operations
    void displayInfo() const;                     // Print detailed student information
    void updateContactInfo(const string& newContact); // Update contact details

    // Getters
    int getStudentID() const;
    string getFullName() const;
    string getDOB() const;
    string getAddress() const;
    string getContactInfo() const;

    // Setters
    void setFullName(const string& fullName);
    void setDOB(const string& dob);
    void setAddress(const string& address);
    void setContactInfo(const string& contactInfo);

    // Destructor
    ~Student();
};