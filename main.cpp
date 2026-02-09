#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
 
  string firstName;
  string lastName;
  double baseSalary;
  double commissionPercent;
  double employeeTotalSales;
  double employeeExpenses;
  double commission;
  double total;

  
cin >> firstName >> lastName;
cin >> baseSalary >> commissionPercent;
cin >> employeeTotalSales;
cin >> employeeExpenses;

commission =((commissionPercent/100)*(employeeTotalSales));
total = baseSalary + commission + employeeExpenses;



cout << "Payroll data for " << fixed << setprecision(2) << " " << lastName << endl;
cout << "   " << endl;
cout << "Base Salary: " <<  setw(11) << baseSalary << endl;
cout << "Commission: " <<  setw(12) << commission << " ("<< commissionPercent << "%" << " of " << employeeTotalSales << ")" << endl;
cout << "Expenses: " <<  setw(14) << employeeExpenses << endl;
cout <<  setw(24) << "--------" << endl;
cout << "Total: " << setw(17) << fixed << setprecision(2) << total << endl;


return 0;


}
