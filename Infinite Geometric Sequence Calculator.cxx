// INFINITE GEOMETRIC SUM SEQUENCE CALCULATOR
#include <iostream.h>
#include <cmath>
#include <conio.h>

int main () {
	clrscr();
	
	double firstterm;
	double ratio;
	double sum;
	char DesiredOperation;
	
	
	cout<<"what do you want to find? (Sum (S), First term (F), or Ratio (R): ";
	cin>> DesiredOperation;
	
	if (DesiredOperation == 'S') 
	{
	cout<< "\nInput the first term: ";
	cin >>firstterm;
	cout<<"Input the ratio: ";
	cin >>ratio;
	
	// computation
	sum = firstterm / (1 - ratio);
	
	cout<<"the answer is: ";
	cout<<sum;
	}
	
	else if (DesiredOperation == 'F')
	 {
	    cout<<"Input the Sum: ";
	    cin>>sum;
	    cout<<"Input the ratio: ";
	    cin>>ratio;
	    
	    //computation 
	    firstterm = (1 - ratio) * sum;
	    
	    cout<<"the answer is: ";
	cout<<firstterm; 
	 }        
	
	    else if (DesiredOperation == 'R') {
	        cout<<"Input the First Term: ";
	        cin>>firstterm;
	        cout<<"Input the Sum: ";
	        cin>>sum;
	        
	        //computation 
	        ratio = 1 - (firstterm / sum);
	        
	cout<<"the answer is: ";
	cout<<ratio;        
	    }
	    
	    else {
	        cout<<"Re-run the program again";
	    }
	getch();
	return 0;
	
}