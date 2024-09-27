#include <iostream>
using namespace std;
const string Classcode = "CMP2103";
const int weight = 4.0;
int studentGrader(int no_of_testsTaken);

int main(){
    while(1){
    int no_of_testsTaken;
    int no_of_attempts;
    string Fullname;
    string password;
    no_of_attempts = 3;
    
    cout << "Enter your full name"<<endl;
    cin.ignore();
    getline(cin,Fullname);
    for(int i=2; i>=0;i--){
        cout<< "Enter the course code as your password: "<<endl;
        cin >> password;
        
        if (password==Classcode){
            cout << "Welcome back!"<< endl;
            break;
        
        }
        else if(i>0){
            cout << "You have "<<(i)<<" attempts remaining.Try again: "<<endl; 
        }else{
                cout <<" Maximum attempts allowed."<<endl;
                exit(1);
            }

    }
    cout << "Enter the number of testsTaken:"<<endl;
    cin >> no_of_testsTaken;
studentGrader( no_of_testsTaken);

int birthdate,birthmonth,birthyear;
int currentdate,currentmonth,currentyear;
int ageY,ageM,ageD;
int month[] = { 31, 28, 31, 30, 31,30, 31, 31, 30, 31, 30, 31 };
cout<<"Enter Your Birth Year(Eg:2000):";
cin>>birthyear;
cout<<"\nEnter Your Birth Month(Eg:7):";
cin>>birthmonth;
cout<<"\nEnter Your Birth Date(Eg:7):";
cin>>birthdate;
cout<<"\nEnter The Current Year(Eg:2024):";
cin>>currentyear;
cout<<"\nEnter The Current Month(Eg:12):";
cin>>currentmonth;
if (birthmonth > currentmonth) { 
    currentyear = currentyear - 1; 
    currentmonth = currentmonth + 12; 
    } 
cout<<"\nEnter The Current Date(Eg:20):";
cin>>currentdate;
if (birthdate > currentdate) { 
    currentdate = currentdate + month[birthmonth - 1]; 
    currentmonth = currentmonth - 1; 
    } 
ageY=currentyear-birthyear;
ageM=currentmonth-birthmonth;
ageD=currentdate-birthdate;
cout<<"\nYour Age is "<<ageD<<" Days And "<<ageM<<" Months And "<<ageY<<" Years"<<endl;
 int response = 1;
    cout<<"Would you like to Repeat the process"<<endl;
    cout<<"1.Yes"<<endl;
    cout<<"2.No"<<endl;
    cin>>response;
 
    if (response==2)
    {
       break;
    }
};
return 0;
}
int studentGrader(int no_of_testsTaken){
    double studentGrades[no_of_testsTaken][2];
    for(int i=0; i<no_of_testsTaken;i++){
        cout << "Enter the marks for test "<<(i+1)<<" :"<<endl;
        cin >>studentGrades[i][0];
        if(studentGrades[i][0]<=100 &&studentGrades[i][0]>=90){
        studentGrades[i][1] = 5.0;
        }else if(studentGrades[i][0]<90 &&studentGrades[i][0]>=80){
        studentGrades[i][1] = 5.0;
        }else if(studentGrades[i][0]<80 &&studentGrades[i][0]>=75){
        studentGrades[i][1] = 4.5;
        }else if(studentGrades[i][0]<75 &&studentGrades[i][0]>=70){
        studentGrades[i][1] = 4.0;
        }else if(studentGrades[i][0]<70 &&studentGrades[i][0]>=65){
        studentGrades[i][1] = 3.5;
        }else if(studentGrades[i][0]<65 &&studentGrades[i][0]>=60){
        studentGrades[i][1] = 3.0;
        }else if(studentGrades[i][0]<60 &&studentGrades[i][0]>=55){
        studentGrades[i][1] = 2.5;
        }else if(studentGrades[i][0]<55 &&studentGrades[i][0]>=50){
        studentGrades[i][1] = 2.0;
        }else if(studentGrades[i][0]<50 &&studentGrades[i][0]>=45){
        studentGrades[i][1] = 1.5;
        }else if(studentGrades[i][0]<45 &&studentGrades[i][0]>=40){
        studentGrades[i][1] = 1.0;
        }else if(studentGrades[i][0]<40 &&studentGrades[i][0]>=0){
        studentGrades[i][1] = 0.0;
        }else{
            cout << "invalid grades.Re-enter mark:"<<endl;
            i--;
        }
    }

    double GP = 0;
    double GPA;
    for (int j=0;j < no_of_testsTaken; j++)
    {
        GP +=  studentGrades[j][1]*weight;
               
    }
    GPA = (GP)/(no_of_testsTaken*weight);
    cout<<"GPA = "<<GPA<<endl;
}