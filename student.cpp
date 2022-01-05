#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

Student::Student() {

}

//Destructor
Student::~Student() {
  delete &firstName;
  delete &lastName;
  delete &ID;
  delete &GPA;
}

//Getters
char* Student::getFirstName() {
  return firstName;
}

char* Student::getLastName() {
  return lastName;
}

int* Student::getID() {
  return &ID;
}

float* Student::getGPA() {
  return &GPA;
}
