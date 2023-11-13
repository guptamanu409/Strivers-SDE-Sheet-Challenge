#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"\n\nNumber guessing game"<<"\n";
    cout<<"Guess the number between 1 to 5"<<"\n";
    cout<<"You will have 3 chances to guess it correctly"<<"\n"<<"\n"<<"\n";

    char resume;
    while(resume!='N'){
        
        srand(time(NULL));
        int rem_chances = 3;
        
        while(rem_chances--){

            int rad_num = (rand()%5) + 1;
            int input;
            cout<<"*****************************************************";
            cout<<"\t\t\t\t\tRemaining Chances    "<<rem_chances<<endl;
            cout<<"Please enter your guess     ";
            cin>>input;

            if(input==rad_num){
                cout<<"You Win"<<"\n";
                break;
            }

            (rem_chances>0)? cout<<"\n\n Try again\n" : cout<<"\n\n Better Luck Next Time";  
            //cout<<"\n\n Try again\n";

        }
        
        cout<<"\n\n Would you like to continue - Y / N "<<"\n";
        cin>>resume;
    }

    cout<<"\n\n Thankyou for playing.... Have a nice day\n\n";


    return 0;
}