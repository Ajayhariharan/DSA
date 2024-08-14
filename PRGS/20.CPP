#include <iostream>
using namespace std;
class Stack {
public:
 char data;
 Stack* next;
 Stack* top = NULL;
 void push(char data) {
 Stack* temp = new Stack();
 temp->data = data;
 temp->next = top;
 top = temp;
 }
 char pop() {
 Stack* temp = top;
 char poppedData = top->data;
 top = top->next;
 delete temp;
 return poppedData;}
 bool isEmpty() {
 return top == NULL;}
};
bool bal(string str) {
 Stack s;
 for (int i = 0; i < str.length(); ++i) {
 char ch = str[i];
 if (ch == '{' || ch == '(' || ch == '[')
 {s.push(ch);}
 else if (ch == '}' || ch == ')' || ch == ']')
 {char top = s.pop();
 if ((ch == '}' && top != '{') ||
 (ch == ')' && top != '(') ||
 (ch == ']' && top != '['))
 {return false;}}}
 return s.isEmpty();
}
int main() {
 string str="(a+b)-(b+d)";
 cout <<str<<(bal(str) ? " is balanced" : " is not balanced") << endl;
 return 0;
}

