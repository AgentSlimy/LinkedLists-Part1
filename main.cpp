//Author: Nathan Zou
//Date: 1/13/22
//First part of linked lists, with help from Stefan Ene

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

  //Print Student 1
  cout << "Student 1: " << student->getFirstName() << " " << student->getLastName() << ", ";
  cout << "ID: " << *student->getID() << ", GPA: ";
  cout << fixed << setprecision(2) << *student->getGPA() << endl;

  //Print Student 2
  cout << "Student 2: " << student2->getFirstName() << " " << student->getLastName() << ", ";
  cout << "ID: " << *student->getID() << ", GPA: ";
  cout << fixed << setprecision(2) << *student->getGPA() << endl;

  cout << "----------------------------" << endl;

  //Node test 
  Node* firstNode = new Node(student);
  Node* secNode = new Node(student2);
  firstNode->setStudent(student);
  firstNode->setNext(secNode);
  secNode->(student2);
  //Print nodes
  cout << "Nodes: " << endl;
  cout << firstNode->getStudent()->getFirstName() << " " << firstNode->getStudent()->getLastName() << endl;
  cout << firstNode->getNext()->getStudent()->getFirstName() << " " << firstNode->getNext()->getStudent()->getLastName() << endl;
  
  return 0;
}
