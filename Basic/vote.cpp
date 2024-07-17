#include<bits/stdc++.h>
using namespace std;

int main(){
    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;
    // if(age>=18){
    //     cout<<"Yes you can vote";
    // }
    // else{
    //     cout<<"No you can't vote";
    // }

    // 
    
    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;
    // if(age<18){
    //     cout<<"Not enigible for job";
    // }
    // else{
    //     if(age>=18 && age<=54){
    //         cout<<"Eligible for job";
    //     }
    //     else if(age>=55 && age<=57){
    //         cout<<"Eligible but retirement soon";

    //     }
    //     else if(age>57){
    //         cout<<"retirment time";
    //     }
    // }

    // switch statement 

    int day;
    cin>>day;
    switch(day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thrusday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
        cout<<"Invalid";

    }

}