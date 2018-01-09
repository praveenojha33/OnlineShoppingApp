#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream>

using namespace std;
long z=0;
int f=0;
void Main_Menu()
{
system("cls");
cout<<"\n\n\t\t\t***********WELCOME************";
cout<<"\n\n\n\t\t_________________MAIN MENU_______________";
cout<<"\n\n\t\t01. ENTER SHOP";
cout<<"\n\n\t\t02. SEE ITEMS YOU PURCHASED";
cout<<"\n\n\t\t03. ABOUT PROJECT AND CREATORS";
cout<<"\n\n\t\t04. FEEDBACKS";
cout<<"\n\n\t\tPlease Select Your Option (1-4)\n\n\t\tPRESS (0) TO EXIT. ";
};
class Shop
{
public:
   void display()
    {

system("cls");
cout<<"\n\n\t\t\t***********WELCOME IN ELECTRONIC SHOP************";
cout<<"\n\n\n\t\t_________________SHOP MENU_______________";
cout<<"\n\n\t\t01. MOBILES";
cout<<"\n\n\t\t02. LAPTOPS";
cout<<"\n\n\t\t03. MUSIC SYSTEMS";
cout<<"\n\n\t\t04. REFRIGERATOR AND TELEVISION ";
cout<<"\n\n\t\t05. AIR CONDITIONER";
cout<<"\n\n\t\tPlease Select Your Option (1-7)\n\t\t(0) to return to previous menu. ";


    };
};


class Mobiles:public Shop
{
    public:
   void display()
    {
        system("cls");
cout<<"\n\n\n\t\t_________________MOBILES_______________";
cout<<"\n\n\n\t\tPRODUCTS                             PRICE";
cout<<"\n\n\n\n\t\t01.XIOMI REDMI NOTE 3              Rs 12,999";
cout<<"\n\n\n\n\t\t02.MICROMAX CANVAS                 Rs 13,999";
cout<<"\n\n\n\n\t\t03.ASUS ZENFONE                    Rs 9,999";
cout<<"\n\n\n\n\t\t04.SONY ERICSON                    Rs 10,999";
cout<<"\n\n\n\n\t\t05.APPLE IPHONE                    Rs 54,999";
cout<<"\n\n\t\tPlease Press (1-5) to add product to your cart\n\t\t(0) to return to previous menu.";

};
};
class Laptops:public Shop
{
    public:
   void display()
    {
        system("cls");
cout<<"\n\n\n\t\t_________________LAPTOPS_______________";
cout<<"\n\n\n\t\tPRODUCTS                             PRICE";
cout<<"\n\n\n\t\t01.LENOVO IDEAPAD 500              Rs 52,999";
cout<<"\n\n\n\t\t02.HP PAVILION                     Rs 42,999";
cout<<"\n\n\n\t\t03.DELL INSPIRION 500              Rs 62,999";
cout<<"\n\n\n\t\t04.MSI MONSTER                     Rs 1,23,000";
cout<<"\n\n\n\t\t05.APPLE MACBOOK PRO               Rs 84,999";
cout<<"\n\n\t\tPlease Press (1-5) to add product to your cart\n\t\t(0) to return to previous menu.";

};
};
class Ref_Tel:public Shop
{
    public:
   void display()
    {
        system("cls");
cout<<"\n\n\n\t\t_________________REFRIGERATOR AND TV_______________";
cout<<"\n\n\n\t\tPRODUCTS                             PRICE";
cout<<"\n\n\n\t\t01.SONY BRAVIA                     Rs 52,999";
cout<<"\n\n\n\t\t02.LG HD                           Rs 42,999";
cout<<"\n\n\n\t\t03.ONIDA FLATRON                   Rs 62,999";
cout<<"\n\n\n\t\t04.SAMSUNG COOL                    Rs 1,23,000";
cout<<"\n\n\n\t\t05.WHIRPOOL DOUBLE DOOR            Rs 84,999";
cout<<"\n\n\t\tPlease Press (1-5) to add product to your cart\n\t\t(0) to return to previous menu.";

};
};
class Music:public Shop
{
    public:
   void display()
    {
        system("cls");
cout<<"\n\n\n\t\t_________________MUSIC SYSTEMS_______________";
cout<<"\n\n\n\t\tPRODUCTS                             PRICE";
cout<<"\n\n\n\t\t01.LG HOME THEATRE                          Rs 5,999";
cout<<"\n\n\n\t\t02.SAMSUNG SPEAKER                          Rs 4,999";
cout<<"\n\n\n\t\t03.SONY BUFFER                              Rs 6,999";
cout<<"\n\n\n\t\t04.PANASONIC BIG                            Rs 23,000";
cout<<"\n\n\t\tPlease Press (1-4) to add product to your cart\n\t\t(0) to return to previous menu.";

};
};
class AC:public Shop
{
    public:
   void display()
    {
        system("cls");
cout<<"\n\n\n\t\t_________________AIR CONDITIONERS_______________";
cout<<"\n\n\n\t\tPRODUCTS                             PRICE";
cout<<"\n\n\n\t\t01.LLOYD                             Rs 52,999";
cout<<"\n\n\n\t\t02.LG                                Rs 42,999";
cout<<"\n\n\n\t\t03.DAIKIN                            Rs 62,999";
cout<<"\n\n\n\t\t04.VOLTAS                            Rs 1,23,000";
cout<<"\n\n\t\tPlease Press (1-4) to add product to your cart\n\t\t(0) to return to previous menu.";

};
};


