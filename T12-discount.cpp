#include<iostream>
using namespace std;
void discount(string day,int amount);
int main(){
    string day;
    int amount;
    while(true){
    cout<<"Enter the day of purchase: ";
    cin>>day;
    cout<<"Enter the total purchase amount: $";
    cin>>amount;
    discount(day,amount);
    }
    
    return 0;
}
void discount(string day,int amount){
    float payAmount;
    if(day=="Sunday" || day=="sunday"){
        payAmount = amount - (amount*0.1);
        cout<<"Payable Amount: $"<<payAmount<<endl;
    }
    else{
       payAmount = amount - (amount*0.05);
       cout<<"Payable Amount: $"<<payAmount<<endl;
    }
}