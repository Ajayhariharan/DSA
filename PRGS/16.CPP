#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
 string Name;
 int id;
 float salary;
 Employee(string N, int i, float s) {
 Name = N;
 id = i;
 salary = s;
 }
 Employee() {
 Name = "";
 id = 0;
 salary = 0.0;
 }
};
class Stack {
private:
 int Size;
 int top;
 Employee* arr;
public:
 Stack(int size) {
 Size = size;
 top = -1;
 arr = new Employee[Size];}
 Stack() {
 delete[] arr;}
 void Push(const Employee& emp) {
 if (top >= Size - 1) {
 cout << "overflow" << endl;
 return;
 }arr[++top] = emp;}
 Employee Pop() {
 if (top < 0) {
 cout << "no elements" << endl;
 throw out_of_range("Stack is empty");}
 return arr[top--];}
 void Print() {
 if (top<0) {
 cout<<"stack is empty." << endl;
 return;}
 for (int i=0;i<=top;i++) {
 cout<<"name:"<<arr[i].Name<< ",emp id: "<<arr[i].id<<",salary: "<<arr[i].salary<< endl;}}
};
int main()
{
 Stack a(8);
 a.Push(Employee("rocky",1,20000));
 a.Push(Employee("shane",2,30000));
 a.Push(Employee("mary",3,1000));
 a.Print();
 cout<<"\nafter deleting\n";
 a.Pop();
 a.Print();
 return 0;
}

