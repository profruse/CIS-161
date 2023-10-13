#include <iomanip>
#include <iostream>
using namespace std;
 
int main() {
    // declaring new variables and one constant
    string name;
    const double YEARLY_INCREASE = 1.08;
    double savingsRate;
    double salary;
    int i;
    
    while (true) {
        double accountVal = 0;
        cout << "\nEnter name (q to quit): ";
        cin >> name;
        // checking for sentinel value
        if (name == "q") {
            cout << "bye" << endl;
            break;
        }
        cout << "Enter savings rate: ";
        cin >> savingsRate;
        // checking if savings rate less than 0, and prompting for new input
        while (savingsRate < 0) {
            cout << "Savings rate cannot be a negative number, please try again: " << endl;
            // capturing new salaryRate input
            cin >> savingsRate;
        }
        cout << "Enter salary: ";
        cin >> salary;
        // checking if salary less than 0, and prompting for new input
        while (salary < 0) {
            cout << "Salary cannot be a negative number, please try again: " << endl;
            // capturing new salary input
            cin >> salary;
        }
        cout << "The account values for " << name << " are: " << endl;
        for (i = 0; i < 10; ++i) { // looping through 10 years of savings accrual
            // calculating yearly savings account totals
            accountVal = (accountVal + savingsRate * salary) * YEARLY_INCREASE;
            // formatting savings account totals 
            cout << fixed << setprecision(2) << accountVal << endl;
        } 
    }
    
    return 0;
}