/*
9.Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.
If*/
/*#include<iostream>
using namespace std;
int main()
{
    char medical_issue, not_medical_issue;
    int mi,nmi;
    cout<<"Enter Y/y if you have any medical issue:";
    cin>>medical_issue;
    mi=int(medical_issue);
    
      if(mi!=89 || mi!=121|)
    {
        cout<<"Invalid Answer!";
        }
        else{
    if( mi==89 || mi==121)
    {
        cout<<"You are allowed to give your exam";

    }
    else if(nmi!=78||nmi!=110)
     {
            cout<<"Invlid Answer";
        }
    }
    else if(nmi==78||nmi==110)
    {
        cout<<"Enter N/n if you don't have any medical issue:";
    cin>>not_medical_issue;
    nmi=int(not_medical_issue);
        cout<<"You are not allowed to give your exam.";
    }
        }

}*/
#include<iostream>
using namespace std;

int main() {
    char medical_issue;
    cout << "Enter Y/y if you have any medical issue"<<endl<<"And N/n if you have not any medicla issue:";
    cin >> medical_issue;

    if (medical_issue == 'Y' || medical_issue == 'y') {
        cout << "You are allowed to give your exam.";
    }
    else if (medical_issue == 'N' || medical_issue == 'n') {
        cout << "You are not allowed to give your exam.";
    }
    else {
        cout << "Invalid Answer!";
    }

    return 0;
}
