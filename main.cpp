#include <iostream>
#include <cstring>
#include <iomanip>
#include <stdio.h>
#include "node.h"
#include "student.h"

using namespace std;

int main() {
  char input[20];

  //First student
  Student* student = new Student;
  cout << "Student's first name: " << endl;
  cin.get(student -> getFirstName(), 20);
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Student's last name: " << endl;
  cin.get(student -> getLastName(), 20);
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Student's ID: " << endl;
  cin >> *student -> getID();
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Student's GPA: " << endl;
  cin >> *student -> getGPA();
  cin.clear();
  cin.ignore(10000, '\n');

  cout << "----------------------------" << endl;

  //Second student
  Student* student2 = new Student;
  cout << "Student's first name: " << endl;
  cin.get(student2 -> getFirstName(), 20);
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Student's last name: " << endl;
  cin.get(student2 -> getLastName(), 20);
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Student's ID: " << endl;
  cin >> *student2 -> getID();
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Student's GPA: " << endl;
  cin >> *student2 -> getGPA();
  cin.clear();
  cin.ignore(10000, '\n');

  cout << "----------------------------" << endl;

  
  
  return 0;
}
