//ZhangRichard StudentList

//Hi Daniel!!! :)
//includes command types
#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

//creates a general struct for the student
struct student {
  int ID;
  float GPA;
  char* name;
};

//methods that allow the user to print, add, and delete a student (or students)
void printStudent (vector <student*>* list);
void newStudent (vector <student*>* list);
void deleteStudent (vector <student*>* list);

// if a command is pressed....
int main() {
  vector <student*> list;
  char commandInput[10];
  bool playing = true;

  while (playing == true) {
    cin.get(commandInput,10);
    cin.ignore();

    if(!strcmp(commandInput, "PRINT")) {
      printStudent(& list);
    }
    else if (!strcmp(commandInput, "ADD")) {
      newStudent(& list);
    }
    else if (!strcmp(commandInput, "DELETE")) {
      deleteStudent(& list);
    }
    else if (!strcmp(commandInput, "EXIT")) {
      playing = false;
    }
    else {
      cout << "Please type in PRINT, ADD, DELETE, or EXIT" << endl;
    }
  }
}

//prints students in the list
void printStudent(vector <student*>* list) {
  for (vector<student*>:: iterator it = list->begin(); it != list->end(); it++){
      cout<< "Name: " << (*it)-> name << ", ID: " << (*it)->ID << ", GPA: " << setprecision(2) << fixed << (*it)-> GPA << endl;
    }
}

//adds a new student to the list
void newStudent(vector <student*>* list){
  student* s = new student;
  int studentID;
  float studentGPA;
  char newStudentName[50];
  cout << "Let's enter your information. What is your name?" << endl;
  cin.get (newStudentName, 50);
  cin.ignore();
  cout << "What is your ID" << endl;
  cin >> studentID;
  cin.ignore();
  cout << "What is your GPA?" << endl;
  cin >> studentGPA;
  cin.ignore();
  s->ID = studentID;
  s->GPA = studentGPA;
  s->name = strdup(newStudentName);
  list -> push_back(s);
}

//deletes a student from a list based on his/her student id number
void deleteStudent(vector <student*>* list){
  int deleteID;
  bool ifDeleted = false;
  cout << "ID?" << endl;
  cin >> deleteID;
  cin.ignore();
  for(vector<student*>::iterator it = list->begin(); it != list-> end(); it++){ //look through the vector to find the person with that id
    if((*it)->ID == deleteID){
      cout << "Removed " << (*it)->name << endl;
      delete (*it)->name;
      delete *it;
      list->erase(it);
      it = list->end();
      it--;
      ifDeleted = true;
    }
  }
  if (ifDeleted == false){
    cout << "There is nothing with the student ID: " << deleteID << endl;
  }
}
