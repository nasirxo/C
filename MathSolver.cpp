/* CODED BY NASIR ALI 
COPYRIGHT 2020 UNDER MIT LICENSE
*/
#include <iostream>
using namespace std;
char * expressionToParse; 
char peek() { return *expressionToParse; } 
char get() { return *expressionToParse++; } 
double expression(); 
double number() { 
    double result = get() - '0'; 
    while (peek() >= '0' && peek() <= '9') 
        { 
        result = 10*result + get() - '0'; 
        } return result; 
    } 
double factor() { 
    if (peek() >= '0' && peek() <= '9') 
    return number(); 
    else if (peek() == '(') { 
        get(); 
         double result = expression(); 
        get(); 
        return result; } 
    else if (peek() == '-') { get(); 
        return -factor(); } return 0; 
    } 
double term() { 
    double result = factor(); 
    while (peek() == '*' || peek() == '/') 
    if (get() == '*') 
    result *= factor(); 
    else result /= factor(); 
    return result; } 
double expression() { 
    double result = term(); 
    while (peek() == '+' || peek() == '-') 
    if (get() == '+') 
    result += term(); 
    else result -= term(); 
    return result; 
    } 
int main() { 
    cout << "==== [ Maths - Solver ] ====\n";
    cout << "        By : Nasir Ali    \n\n";
    start:
    cout << " QUESTION : ";
    char * Q;cin >> Q;
    expressionToParse = Q;
    double result = expression(); 
    cout << " ANSWER : " << result << endl;
    goto start;
     }
