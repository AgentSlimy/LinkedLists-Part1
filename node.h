#ifndef NODE_H
#define NODE_H

#include "student.h"

using namespace std;

class Node {
public:
  Node(Student*);
  ~Node(); //Destructor
  //Setters
  void setStudent(Student*);
  void setNext(Node*);
  //Getters
  Student* getStudent();
  Node* getNext();
private:
  //Variables
  Student* student;
  Node* next;
};
#endif
