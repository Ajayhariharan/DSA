#include <iostream>
using namespace std;
class Stack {
public:
    char data;
	Stack* next;
	Stack* top=NULL;
    void push(char ch) {
        Stack* newNode = new Stack();
        newNode->data = ch;
        newNode->next = top;
        top = newNode;}
    char pop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return '\0';}
Stack* temp = top;
 char p = top->data;
 top = top->next;
 delete temp;
 return p;}
 bool isEmpty() {
 return top == NULL;}
};
string rev(string str) {
 Stack s;
 for (int i = 0; i < str.length(); i++) {
 s.push(str[i]);
 }
 string r;
 while (!s.isEmpty()) {
 r += s.pop();}
 return r;}
int main() {
 string str="alibaba";
 cout << "before: " << str << endl;
 cout << "after: " << rev(str) << endl;
 return 0;
}

