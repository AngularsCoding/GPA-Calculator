#include<iostream>
#include<conio.h> 

using namespace std;

void calculateGPA()
{
    int NoOfSubs;
    double credits [NoOfSubs];
    double points [NoOfSubs];
    double sum = 0;
    double total;
    double totalCredits = 0;
    
    system("cls");
    cout<<"---------------------------------"<<endl;
	cout<<"  GPA Calculator    	            "<<endl;
    cout<<"---------------------------------"<<endl;
    
	cout<<" Enter No of Subjects : ";
    cin>>NoOfSubs;
    
    cout<<endl;
    for(int i=0; i<NoOfSubs; i++)
    {
        cout<<"Enter credits of subject "<<i+1<<" : ";
        cin>>credits[i]; 
        cout<<"Enter points of subject "<<i+1<<" : ";
        cin>>points[i];
        cout<<"----------------------------------------------"<<endl<<endl;
    }

    for(int i=0; i<NoOfSubs; i++)
    {
        total = credits[i]*points[i];
        sum += total;
    }

    for(int i=0; i<NoOfSubs; i++)
        totalCredits += credits[i];
    
	
	cout<<endl<<endl;
    cout<<"Total Points: "<<sum<<endl;
	cout<<"Total Credits: "<<totalCredits<<endl;
	cout<<"Total GPA: "<<sum/totalCredits<<endl;
    
	cout<<"\n Press any key to go back to menu...";
    getch();
}
void calculateCGPA()
{
    system("cls");
    int NoOfSubs;
    
    cout<<"---------------------------------"<<endl;
	cout<<"  CGPA Calculator    	        "<<endl;
    cout<<"---------------------------------"<<endl; 
    
	cout<<"Enter No of Subjects : ";
    cin>>NoOfSubs;
     
    double semesters[NoOfSubs];
    double semTotal=0;

    for(int i=0; i<NoOfSubs; i++)
    {
        cout<<"Enter Semester # " << i+1 << " GPA: ";
        cin>>semesters[i]; 
    }

    for(int i=0; i<NoOfSubs; i++)
        semTotal += semesters[i];
    
    cout<<"Your CGPA : " << semTotal/NoOfSubs << endl;

	cout<<"\n Press any key to go back to menu...";
    getch();
}

void instructions(){
	system("cls");
	cout<<endl<<endl;
    cout<<"How to calculate GPA and CGPA: "<<endl;
    cout<<"-------------------------------"<<endl<<endl;
    cout<<" GPA = Sum of (Credit*Point) / total of credits "<<endl<<endl;
    cout<<" CGPA =  Sum of GPA / number of semesters "<<endl; 
    
    cout<<endl<<endl;
    cout<<" Grade - Point Table: "<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"\tGrade \t\t 4.0 Scale"<<endl;
    cout<<"-------------------------------------"<<endl<<endl;
    cout<<"\tA+ \t\t 4.0 "<<endl;
    cout<<"\tA \t\t 4.0 "<<endl;
    cout<<"\tA- \t\t 3.7 "<<endl;
    cout<<"\tB+ \t\t 3.3 "<<endl;
    cout<<"\tB \t\t 3.0 "<<endl;
    cout<<"\tB- \t\t 2.7 "<<endl;
    cout<<"\tC+ \t\t 2.3 "<<endl;
    cout<<"\tC \t\t 2.0 "<<endl;
    cout<<"\tC- \t\t 1.7 "<<endl;
    cout<<"\tD+ \t\t 1.3 "<<endl;
    cout<<"\tD \t\t 1.0 "<<endl;
    cout<<"\tD- \t\t 0.7 "<<endl;
    cout<<"\tF \t\t 0.0 "<<endl;
    
	cout<<"\n Press any key to go back to menu...";
    getch();
}

int main()
{ 
	do{
		system("cls");
		cout<<" ------------------------------------ "<<endl; 
		cout<<" |          GPA Calculator          | "<<endl; 
		cout<<" ------------------------------------"<<endl<<endl;
		cout<<"1. Calculate GPA"<<endl;
		cout<<"2. Calculate CGPA"<<endl;
		cout<<"3. How to calculate GPA?"<<endl;	 
		cout<<"4. Quit"<<endl<<endl;
		cout<<"Select option: ";
		char op = getche();
		
		if( op=='1') calculateGPA();
		else if( op=='2') calculateCGPA();
		else if( op=='3') instructions();
		else if( op=='4') exit(0);
		
	}while(1);
	
	return 0;
}
