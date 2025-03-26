#include "Student.h"

// Default constructor
Student::Student()
    : User("Unknown", "Unknown", "Student"), studentID(0), fullName("Unknown"), dob("Unknown"), address("Unknown"), contactInfo("Unknown") {
}

// Parameterized constructor
Student::Student(int studentID, const string& fullName, const string& dob, const string& address, const string& contactInfo,
    const string& username, const string& password, const string& role)
    : User(username, password, role), studentID(studentID), fullName(fullName), dob(dob), address(address), contactInfo(contactInfo) {
}

// Enrollment Operations
void Student::enrollInCourse(const string& courseID) {
    enrolledCourses.push_back(courseID);
}

void Student::dropCourse(const string& courseID) {
    auto it = find(enrolledCourses.begin(), enrolledCourses.end(), courseID);
    if (it != enrolledCourses.end()) {
        enrolledCourses.erase(it);
    }
}

// Grade Operations
void Student::addGrade(const string& courseID, const string& grade) {
    grades[courseID] = grade;
}

void Student::viewGrades() const {
    cout << "Grades for Student: " << fullName << endl;
    for (const auto& grade : grades) {
        cout << "Course: " << grade.first << " - Grade: " << grade.second << endl;
    }
}

double Student::calculateGPA() const {
    double totalPoints = 0.0;
    int totalCourses = grades.size();

    for (const auto& grade : grades) {
        string g = grade.second;
        double points = 0.0;

        if (g == "A") points = 4.0;
        else if (g == "B") points = 3.0;
        else if (g == "C") points = 2.0;
        else if (g == "D") points = 1.0;
        else points = 0.0;

        totalPoints += points;
    }

    return (totalCourses > 0) ? (totalPoints / totalCourses) : 0.0;
}

// Student Information Operations
void Student::displayInfo() const {
    cout << "Student ID: " << studentID << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "Date of Birth: " << dob << endl;
    cout << "Address: " << address << endl;
    cout << "Contact Info: " << contactInfo << endl;
    cout << "Username: " << getUsername() << endl;
    cout << "Role: " << getRole() << endl;
    cout << "Enrolled Courses: ";
    for (const auto& course : enrolledCourses) {
        cout << course << " ";
    }
    cout << endl;
}

void Student::updateContactInfo(const string& newContact) {
    contactInfo = newContact;
}

// Getters
int Student::getStudentID() const {
    return studentID;
}

string Student::getFullName() const {
    return fullName;
}

string Student::getDOB() const {
    return dob;
}

string Student::getAddress() const {
    return address;
}

string Student::getContactInfo() const {
    return contactInfo;
}

// Setters
void Student::setFullName(const string& fullName) {
    this->fullName = fullName;
}

void Student::setDOB(const string& dob) {
    this->dob = dob;
}

void Student::setAddress(const string& address) {
    this->address = address;
}

void Student::setContactInfo(const string& contactInfo) {
    this->contactInfo = contactInfo;
}

// Destructor
Student::~Student() {
    // No dynamic memory to clean up
}