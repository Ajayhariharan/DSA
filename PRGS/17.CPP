#include <iostream>
using namespace std;
class Student {
public:
 string name;
 int id;
 Student(){
 name="";
 id=0; }
 Student(string n, int i){
 name=n;
 id=i;}
};
class Stack {
public:
 Student data;
 Stack* next;
 Stack* top=NULL;
 void push(Student data) {
 Stack* newNode = new Stack();
 newNode->data=data;
 newNode->next = top;
 top = newNode;}
 void pop() {
 Stack* temp = top;
 top = top->next;
 delete temp;}
 Student peek() {
 return top->data;}
 void printStack() {
 Stack* current = top;
 while (current != NULL) {
 cout << "name: " << current->data.name << ", id: " << current->data.id << endl;
 current = current->next;}}
};
int main() {
 Stack s;
 s.push(Student("kali", 111));
 s.push(Student("shane", 222));
 s.push(Student("rocky", 333));
 cout << "datas:" << endl;
 s.printStack();
 cout << "\ntop data:" << endl;
 Student topStudent = s.peek();
 cout << "name: " << topStudent.name << ", id: " << topStudent.id <<endl;
 s.pop();
 cout << "\nafter pop top:" << endl;
 s.printStack();
 return 0;
}

