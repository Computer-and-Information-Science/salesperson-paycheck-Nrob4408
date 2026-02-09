// Nate Roberts

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
 
  string firstName;
  string lastName, fileName;
  double baseSalary;
  double commissionPercent;
  double employeeTotalSales;
  double employeeExpenses;
  double commission;
  double total;
  ifstream readData;

  cout << "Enter Employee's File: " << endl;
cin >> fileName;
  
  readData.open(fileName);

  readData >> firstName >> lastName >> baseSalary >> commissionPercent >> employeeTotalSales >> employeeExpenses;

commission =((commissionPercent/100)*(employeeTotalSales));
total = baseSalary + commission + employeeExpenses;



cout << "Payroll data for " << fixed << setprecision(2) << firstName << " " << lastName << endl;
cout << "   " << endl;
cout << "Base Salary: " <<  setw(11) << baseSalary << endl;
cout << "Commission: " <<  setw(12) << commission << " ("<< commissionPercent << "%" << " of " << employeeTotalSales << ")" << endl;
cout << "Expenses: " <<  setw(14) << employeeExpenses << endl;
cout <<  setw(24) << "--------" << endl;
cout << "Total: " << setw(17) << fixed << setprecision(2) << total << endl;


return 0;


}
