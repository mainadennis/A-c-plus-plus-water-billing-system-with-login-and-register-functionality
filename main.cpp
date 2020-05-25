#include <iostream>
#include<cstdlib>

using namespace std;
class billing{
private:
    string usr = "test"; //default username
    char ch,op;
    int option;
    string pas = "0000"; //default password
    int stand = 200;//standing charges
    double past=0,curr=50,pr,tx;
public:
    const int ppu = 15; //price per unit fixed
    string usr1,pas1;
    const double VAT=0.16;

public:
    void getinfo(){
        getinfo:
        cout<<"Dentricedev Water Billing App \n"<<endl;
        cout<<"do you have an account (y/n)"<<endl;
        cin>>ch;
        if (ch == 'n' || ch == 'N'){
            cout<<"create an account to proceed \n"<<endl;
            cout<<"new username"<<endl;
            cin>>usr;
            cout<<"set password"<<endl;
            cin>>pas;
            cout<<"new user successfully created \n"<<endl;
            cout<<"configure your account.."<<endl;
            past:
                cout<<"previous meter reading : "<<endl;
                cin>>past;
            if(past<0){
                    cout<<"invalid readings"<<endl;
                    goto past;
            }
            curr:
                cout<<"current meter reading"<<endl;
                cin>>curr;
            if(curr<0){
                    cout<<"invalid readings"<<endl;
                    goto curr;
            }
            if (past>curr){
                cout<<"current meter reading cannot be less than the previous reading"<<endl;
                goto past;
            }

            cout<<"settings done!"<<endl;
            def();

        }
        else if (ch == 'y' || ch == 'Y'){
            cout<<"please enter your details to log in \n"<<endl;
            cout<<"username: "<<endl;
            cin>>usr1;
            cout<<"password"<<endl;
            cin>>pas1;

            string tr = pas1;
            string u = usr1;
            if (u == usr && tr == pas){
                    cout<<"successfully logged in \n"<<endl;
                    def();
            }else {
                cout<<"username or password do not match or don't exist"<<endl;
                goto getinfo;
            }
        }else{
            cout<<"invalid option"<<endl;
            goto getinfo;
        }



    }
     def(){
            dot:
                do{
                    cout<<"select an operation to proceed \n"<<endl;
                    cout<<"1. Past Meter Reading"<<endl;
                    cout<<"2. Check Consumption"<<endl;
                    cout<<"3. Process The Bill"<<endl;
                    cout<<"4. Process Payment"<<endl;
                    cout<<"5. Exit"<<endl;
                    cin>>option;
                    switch (option){
                    case 1:
                        cout<<"post meter readings are : "<<past<<"\n"<<endl;
                        cout<<"enter y to do another operation"<<endl;
                        cin>>op;
                        break;
                    case 2:
                        pr = curr-past;
                        cout<<"units consumption is : "<<pr<<endl;
                        cout<<"price per unit is: "<<ppu<<endl;
                        cout<<"and an additional VAT tax of 16%"<<"\n"<<endl;
                        cout<<"enter y to do another operation"<<endl;
                        cin>>op;
                        break;
                    case 3:
                        tx = (curr-past)*VAT;
                        pr = ((curr-past)*ppu)+tx+stand;
                        cout<<"your bill for the period is: "<<pr<<"\n"<<endl;
                        cout<<"enter y to do another operation"<<endl;
                        cin>>op;
                        break;
                    case 4:
                        cout<<"confirmed "<<pr<<" sent to the water company:: your bill has been settled successfully"<<"\n"<<endl;
                        cout<<"enter y to do another operation"<<endl;
                        cin>>op;
                        break;
                    case 5:
                        //void exit(int exit);
                        return EXIT_SUCCESS;
                        break;
                    default:
                        cout<<"invalid option"<<endl;
                        break;
                    }
            }while(op=='y' || op=='Y');
            if(op!='y' || op!='Y'){
                    cout<<"invalid option"<<endl;
                    goto dot;
            }
    }
};
int main()
{
    billing bl;
    bl.getinfo();
    return 0;
}
