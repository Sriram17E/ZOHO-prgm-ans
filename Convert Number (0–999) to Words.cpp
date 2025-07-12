#include<iostream>
using namespace std;

string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
                  "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

string convertToWords(int num) {
    if (num == 0)
        return "Zero";

    string result = "";

    if (num >= 100) {
        result += ones[num / 100] + " Hundred";
        num = num % 100;
        if (num)
            result += " and ";
    }

    if (num >= 20) {
        result += tens[num / 10];
        if (num % 10)
            result += " " + ones[num % 10];
    } else if (num >= 10) {
        result += teens[num - 10];
    } else {
        result += ones[num];
    }

    return result;
}

int main() {
    int number;
    cout << "Enter number (0 - 999): ";
    cin >> number;

    if (number >= 0 && number <= 999)
        cout << convertToWords(number) << endl;
    else
        cout << "Out of range!" << endl;

    return 0;
}



input:
Enter number (0 - 999): 0
output:
Zero

