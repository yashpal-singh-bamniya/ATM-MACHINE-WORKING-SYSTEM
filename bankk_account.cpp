#include<iostream>
#include<iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 0.0;
    int choice = 0;

    do{
        std::cout<<"**********************\n";
        std::cout<<"ENTER YOUR CHOICE:\n";
        std::cout<<"**********************\n";
        std::cout<<"1.SHOW BALANCE\n";
        std::cout<<"2.DEPOSITE\n";
        std::cout<<"3.WITHDRAW\n";
        std::cout<<"4.EXIT\n";
        std::cout<<">";
        std::cin>>choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: showBalance(balance);
            break;
            case 2: balance += deposit();
                    showBalance(balance);
                    break;
            case 3:balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            case 4:std::cout<<"THANKYOU FOR VISITING\n";
            break;
            default:std::cout<<"INVALID CHOICE\n";
            break;

        }
            
        
    }while(choice != 4);
    return 0;


}

void showBalance(double balance){
    std::cout<<"YOUR CURRENT BALANCE IS:"<< std::setprecision(2)<< std::fixed <<balance<<'\n';
    return;
}
double deposit(){

    double amount ;
    std::cout<<"AMOUNT YOU WANT TO DEPOSITE:";
    std::cin>> amount;
    return amount ;
}
double withdraw(double balance){
    double amount;
    std::cout<<"AMOUNT YOU WANT TO WITHDRAW:";
    std::cin>> amount;

    if(amount > balance){
        std::cout<<"INSUFFICIENT FUNDS\n";
        return 0;
    }
    return amount;


}