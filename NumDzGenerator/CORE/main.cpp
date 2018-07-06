#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{

    // variables table
    int LenS = 1 ;         //Length Begin
    int LenE = 9 ;         //Length End
    string stc;            //static clause
    string Snums;          //Save Sapce 
    ofstream save;         //Save permiter 
    string anw;            //answer , if save or no 

    // Title
    cout << " \n \n \n \t \t \t \t NumDzGenerator \n \n  " << endl;
    cout << " /00 PrograMmer : ABDO10     ====    COPYRIGHT(C) RESERVED 2018 - 2019" << endl;
    cout << "/ Tool : NumDzGenerator (numgen)" << endl; 
    cout << "| Version : 1.0" << "\t Date : 24/06/2018 = 13:05" << endl; 
    cout << "\\ Find Me :  fb/abdo10hacker , GitHub/abdo10hacker or abdo10hacker@hotmail.com" << endl<< endl;
    cout << " \n \t # Easy Tool , # Easy Source , # Difficult Goal! " <<endl;
    
    // Config file
    cout<< "\n [!] Place set path , That Doesn't mean u will save..." << endl;
    cout<< " [!] Just Enter a Save Path... \n " << endl; 
    cout<< " REGULAR SAVE FILE:";
    getline(cin,Snums);

    cout<<endl<< " [EX] => +213779 " << endl;
    cout << " Enter The static clause (+N): ";
    getline(cin,stc);

    // Length number
    cout<<endl<< " [EX] => 1111111111 " << endl;
    cout << " Enter Numbers Length (N): " ;
    cin >> LenS;

    // output will be ...
    cout << " [+] Your Numbers Will Be (" <<stc<< " Length)" <<endl;
 

    // algorithm
    LenE = LenS * 9 ;

    //saving 
    cout<< "~ Do U Wanna Save ur Result [y/N]:" ;
    cin>>anw;
    if (anw == "y" || anw == "Y"){
    cout<< "[!] Ready To Save! " << endl;
    cout << "\n [!] SAVE @ : \n" ;
     // fgets(Snums,sizeof(Snums),stdin);
    save . open (Snums) ;
    }
    else {
    cout<< "[!] Ur Work Will Never Saved! " << endl;
    }
 

    for (int i = LenS ; i <= LenE ; i++ ){
        cout << " [+] Generate : "<<stc<<i<<endl;
        save<<" [+] Number  => "<<stc<<i<<endl;
    }

    cout << "\n \t [+] Complete... " << endl;
 
    return 0;
}
