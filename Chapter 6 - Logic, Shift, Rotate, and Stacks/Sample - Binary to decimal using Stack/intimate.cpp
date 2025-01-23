#include <stdio.h>
#include <string.h>
#include <string>
#include <stack>
using namespace std;

int main() {





}

int binary_do_decimal(const string& input)
{
    int output = 0, index = 0;
    stack<char> digits; // #include <stack>

    // add all digits to the stack
    for (char ch : input)
        digits.push(ch);

    while (!digits.empty())
    {
        char ch = digits.top();
        digits.pop();
        // TODO convert to ch to its numerical value and add to output.
        // remember that they are in reversed order so the first char is 2^index
    }
    return output;
}