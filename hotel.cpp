#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity we have  
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
    //food item  we sold
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
    //total price of item
    int Total_room=0, Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;
    
    
    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available:";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta: ";
    cin>>Qpasta;  
    cout<<"\n Quantity of burger: ";
    cin>>Qburger; 
    cout<<"\n Quantity of nooddles: ";
    cin>>Qnoodles; 
    cout<<"\n Quantity of Shake: ";
    cin>>Qshake; 
    cout<<"\n Quantity of chicken-roll: ";
    cin>>Qchicken; 
    
    m:
    cout<<"\n\t\t\t Please select from given menu option ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) shake";
    cout<<"\n6) chicken-roll";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";
    
    cout<<"\n\n Please enter ur choice";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        cout<<"\n\n Enter the number of rooms you want: ";
        
        cin>>quant;
        if(Qrooms-Srooms>=quant)
        {
            Srooms=Srooms+quant;
            Total_room=Total_room+quant*1200;
            cout<<"\n\n\t\t"<<quant<<"rooms have been alloted to you!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qrooms-Srooms<<" rooms remaining in the hotel";
            break;
        }
        
        
        case 2:
        cout<<"\n\n Enter pasta quantity: ";
        
        cin>>quant;
        if(Qpasta-Spasta>=quant)
        {
            Spasta=Spasta+quant;
            Total_pasta=Total_pasta+quant*250;
            cout<<"\n\n\t\t"<<quant<<" pasta is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qpasta-Spasta<<" pasta remaining in the hotel";
            break;
        }
        
        case 3:
        cout<<"\n\n Enter Burger quantity: ";
        
        cin>>quant;
        if(Qburger-Sburger>=quant)
        {
            Sburger=Sburger+quant;
            Total_burger=Total_burger+quant*250;
            cout<<"\n\n\t\t"<<quant<<" Burger is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qburger-Sburger<<" Burger remaining in the hotel";
            break;
        }
        
        case 4:
        cout<<"\n\n Enter Noodles quantity: ";
        
        cin>>quant;
        if(Qnoodles-Snoodles>=quant)
        {
            Snoodles=Snoodles+quant;
            Total_noodles=Total_noodles+quant*250;
            cout<<"\n\n\t\t"<<quant<<" Noodles is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qnoodles-Snoodles<<" Noodles remaining in the hotel";
            break;
        }
        
        case 5:
        cout<<"\n\n Enter Shake quantity: ";
        
        cin>>quant;
        if(Qshake-Sshake>=quant)
        {
            Sshake=Sshake+quant;
            Total_shake=Total_shake+quant*250;
            cout<<"\n\n\t\t"<<quant<<" Shake is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qshake-Sshake<<" Shake remaining in the hotel";
            break;
        }
        
        case 6:
        cout<<"\n\n Enter chicken quantity: ";
        
        cin>>quant;
        if(Qchicken-Schicken>=quant)
        {
            Schicken=Schicken+quant;
            Total_chicken=Total_chicken+quant*250;
            cout<<"\n\n\t\t"<<quant<<" chicken is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qchicken-Schicken<<" chicken remaining in the hotel";
            break;
        }https://www.onlinegdb.com/online_c_compiler#tab-stderr
        
        case 7:
            cout<<"\n\t\tDetails of sales and collection ";
            cout<<"\n\n Number of rooms we had: "<<Qrooms;
            cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
            cout<<"\n\n remaining rooms "<<Qrooms-Srooms;
            cout<<"\n\n Total tooms colllection for the day "<<Total_room;
        
            cout<<"\n\n Number of pastas we had: "<<Qpasta;
            cout<<"\n\n Number of pasta we gave for rent "<<Spasta;
            cout<<"\n\n remaining pasta "<<Qpasta-Spasta;
            cout<<"\n\n Total pastas colllection for the day "<<Total_pasta;
        
            cout<<"\n\n Number of Burgers we had: "<<Qburger;
            cout<<"\n\n Number of Burgers we gave for rent "<<Sburger;
            cout<<"\n\n remaining Burger "<<Qburger-Sburger;
            cout<<"\n\n Total tooms colllection for the day "<<Total_burger;
            
            cout<<"\n\n Number of Noodles we had: "<<Qnoodles;
            cout<<"\n\n Number of Noodles we gave for rent "<<Snoodles;
            cout<<"\n\n remaining Noodles "<<Qnoodles-Snoodles;
            cout<<"\n\n Total Noodles colllection for the day "<<Total_noodles;
            
            cout<<"\n\n Number of Shake we had: "<<Qshake;
            cout<<"\n\n Number of Shake we gave for rent "<<Sshake;
            cout<<"\n\n remaining Shake "<<Qshake-Sshake;
            cout<<"\n\n Total Shake colllection for the day "<<Total_shake;
            
            cout<<"\n\n Number of chicken we had: "<<Qchicken;
            cout<<"\n\n Number of chicken we gave for rent "<<Schicken;
            cout<<"\n\n remaining chicken "<<Qchicken-Schicken;
            cout<<"\n\n Total chicken colllection for the day "<<Total_chicken;
            
            
            cout<<"\n\n\n Total colllection of the day: "<<Total_burger+Total_room+Total_pasta+Total_noodles+Total_shake+Total_chicken;
        
        
        case 8:
            exit(0);
        default: 
            cout<<"\n please select the numbers mentioned above!";
    }
    goto m;
    return 0;
}