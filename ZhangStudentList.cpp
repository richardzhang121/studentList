#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

struct student {
  int ID;
  float GPA;
  char* name;
};

void printStudent (vector <student*>* list);
void newStudent (vector <student*>* list);
void deleteStudent (vector <student*>* list);

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

void printStudent(vector <student*>* list) {
  for (vector<Student*>:: iterator it = list->begin(); it != list->end(); it++{
      cout<< "Name: " << (*it)-> name << ", ID: " << (*it)->id << ", GPA: " << setprecision(2) << fixed << (*it)-> gpa << endl;
}

void newStudent(vector <student*>* list){
  Student* s = new student;
  int studentID;
  float studentGPA;
  char studentName[50];
  cout << "Let's enter your information. What is your name?" << endl;
  cin.get (newName, 50);
  cin.ignore();
  cout << "What is your ID" << endl;
  cin >> studentID;
  cout << "What is your GPA?" << endl;
  cin >> newGPA;
  cin.ignore();
  s->ID = studentID;
  s->GPA = studentGPA;
  s->name 
}

void deleteStudent(vector <student*>* list){
  int deleteID;
  bool ifDeleted = false;
  cout << "ID?" << endl;
  cin >> deleteID;
  for(vector<Student*>::iterator it = list->begin(); it != list-> end(); it++){ //look through the fector to find the person with that id
    if((*it)->id == deleteId){
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
    cout << "There is nothing with the student ID: " << deleteId << endl;
  }
}
