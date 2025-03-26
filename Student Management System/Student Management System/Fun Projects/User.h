#pragma once
#include <iostream>
#include <string>

using namespace std;

class User
{
protected:
    string username;
    string password;
    string role;
public:
    // Default constructor
    User();

    // Parameterized constructor
    User(const string& username, const string& password, const string& role);

    // Setters
    void setUsername(const string& username);
    void setPassword(const string& password);
    void setRole(const string& role);

    // Getters
    string getUsername() const;
    string getPassword() const;
    string getRole() const;

    // Destructor
    ~User();
};
