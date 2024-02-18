#include<iostream>
using namespace std;

int v1=0,v2=0,v3=0,v4=0,v5=0,choice;
string c1="BJP",c2="CONGRESS",c3="CPM",c4="AAP",c5="NOTA";              //declaring in the scope
void result();
void winner();
void vote();
int main()
{

    vote();
    //winner();
    return 0;
    
}

void vote()
{
       
    while(1)
    {
        cout<<"VOTING HAS STARTED\nCAST YOUR VOTE BY ENTERING YOUR PARTY NUMBER \n";
        cout<<"Available options are:"<<endl;
        cout<<"1.vote for "<<c1<<1<<"\n2.vote for "<<c2<<"\n3.vote for "<<c3<<"\n4.vote for "<<c4<<"\n5.vote for "<<c5<<"\n6.exit"<<"\n7.show result"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            v1++;
            cout<<"voted successfully\n\n\n";
            break;
            case 2:
            v2++;
            cout<<"voted successfully\n\n\n";
            break;
            case 3:
            v3++;
            cout<<"voted successfully\n\n\n";
            break;
            case 4:
            v4++;
            cout<<"voted successfully\n\n\n";
            break;
            case 5:
            v5++;
            cout<<"voted successfully\n\n\n";
            break;
            case 6:
            cout<<"Exit successfull\n\n\n";
            exit(0);
            break;
            case 7:
            result();
            break;
            default:
            cout<<"Enter the correct option\n\n"<<endl;
            
        }
    
    }
}

void result()
{
    cout<<c1<<"="<<v1<<" votes"<<endl;
    cout<<c2<<"="<<v2<<" votes"<<endl;
    cout<<c3<<"="<<v3<<" votes"<<endl;
    cout<<c4<<"="<<v4<<" votes"<<endl;
    cout<<c5<<"="<<v5<<" votes\n"<<endl;
    winner();
    
}

void winner()
{

    if(v1>=v2 && v1>=v3 && v1>=v4 && v1>=v5)
    {
        cout<<"LEADING PARTY IS "<<c1<<" WITH "<<v1<<"VOTES\n\n\n";
    }
    if(v2>=v1 && v2>=v3 && v2>=v4 && v2>=v5)
    {
        cout<<"LEADING PARTY IS "<<c2<<" WITH "<<v2<<"VOTES\n\n\n";
    }
    if(v3>=v1 && v3>=v2 && v3>=v4 && v3>=v5)
    {
        cout<<"LEADING PARTY IS "<<c3<<" WITH "<<v3<<"VOTES\n\n\n";
    }
    if(v4>=v1 && v4>=v2 && v4>=v3 && v4>=v5)
    {
        cout<<"LEADING PARTY IS "<<c4<<" WITH "<<v4<<"VOTES\n\n\n";
    }
    if(v5>=v1 && v5>=v2 && v5>=v3 && v5>=v4)
    {
        cout<<"NO LEADING PARTY AS "<<c5<<" GOT "<<v5<<"VOTES\n\n\n";
    }
   
}