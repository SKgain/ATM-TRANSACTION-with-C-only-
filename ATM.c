/*ATM TRANSACTION,PROGRAMED BY SAIKAT GAIN(IUBAT)*/

#include<stdio.h>
int main()
{
    printf("\t\t\t\t\t       *****ATM TRANSACTION*****");
    printf("\n\n\n\t\t\t\t\t-----------BANK MANAGER PART-----------");

    int a,b,c,d,e,g,CB,h,p,TB,n,count,option,option1,option2;/*a=ac num,b=ac pass,g=ac bal,d=ac num that client enter,
    d=ac pass that client enter,e= ac bal that client enter,CB=current bal,h=deposit bal,p=change password,TB=after deposit total bal,
    option=choice option in transaction manu,option1= decision between yes or no when u want to withdraw,
    option2= decision between yes or no when u want to again transaction,n=client phn number*/
    char name[100];
    printf("\n INPUT CLIENT NAME: ");
    gets(name);
lavel8:
    count=0;
    printf("\n INPUT CLIENT PHONE NUMBER: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        ++count;
    }
    while(count!=10)
    {
        printf("\n\t\t\t\tERROR..!! PHONE NUMBER MUST BE 11 DEGIT.");

        goto lavel8;
    }

    printf("\n\n INPUT CLIENT ACCOUNT NUMBER: ");
    scanf("%d",&a);
    printf("\n INPUT CLIENT BALLANCE: ");
    scanf("%d",&g);
    printf("\n INPUT CLIENT PASSWORD: ");
    scanf("%d",&b);


    printf("\n\n\n\t\t\t\t\t-------------CLIENT PART------------");

    printf("\n\n ENTER YOUR ACCOUNT NUMBER: ");
lavel1:
    scanf("%d",&c);
    if(c==a)
    {

        printf(" ENTER YOUR PASSWORD: ");
lavel2:
        scanf("%d",&d);
        if(d==b)
        {
lavel5:
            printf("\n\t\t\t\t\t**********TRANSACTION MENU********** ");
            printf("\n 1.WITHDRAW");
            printf("\n 2.CHECK BALANCE");
            printf("\n 3.CASH DEPOSITE");
            printf("\n 4.CHANGE PASSWORD");
            printf("\n 5.EXIT");

            printf("\n CHOICE YOUR OPTION: ");
            scanf("%d",&option);

            switch(option)

            {
            case 1:
lavel3:

                printf("\n HOW MUCH MONEY DO YOU WANT TO WITHDRAW: ");
                scanf("%d",&e);
                if(e<=g && e>0)
                {
                    printf("\n\t\t\t\t\t     'THANK YOU FOR YOUR TRANSACTION' ");
                    CB=g-e;
                    g=CB;
                }
                else
                {
                    printf("\n\t\t\t\t\t      'YOU HAVE NOT ENOUGH BALANCE' ");

                }

                break;
            case 2:
lavel4:
                printf("\n\t\t\t\t\t     'YOUR CURRENT BALANCE IS:%d TK' ",g);
                printf("\n\n DO YOU WANT TO WITHDRAW?");
                printf("\n 1.YES");
                printf("\n 2.NO");
                printf("\n CHOICE YOUR OPTION: ");
                scanf("%d",&option1);
                switch(option1)
                {
                case 1:
                    goto lavel3;
                    break;
                case 2:
                    goto lavel7;
                    break;

                default:
                    printf("\n\t\t\t\t\t      'ERROR..!INVALID OPTION'\n\n\n ");
                    goto lavel5;
                    break;

                }
            case 3:
                printf("\n HOW MUCH MONEY DO YOU WANT TO DEPOSIT: ");
                scanf("%d",&h);
                printf("\n\t\t\t\t\t\t\t 'THANK YOU' \n\t\t\t\t\t <%d TK HAS BEEN ADDED IN YOUR ACCOUNT> ",h);
                TB=g+h;
                g=TB;
                break;

            case 4:
                printf("\n INPUT YOUR NEW PASSWORD: ");
                scanf("%d",&p);

                if(p!=b)
                {
                    printf("\n ENTER YOUR NEW PASSWORD: ");
                    scanf("%d",&d);
                    b=p;
                    if(d==b)
                    {
                        goto lavel5;
                    }
                    else
                    {
                        printf("\n\t\t\t\t\t      'YOUR PASSWORD IS INCORRECT' ");

                        printf("\n PLEASE ENTER YOUR CORRECT PASSWORD: ");
                        goto lavel2;
                    }
                }
                else
                {

                    printf("\n\t\t\t\t\t      'YOUR PASSWORD HAD NOT BE CHANGED' \n\n\n");

                    goto lavel5;
                }
                break;
            case 5:
                goto lavel9;
                break;

            default:
                printf("\n\t\t\t\t\t      'ERROR..!INVALID OPTION'\n\n\n");

                goto lavel5;
                break;


            }

        }
        else
        {
            printf("\n\t\t\t\t\t      'YOER PASSWORD IS INCORRECT' ");
            printf("\n PLEASE ENTER YOUR CORRECT PASSWORD: ");
            goto lavel2;
        }
    }
    else
    {
        printf("\n\t\t\t\t\t     'YOUR ACCOUNT NUMBER IS INCORRECT' ");
        printf("\n PLEASE ENTER YOUR CORRECT ACCOUNT NUMBER: ");
        goto lavel1;
    }
lavel7:
    printf("\n DO YOU WANT TO TRANSACTION AGAIN?");
    printf("\n 1.YES");
    printf("\n 2.NO");
    printf("\n CHOICE YOUR OPTION: ");
    scanf("%d",&option2);
    switch(option2)
    {
    case 1:
        goto lavel5;
        break;
    case 2:
lavel9:
        printf("\n\n\t\t\t\t\t\t\tTHANK YOU\n\t\t\t\t\t\tSTAY HOME,STAY SAFE");
        break;
    default:
        printf("\n\t\t\t\t\t      'ERROR..!INVALID OPTION' ");

        goto lavel7;
        break;
    }
    return 0;
}