int main()
{
M:
char ch;
Main_Menu();
ch=getche();
switch(ch)
{

case '1':
    {

    S1:
    system("cls");

    Shop s;
    s.display();
    char ch1=getche();
    switch(ch1)
    { case '0':
        goto M;
        break;
    case '1':
       {

         M1:
                Mobiles m;
                m.display();
                char ch3=getche();
                switch(ch3)
                {
                case '0':
                    goto S1;
                    break;
                case '1':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nXIOMI REDMI(Rs 12,999)\n";
                        fp.close();
                        z=z+12999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto M1;

                        break;
                    }
                    case '2':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nMICROMAX CANVAS(Rs 13,999)\n";
                        fp.close();
                        z=z+13999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto M1;

                        break;
                    }
                    case '3':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nASUS ZENFONE(Rs 9,999)\n";
                        fp.close();
                        z=z+9999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto M1;

                        break;
                    }
                    case '4':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nSONY ERICSON(Rs 10,999)\n";
                        fp.close();
                        z=z+10999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto M1;

                        break;
                    }
                    case '5':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nAPPLE IPHONE(Rs 54,999)\n";
                        fp.close();
                        z=z+54999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto M1;

                        break;
                    }
                    default:
                        {   system("cls");
                            cout<<"INVALID ENTRY \nPRESS ANY KEY TO RETURN TO PREVIOUS MENU\n";
                            getche();
                            goto M1;
                        }






                }

            }
                    case '2':
                        {
                L1:
                Laptops l;
                l.display();
                char ch3=getche();
                switch(ch3)
                {
                case '0':
                       {

                        goto S1;
                         break;
                       }
                case '1':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nLENOVO IDEAPAD 500(Rs 52,999)\n";
                        fp.close();
                        z=z+52999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto L1;

                        break;
                    }
                    case '2':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nHP PAVILION(Rs 42,999)\n";
                        fp.close();
                        z=z+42999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto L1;

                        break;
                    }
                    case '3':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nDELL INSPIRION 500(Rs 62,999)\n";
                        fp.close();
                        z=z+62999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto L1;

                        break;
                    }
                    case '4':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nMSI MONSTER(Rs 1,23,000)\n";
                        fp.close();
                        z=z+123000;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS EXIT OR ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto L1;

                        break;
                    }
                    case '5':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nAPPLE MACBOOK PRO(Rs 84,999)\n";
                        fp.close();
                        z=z+84999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto L1;

                        break;
                    }
                    default:
                        {   system("cls");
                            cout<<"INVALID ENTRY \nPRESS ANY KEY TO RETURN TO PREVIOUS MENU\n";
                            getche();
                            goto L1;
                        }



                        }

        }
                    case '3':
                        {
                R1:
                Ref_Tel rt;
                rt.display();
                char ch4=getche();
                switch(ch4)
                {
                    case '0':
                        {
                            goto S1;
                            break;
                        }
                    case '1':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nSONY BRAVIA(Rs 52,999)\n";
                        fp.close();
                        z=z+52999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto R1;

                        break;
                    }
                    case '2':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nLG HD(Rs 42,999)\n";
                        fp.close();
                        z=z+42999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto R1;

                        break;
                    }
                    case '3':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nONIDA FLATRON(Rs 62,999)\n";
                        fp.close();
                        z=z+62999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto R1;

                        break;
                    }
                    case '4':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nSAMSUNG COOL(Rs 1,23,000)\n";
                        fp.close();
                        z=z+123000;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto R1;

                        break;
                    }
                    case '5':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nWHIRPOOL DOUBLE DOOR(Rs 84,999)\n";
                        fp.close();
                        z=z+84999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto R1;

                        break;
                    }
                    default:
                        {   system("cls");
                            cout<<"INVALID ENTRY \nPRESS ANY KEY TO RETURN TO PREVIOUS MENU\n";
                            getche();
                            goto R1;
                        }
                }
                        }
                    case '4':
                        {
                            MU1:
                Music mu1;
                mu1.display();
                char ch5=getche();
                switch(ch5)
                {
                    case '0':
                        {
                            goto S1;
                            break;
                        }
                    case '1':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nLG HOME THEATRE (Rs 5,999)\n";
                        fp.close();
                        z=z+5999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto MU1;

                        break;
                    }
                    case '2':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nLG HOME THEATRE(Rs 4,999)\n";
                        fp.close();
                        z=z+4999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto MU1;

                        break;
                    }
                    case '3':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nSONY BUFFER(Rs 6,999)\n";
                        fp.close();
                        z=z+6999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto MU1;

                        break;
                    }
                    case '4':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nPANASONIC BIG(Rs 23,000)\n";
                        fp.close();
                        z=z+23000;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto MU1;

                        break;
                    }

                    default:
                        {   system("cls");
                            cout<<"INVALID ENTRY \nPRESS ANY KEY TO RETURN TO PREVIOUS MENU\n";
                            getche();
                            goto MU1;
                        }
                }
                        }
                    case '5':
                        {
                AC1:
                AC ac;
                ac.display();
                char ch6=getche();
                switch(ch6)
                {
                    case '0':
                        {
                            goto S1;
                            break;
                        }
                    case '1':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nLLOYD (Rs 52,999)\n";
                        fp.close();
                        z=z+52999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto AC1;

                        break;
                    }
                    case '2':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nLG(Rs 42,999)\n";
                        fp.close();
                        z=z+42999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto AC1;

                        break;
                    }
                    case '3':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nDAIKIN(Rs 62,999)\n";
                        fp.close();
                        z=z+62999;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto AC1;

                        break;
                    }
                    case '4':
                    {
                        system("cls");
                        fstream fp;
                        fp.open("list.txt",ios::in|ios::out|ios::app);
                        fp<<"\nVOLTAS(Rs 1,23,000)\n";
                        fp.close();
                        z=z+123000;
                        cout<<"THANKS FOR YOUR PURCHASE\n"<<endl;
                        cout<<"THE PRODUCT HAS BEEN ADDED TO YOUR CART\n\n\n";
                        cout<<"PRESS ANY KEY TO RETURN PREVIOUS RETURN TO PREVIOUS MENU\n";
                        char ch31=getche();
                        if(ch31!='0')
                        goto AC1;

                        break;
                    }

                    default:
                        {   system("cls");
                            cout<<"INVALID ENTRY \nPRESS ANY KEY TO RETURN TO PREVIOUS MENU\n";
                            getche();
                            goto AC1;
                        }
                }
                        }

        }



} case '2':
    {   system("cls");
        if(f==0)
        {
            fstream fl;
        fl.open("list.txt",ios::in|ios::out|ios::app);
        fl<<"\nYour Total:"<<z<<endl;
        fl.close();
        }
        else
            cout<<"WE HAVE RECIEVED YOUR PAYMENT.\n\n";
        cout<<"Here are your products:\n";
        fstream fm;
        fm.open("list.txt");

        char c;
        while((c=fm.get())!=EOF)
            cout<<c;
        fm.close();
        if(f==0)
        cout<<"\n\nPRESS (1) TO PAY OR (0) TO RETURN TO MAIN MENU.";
        char qw=getche();
        switch(qw)
            {
            case '1':
                {   PAY:
                    system("cls");
                    long z1;
                    int cvv,r,sm=0,pass;
                    string st;
                    cout<<"ENTER YOUR CARD NUMBER:\n";
                    cin>>z1;
                    cout<<"ENTER YOUR CARD EXPIRY DATE(MM/YYYY):\n";
                    cin>>st;
                    cout<<"ENTER YOUR CVV:\n";
                    cin>>cvv;
                    int q1=cvv;
                    while(q1>0)
                    { r=q1%10;
                      sm=sm*10+r;
                      q1=q1/10;

                    }
                    cout<<"ENTER YOUR PASSWORD:\n";
                    cin>>pass;
                    if(sm==pass)
                    {
                        system("cls");
                        cout<<"\n\n\t\tTHANKS FOR SHOPPING FROM US\n\n";
                        cout<<"\t\tRs "<<z<<" HAS BEEN RECIEVED SUCCESSFULLY\n";
                        cout<<"\n\t\tPRESS ANY KEY TO RETURN TO SHOP.";
                        f=1;
                        getche();
                        goto M;
                    }
                    else
                    {
                        cout<<"YOUR PASSWORD WAS WRONG PRESS ANY KEY TO PAY AGAIN OR \n(0) TO RETURN TO MAIN MENU";
                        char p=getche();
                        switch(p)
                        { case '0':
                            goto M;

                    default:
                        goto PAY;}

                    }
                }
            default:
                goto M;
            }
    }
                    case '3':
                        {   system("cls");
                            cout<<"\n\n\t\t******ONLINE PURCHASE SYSTEM******";
                            cout<<"\n\n\t\t______A PROJECT BY:-______________";
                            cout<<"\n\n\t\t_NAME_                          _ROLL NO._";
                            cout<<"\n\n\t\t01.PRATYAKSHA SRIVASTAVA         2016021061";
                            cout<<"\n\n\t\t02.PRAVEEN OJHA                  2016021062";
                            cout<<"\n\n\t\t03.PRAVEEN PANDEY                2016021063";
                            cout<<"\n\n\t\tPress any key to return\n";
                            getche();
                            goto M;
                        }
                    case '4':
                        {   system("cls");
                            cout<<"GIVE YOUR VALUABLE FEEDBACK(PRESS ENTER->CTRL+Z->ENTER TO STOP):\n";
                            fstream ft;
                            ft.open("feedback.txt");
                            char c1;
                            while((c1=cin.get())!=EOF)
                                ft.put(c1);
                            ft.close();
                            cout<<"THANKS FOR YOUR FEEDBACK PRESS ANY KEY TO RETURN";
                            getche();
                            goto M;



                        }
                    case '0':
                        break;

   default:
                        {   system("cls");
                            cout<<"INVALID ENTRY \nPRESS ANY KEY TO RETURN TO PREVIOUS MENU\n";
                            getche();
                            goto M;

                        }

}
return 0;
}
