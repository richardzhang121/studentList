#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

struct student{
  char* name;
  int ID;
  float GPA;
};

int main(){
  void addStudent();
  void printStudent();
  void deleteStudent();
  
  void addStudent() {
    float GPA = 0;
    int ID = 0;
    char first[100];
    char last[100];

    cout << "Please type in your first name." << endl;
    cin >> first << endl;
    cout << "Please type in your last name." << endl;
    cin >> last >> endl;
    cout << "Please enter your student ID" << endl;
    cin >> ID >> endl;
  }
}
