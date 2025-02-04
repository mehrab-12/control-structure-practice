1. Write a program to print numbers from 1 to 10 using a for loop.
Soluton:-
#include <iostream>
using namespace std;
int main() {
 for (int i = 1; i <= 10; i++) {
 cout << i << endl;
 }
 return 0;
}
2. Write a program to fnd the sum of the frst n natural numbers using a for loop.
Soluton:-
#include <iostream>
using namespace std;
int main() {
 int n;
 int sum = 0;
 cout << "Enter a positive integer: ";
 cin >> n;
 for (int i = 1; i <= n; i++) {
 sum += i; // Add the current number to the sum
 }
 cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
 return 0;
}
3. Write a program to print the multplicaton table of a number entered by the user using a for
loop.
Soluton:-
#include <iostream>
using namespace std;
int main() {
 int num;
 cout << "Enter a number: ";
 cin >> num;
 cout << "Multiplication table of " << num << " is:" << endl;
 for (int i = 1; i <= 10; i++) {
 cout << num << " x " << i << " = " << num * i << endl;
 }
 return 0;
}
4. Write a program to print the factorial of a number using a while loop.
Soluton:-
#include <iostream>
using namespace std;
int main() {
 int num, fact = 1;
 cout << "Enter a number: ";
 cin >> num;
 int i = 1;
 while (i <= num) {
 fact =fact* i;
 i++;
 }
 cout << "Factorial of " << num << " is " << fact;
 return 0;
}
5. Write a program to reierse a giien number using a while loop
#include <iostream>
using namespace std;
int main() {
 int num, reversed = 0;
 cout << "Enter a number: ";
 cin >> num;
 while (num > 0) {
 reversed =( reversed * 10) + num % 10;
 num = num/ 10;
 }
 cout << "Reversed number: " << reversed;
 return 0;
}
6. Write a program to check whether a number is prime or not using a for loop.
#include <iostream>
using namespace std;
int main() {
 int num, i;
 bool isPrime = true;
 cout << "Enter a number: ";
 cin >> num;
 if (num <= 1)
 isPrime = false;
 else {
 for (i = 2; i * i <= num; i++) {
 if (num % i == 0) {
 isPrime = false;
 break;
 }
 }
 }
 if (isPrime)
 cout << num << " is a prime number.";
 else
 cout << num << " is not a prime number.";
 return 0;
}
7. Write a program to calculate the sum of digits of a number using a while loop.
#include <iostream>
 using namespace std;
int main() {
 int num, sum = 0;
 cout << "Enter a number: ";
 cin >> num;
 while (num > 0) {
 sum += num % 10;
 num /= 10;
 }
 cout << "Sum of digits: " << sum;
 return 0;
}
8. Write a program to print the Fibonacci series up to n terms using a for loop.
#include <iostream>
using namespace std;
int main() {
 int n, t1 = 0, t2 = 1, nextTerm;
 cout << "Enter the number of terms: ";
 cin >> n;
 for (int i = 1; i <= n; i++) {
 cout << t1 << " ";
 nextTerm = t1 + t2;
 t1 = t2;
 t2 = nextTerm;
 }
 return 0;
}
9. Write a program to display the sum of eien numbers between 1 and 50 using a forloop.
#include <iostream>
using namespace std;
int main() {
 int sum = 0;
 for (int i = 2; i <= 50; i += 2)
 sum += i;
 cout << "Sum of even numbers between 1 and 50: " << sum;
 return 0;
}
 20. Write a program to generate the following patern using a nested for loop:
*
* *
* * *
* * * *
* * * * *
#include <iostream>
using namespace std;
int main() {
 int rows = 5;
 for (int i = 1; i <= rows; i++) {
 for (int j = 1; j <= i; j++)
 cout << "* ";
 cout << endl;
 }
 return 0;
}