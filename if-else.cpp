1. Write a program to check if a number entered by the user is positiee negatiee or zero using
if-else.
Soluton:-
#include <iostream>
using namespace std;
int main() {
 int num;
 cout << "Enter a number: ";
 cin >> num;
 if (num > 0) {
 cout << "The number is positive" << endl;
 }
 else if (num < 0) {
 cout << "The number is negative" << endl;
 }
 else {
 cout << "The number is zero." << endl;
 }
 return 0;
}
2. Write a program that takes a number as input and checks whether it is eien or odd using if
else.
Soluton:-
#include <iostream>
using namespace std;
int main() {
 int num=10;
 cout << "Enter the number: "
 if (num % 2 == 0) {
 cout << "The number is even." << endl;
 }
 else {
 cout << "The number is odd." << endl;
 }
 return 0;
}
3. Write a program to fnd the largest of three numbers using if-else.
Soluton:-
#include <iostream>
using namespace std;
int main() {
 int num1=8, num2=9, num3=10;
 cout << "Enter the numbers: ";
 if (num1 >= num2 && num1 >= num3) {
 cout << "The largest number is " << num1 << endl;
 }
 else if (num2 >= num1 && num2 >= num3) {
 cout << "The largest number is " << num2 << endl;
 }
 else {
 cout << "The largest number is " << num3 << endl;
 }
 return 0;
}
4. Write a program that asks the user to enter marks and determines the grade using multple if
else:
• Marks ≥ 90: Grade A
• Marks ≥ 80: Grade B
• Marks ≥ 70: Grade C
• Marks ≥ 60: Grade D
• Otherwise: Fail
Soluton:-
#include <iostream>
using namespace std;
int main() {
 int marks;
 cout << "Enter the marks: ";
 cin >> marks;
 if (marks >= 90) {
 cout << "Grade A" << endl;
 }
 else if (marks >= 80) {
 cout << "Grade B" << endl;
 }
 else if (marks >= 70) {
 cout << "Grade C" << endl;
 }
 else if (marks >= 60) {
 cout << "Grade D" << endl;
 }
 else {
 cout << "Fail" << endl;
 }
 return 0;
}
5. Write a program that checks whether a year entered by the user is a leap year or not using if
else.
Soluton:-
#include <iostream>
using namespace std;
int main() {
 int year;
 cout << "Enter a year: ";
 cin >> year;
 if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
 cout << year << " is a leap year." << endl;
 }
 else {
 cout << year << " is not a leap year." << endl;
 }
 return 0;
}
6. Write a program to check whether a character entered by the user is a iowel or consonant
using if-else.
Soluton:-
#include <iostream>
using namespace std;
int main() {
 char ch;
 cout << "Enter a character: ";
 cin >> ch;
 ch = tolower(ch);
 if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
 cout << ch << " is a vowel." << endl;
 }
 else {
 cout << ch << " is a consonant." << endl;
 }
 return 0;
}
7. Write a program to calculate the electricity bill based on the following conditons:
• Up to 100 units: ₹5 per unit
• 101 to 300 units: ₹7 per unit
• Aboie 300 units: ₹10 per unit
• Display the total bill.
Soluton:-
#include <iostream>
using namespace std;
int main() {
 int units;
 float bill;
 cout << "Enter the number of units consumed: ";
 cin >> units;
 if (units <= 100) {
 bill = units * 5;
 }
 else if (units <= 300) {
 bill = (units * 5) + ((units - 100) * 7);
 }
 else {
 bill = (units * 5) + (units * 7) + ((units - 300) * 10);
 }
 cout << "Total electricity bill: " << bill << endl; ₹
 return 0;
}
8. Write a program that takes an integer from the user and determines whether it is a multple
of both 3 and 5 using if.
Soluton:-
#include <iostream>
using namespace std;
int main() {
 int num;
 cout << "Enter an integer: ";
 cin >> num;
 if (num % 3 == 0 && num % 5 == 0) {
 cout << num << " is a multiple of both 3 and 5." << endl;
 }
 else {
 cout << num << " is not a multiple of both 3 and 5." << endl;
 }
 return 0;
}
9. Write a program to check whether an entered character is uppercasee lowercasee digite or
special symbol using multple if-else.
Soluton:-
#include <iostream>
using namespace std;
int main() {
 char ch;
 cout << "Enter a character: ";
 cin >> ch;
 if (ch >= 'A' && ch <= 'Z') {
 cout << "The character is an uppercase letter." << endl;
 }
 else if (ch >= 'a' && ch <= 'z') {
 cout << "The character is a lowercase letter." << endl;
 }
 else if (ch >= '0' && ch <= '9') {
 cout << "The character is a digit." << endl;
 }
 else {
 cout << "The character is a special symbol." << endl;
 }
 return 0;
}
10. Write a program to determine the eligibility of a person to iote based on their age (age ≥ 18 is
eligible).
Soluton:-
#include <iostream>
using namespace std;
int main() {
 int age=18;
 cout << "Enter the age: ";
 if (age >= 18) {
 cout << "You are eligible to vote." << endl;
 }
 else {
 cout << "You are not eligible to vote." << endl;
 }
 return 0;
}