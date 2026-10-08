#include<iostream>
#include<string>
using namespace std;
int main(){
    int choice,amount,confirm;
    int balance=50000;
    int no,CNIC,bank_acc;

    string sender,ref,name,username;

    do{
        cout<<"\t\t\t\t\t Jazz Cash Interface \n";
        cout<<"\n1. Send Money";
        cout<<"\n2. Receive Money";
        cout<<"\n3. Mobile Load";
        cout<<"\n4. Bill Payment";
        cout<<"\n5. Check Balance";
        cout<<"\n6. Exit";
        cout<<"\n\nEnter any Choice (1-6): ";
        cin>>choice;

        switch(choice){
            case 1:
			{
                cout<<"\n\t\t\t Send Money";
                cout<<"\n1. Send to JazzCash Account";
                cout<<"\n2. Send to CNIC";
                cout<<"\n3. Send to Bank Account";
                cout<<"\n4. Back to Main Menu";
                cout<<"\nEnter any choice (1-4): ";
                cin>>choice;

                switch(choice){
                    case 1:
					{
                        cout<<"\nEnter Mobile Number: ";
                        cin>>no;
                        cout<<"Enter Amount: ";
                        cin>>amount;
                        if(amount>balance){
                            cout<<"\nInsufficient Balance!"<<endl;
                            break;
                        }
                        cout<<"\n1. Confirm";
                        cout<<"\n2. Cancel";
                        cout<<"\nEnter choice (1-2): ";
                        cin>>confirm;

                        switch(confirm){
                            case 1:
                                balance=balance-amount;
                                cout<<"\nTransaction Successfully!";
                                cout<<"\nRemaining Balance: "<<balance<<endl;
                                break;
                            case 2:
                                cout<<"\nTransaction Cancelled!"<<endl;
                                break;
                            default:
                                cout<<"\nInvalid choice!"<<endl;
                        }

                        break;
                    }
                    

                    case 2:
					{
                        cout<<"\nEnter CNIC Number: ";
                        cin>>CNIC;
                        cout<<"Enter Amount: ";
                        cin>>amount;

                        if(amount>balance)
                        {
                            cout<<"\nInsufficient Balance!"<<endl;
                            break;
                        }
                        cout<<"\n1. Confirm";
                        cout<<"\n2. Cancel";
                        cout<<"\nEnter choice (1-2): ";
                        cin>>confirm;

                        switch(confirm)
                        {
                            case 1:
                                balance=balance-amount;
                                cout<<"\nTransaction Successfully!";
                                cout<<"\nRemaining Balance: "<<balance<<endl;
                                break;

                            case 2:
                                cout<<"\nTransaction Cancelled!\n";
                                break;

                            default:
                                cout<<"\nInvalid choice!\n";
                        }

                        break;
                    }
                    
                    case 3:
                    {
                        cout<<"\nEnter Bank Name: ";
                        cin>>name;
                        cout<<"Enter Account Number: ";
                        cin>>bank_acc;
                        cout<<"Enter Amount: ";
                        cin>>amount;

                        if(amount>balance)
                        {
                            cout<<"\nInsufficient Balance!"<<endl;
                            break;
                        }

                        cout<<"\n1. Confirm";
                        cout<<"\n2. Cancel";
                        cout<<"\nEnter choice (1-2): ";
                        cin>>confirm;

                        switch(confirm)
                        {
                            case 1:
                                balance=balance-amount;
                                cout<<"\nTransaction Successfully!";
                                cout<<"\nRemaining Balance: "<<balance<<endl;
                                break;

                            case 2:
                                cout<<"\nTransaction Cancelled!"<<endl;
                                break;

                            default:
                                cout<<"\nInvalid choice!"<<endl;
                        }

                        break;
                    }

                    case 4:
                        cout<<"\nReturning to Main Menu..."<<endl;
                        break;

                    default:
                        cout<<"\nInvalid choice!"<<endl;
                }

                break;
            }

            case 2:
            {
                cout<<"\n\n\t\t\t Receive Money ";
                cout<<"\n1. Receive from JazzCash Account";
                cout<<"\n2. Receive from Bank";
                cout<<"\n3. Back to Main Menu";

                cout<<"\nEnter any choice (1-3): ";
                cin>>choice;

                switch(choice)
                {
                    case 1:
                    {
                        cout<<"\nEnter Sender Mobile Number: ";
                        cin>>sender;
                        cout<<"Enter Amount: ";
                        cin>>amount;
                        
                        cout<<"\n1. Confirm";
                        cout<<"\n2. Cancel";
                        cout<<"\nEnter choice (1-2): ";
                        cin>>confirm;

                        switch(confirm)
                        {
                            case 1:
                                balance=balance+amount;
                                cout<<"\nTransaction Successfully!";
                                cout<<"\nNew Balance: "<<balance<<endl;
                                break;

                            case 2:
                                cout<<"\nTransaction Cancelled!"<<endl;
                                break;

                            default:
                                cout<<"\nInvalid choice!"<<endl;
                        }

                        break;
                    }

                    case 2:
                    {
                        cout<<"\nEnter Bank Name: ";
                        cin>>name;
                        cout<<"Enter Account Number: ";
                        cin>>bank_acc;
                        cout<<"Enter Amount: ";
                        cin>>amount;

                        cout<<"\n1. Confirm";
                        cout<<"\n2. Cancel";
                        cout<<"\nEnter choice (1-2): ";
                        cin>>confirm;

                        switch(confirm)
                        {
                            case 1:
                                balance = balance + amount;
                                cout<<"\nTransaction Successfully!";
                                cout<<"\nNew Balance: " <<balance<<endl;
                                break;

                            case 2:
                                cout<<"\nTransaction Cancelled!"<<endl;
                                break;

                            default:
                                cout<<"\nInvalid choice!"<<endl;
                        }

                        break;
                    }

                    case 3:
                        cout<<"\nReturning to Main Menu"<<endl;
                        break;

                    default:
                        cout<<"\nInvalid choice!"<<endl;
                }

                break;
            }

            case 3:
            {
                cout<<"\n\n\t\t\t Mobile Load ";
                cout<<"\n1. Jazz";
                cout<<"\n2. Zong";
                cout<<"\n3. Telenor";
                cout<<"\n4. Ufone";
                cout<<"\n5. Back to Main Menu";

                cout<<"\nEnter any choice (1-5): ";
                cin>>choice;

                switch(choice)
                {
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    {
                        cout<<"\nEnter Mobile Number: ";
                        cin>>no;
                        cout<<"Enter Amount: ";
                        cin>>amount;

                        if(amount > balance)
                        {
                            cout<<"\nInsufficient Balance!"<<endl;
                            break;
                        }

                        cout<<"\n1. Confirm";
                        cout<<"\n2. Cancel";
                        cout<<"\nEnter choice (1-2): ";
                        cin>>confirm;

                        switch(confirm)
                        {
                            case 1:
                                balance = balance - amount;
                                cout<<"\nMobile Load Successfully!";
                                cout<<"\nRemaining Balance: " << balance<<endl;
                                break;

                            case 2:
                                cout<<"\nMobile Load Cancelled!"<<endl;
                                break;

                            default:
                                cout<<"\nInvalid choice!"<<endl;
                        }

                        break;
                    }

                    case 5:
                        cout<<"\nReturning to Main Menu..."<<endl;
                        break;

                    default:
                        cout<<"\nInvalid choice!"<<endl;
                }

                break;
            }

            case 4:
            {
                cout<<"\n\n\t\t\t Bill Payment ";
                cout<<"\n1. Electricity Bill";
                cout<<"\n2. Gas Bill";
                cout<<"\n3. Water Bill";
                cout<<"\n4. Internet Bill";
                cout<<"\n5. Telephone Bill";
                cout<<"\n6. Back to Main Menu";

                cout<<"\nEnter any choice (1-6): ";
                cin>>choice;

                switch(choice)
                {
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    {
                        cout<<"\nEnter Reference/Consumer Number: ";
                        cin>>ref;
                        cout<<"Enter Amount: ";
                        cin>>amount;

                        if(amount > balance)
                        {
                            cout<<"\nInsufficient Balance!"<<endl;
                            break;
                        }

                        cout<<"\n1. Confirm";
                        cout<<"\n2. Cancel";
                        cout<<"\nEnter choice (1-2): ";
                        cin>>confirm;

                        switch(confirm)
                        {
                            case 1:
                                balance = balance - amount;
                                cout<<"\nBill Payment Successfully!";
                                cout<<"\nRemaining Balance: "<<balance<<endl;
                                break;

                            case 2:
                                cout<<"\nBill Payment Cancelled!"<<endl;
                                break;

                            default:
                                cout<<"\nInvalid choice!"<<endl;
                        }

                        break;
                    }

                    case 6:
                        cout<<"\nReturning to Main Menu..."<<endl;
                        break;

                    default:
                        cout << "\nInvalid choice!\n";
                }

                break;
            }

            case 5:
            {
                cout << "\n\n\t\t\t Check Balance";
                cout<<"\nAccount Name: ";
                cin>>username;
                cout<<"Mobile Number: ";
                cin>>no;
                cout<<"\nCurrent Balance: " <<balance;
                
                cout<<"\n\n1. Transaction History";
                cout<<"\n2. Back to Main Menu";
                cout<<"\nEnter any choice (1-2): ";
                cin>>choice;

                switch(choice)
                {
                    case 1:
                        cout<<"\n\nTransaction History:";
                        cout<<"\nSend Money: 2000";
                        cout<<"\nMobile Load: 500";
                        cout<<"\nElectricity Payment: 4000"<<endl;
                        break;

                    case 2:
                        cout<<"\nReturning to Main Menu..."<<endl;
                        break;

                    default:
                        cout<<"\nInvalid choice!"<<endl;
                }

                break;
            }

            case 6:
                cout<<"\n\n\t\t\t Thank You For Using JazzCash ";
                break;

            default:
                cout<<"\nInvalid choice! Please enter 1-6.\n";
        }

    } while(choice!=6);
    

    return 0;
}

