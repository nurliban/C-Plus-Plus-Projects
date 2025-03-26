#include "User.h"

// Default constructor
User::User()
    : username("Unknown"), password("Unknown"), role("Unknown") {
}

// Parameterized constructor
User::User(const string& username, const string& password, const string& role)
    : username(username), password(password), role(role) {
}

// Setters
void User::setUsername(const string& username)
{
    this->username = username;
}

void User::setPassword(const string& password)
{
    this->password = password;
}

void User::setRole(const string& role)
{
    this->role = role;
}

// Getters
string User::getUsername() const
{
    return username;
}

string User::getPassword() const
{
    return password;
}

string User::getRole() const
{
    return role;
}

// Destructor
User::~User()
{
    // No dynamic memory to clean up
}