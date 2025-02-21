#include <iostream.h>
#include <conio.h>
#include <string.h>

int main() {
    
    clrscr();
	cout << "\n********************************************************************************" << endl;
	gotoxy(22, 4);
	cout << "Gen. T. De Leon National High School";
	gotoxy(14, 5);
	cout << "Corner Mercado St., Gen. T. de Leon, Valenzuela City";
	gotoxy(26, 6);
	cout << "Senior High School Department";
	cout << "\n********************************************************************************" << endl;
	gotoxy(33, 8);
	cout << "Activity No. 3";
	gotoxy(27, 10);
	cout << "Name: Arsher Roey R. Ampon";
	gotoxy(32, 11);
	cout << "Section: STEM Wise";
	gotoxy(33, 12);
	cout << "Grade Level: 11";
	cout << "\n********************************************************************************" << endl;
	cout << "\nPress any key";
	
	getch();
    
    clrscr();
    char employeeNumber[25];
    char employeeName[50];
    char deptCode;
    char month[12];
    double ratePerHour, hoursWorked;
    double basicPay, pagibigDeduction, sssDeduction, vat, totalDeduction, netPay;

    // Input
    gotoxy(32,3);cout<<"ABC Corporation";
    gotoxy(36,4);cout<<"Pay Slip";
    gotoxy(28,5);cout<<"for the month of: "; cin.getline (month, 12);
   gotoxy(2,7);cout<<"Enter the following: ";
    gotoxy(2,9);cout << "Enter 5-digit employee number: ";
    cin.getline (employeeNumber, 25);
    gotoxy(2,10);cout << "Enter employee name: ";
    cin.getline (employeeName, 50);
    gotoxy(2,11);cout << "Department Name(A-Accounting, M-Marketing, H-Human Resource, I-Information Technology): ";
    cin >> deptCode;
    gotoxy(2,13);cout << "Enter rate per hour: ";
    cin >> ratePerHour;
    gotoxy(2,14);cout << "Enter number of hours worked: ";
    cin >> hoursWorked;

    // Compute
    basicPay = ratePerHour * hoursWorked;
    pagibigDeduction = 0.02 * basicPay;
    sssDeduction = 0.2 * basicPay;
    vat = 0.12 * basicPay;
    totalDeduction = pagibigDeduction + sssDeduction + vat;
    netPay = basicPay - totalDeduction;
    
    clrscr();

    // Display
    gotoxy(32,3);cout<<"ABC Corporation";
    gotoxy(33,4);cout<<"Pay Department";
    gotoxy(25,5);cout<<"Payroll for the month of: "; cout<< month;
    gotoxy(2,6);cout << "============================================================================";
    gotoxy(2,9);cout << "============================================================================";
    gotoxy(2,7);cout << "Emp";
    gotoxy(2,8);cout <<"No.";
    gotoxy(2,10);cout << employeeNumber;
    gotoxy(10,7);cout << "Emp";
    gotoxy(10,8);cout <<"Name";
    gotoxy(9,10);cout << employeeName;
    gotoxy(27,7);cout <<"Dept.";
    gotoxy(27,8);cout <<"Code";
    switch (deptCode) {
        case 'A':
            gotoxy(28,10);cout << "A" << endl;
            break;
        case 'M':
            gotoxy(28,10);cout << "M" << endl;
            break;
        case 'H':
            gotoxy(28,10);cout << "H" << endl;
            break;
        case 'I':
            gotoxy(28,10);cout << "I" << endl;
            break;
        default:
            cout << "Unknown" << endl;
    }
    gotoxy(34,7);cout<<"Basic";
    gotoxy(34,8);cout<<"Pay";
    gotoxy(33,10);cout << basicPay;
    gotoxy(41,7);cout << "Pag";
    gotoxy(41,8);cout << "IBIG";
    gotoxy(40,10);cout << pagibigDeduction;
    gotoxy(48,7);cout << "SSS";
    gotoxy(48,10);cout << sssDeduction;
    gotoxy(55,7);cout << "Tax";
    gotoxy(55,10);cout << vat;
    gotoxy(62,7);cout << "Total";
    gotoxy(62,8); cout << "Deduct";
    gotoxy(63,10);cout << totalDeduction;
    gotoxy(72,7);cout << "Net";
    gotoxy(72,8);cout << "Pay";
    gotoxy(71,10); cout << netPay;

gotoxy(2,12);cout << "============================================================================";
    getch();
    return 0;
}
