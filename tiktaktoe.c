#include"stdio.h"


int a[3][3],i,j,choice;


char c,d;


char input(int c)
{
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            a[i][j]=' ';
        }
    }
    int count=0,n;
    while (count!=6)
    {
        printf("You can enter below positions:\n");
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {

                if(i==0 && j==0)
                {
                    n=1;
                }
                else if(i==0 && j==1)
                {
                    n=2;
                }
                else if(i==0 && j==2)
                {
                    n=3;
                }
                else if(i==1 && j==0)
                {
                    n=4;
                }
                else if(i==1 && j==1)
                {
                    n=5;
                }
                else if(i==1 && j==2)
                {
                    n=6;
                }
                else if(i==2 && j==0)
                {
                    n=7;
                }
                else if(i==2 && j==1)
                {
                    n=8;
                }
                else if(i==2 && j==2)
                {
                    n=9;
                }

                if(a[i][j] == ' ')
                {
                    printf("%d ",n);
                }
            }

        }

    printf("\nEnter your choice :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        if( a[0][0] != ' ')
        {
            printf("\nThis spot is already taken , choose another\n");
            input(c);
        }
        a[0][0]=c;
        count++;
        break;
    case 2:
        if( a[0][1] != ' ')
        {
            printf("\nThis spot is already taken choose , another\n");
            input(c);
        }
        a[0][1]=c;
        count++;
        break;
    case 3:
        if( a[0][2] != ' ')
        {
            printf("\nThis spot is already taken , choose another\n");
            input(c);
        }
        a[0][2]=c;
        count++;
        break;
    case 4:
        if( a[1][0] != ' ')
        {
            printf("\nThis spot is already taken , choose another\n");
            input(c);
        }
        a[1][0]=c;
        count++;
        break;
    case 5:
        if( a[1][1] != ' ')
        {
            printf("\nThis spot is already taken , choose another\n");
            input(c);
        }
        a[1][1]=c;
        count++;
        break;
    case 6:
        if( a[1][2] != ' ')
        {
            printf("\nThis spot is already taken , choose another\n");
            input(c);
        }
        a[1][2]=c;
        count++;
        break;
    case 7:
        if( a[2][0] != ' ')
        {
            printf("\nThis spot is already taken , choose another\n");
            input(c);
        }
        a[2][0]=c;
        count++;
        break;
    case 8:
        if( a[2][1] != ' ')
        {
            printf("\nThis spot is already taken , choose another\n");
            input(c);
        }
        a[2][1]=c;
        count++;
        break;
    case 9:
        if( a[2][2] != ' ')
        {
            printf("\nThis spot is already taken choose another\n");
            input(c);
        }
        a[2][2]=c;
        count++;
        break;
    default:
        printf("Invalid input\n");
        break;
    }
    cinput(d);
    display();
   }
   winlose();
}



void display()
{
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\t%c\t|",a[i][j]);
        }
        printf("\n");
    }
}



void winlose()
{
    if( (a[0][0] == c && a[0][1] == c && a[0][2] == c) ||  ( a[1][0] == c && a[1][1] == c &&  a[1][2] == c ) || ( a[2][0] == c && a[2][1] == c &&  a[2][2] == c) )
    {
        printf("\n\tYOU WIN\n");
    }
    else if( (a[0][0] == c && a[1][0] == c &&  a[2][0] == c) ||  ( a[0][1] == c && a[1][1] == c && a[2][1] == c ) || ( a[0][2] == c &&  a[1][2] == c &&  a[2][2] == c) )
    {
        printf("\n\tYOU WIN\n");
    }
    else if(( a[0][0] == c && a[1][1] == c && a[2][1] == c ) ||  ( a[1][0] == c && a[1][1] == c && a[1][2] == c) || ( a[2][0] == c && a[2][1] == c && a[2][2] == c) )
    {
        printf("\n\tYOU WIN\n");
    }
    else if( (a[0][0] == d && a[0][1] == d && a[0][2] == d) ||  ( a[1][0] == d && a[1][1] == d &&  a[1][2] == d ) || ( a[2][0] == d && a[2][1] == d &&  a[2][2] == d ) )
    {
        printf("\n\tYOU LOSE\n");
    }
    else if( (a[0][0] == d && a[1][0] == d &&  a[2][0] == d ) ||  ( a[0][1] == d && a[1][1] == d && a[2][1] == d ) || ( a[0][2] == d &&  a[1][2] == d &&  a[2][2] == d) )
    {
        printf("\n\tYOU LOSE\n");
    }
    else if( (a[0][0] == d && a[1][1] == d && a[2][1] == d ) ||  ( a[1][0] == d && a[1][1] == d && a[1][2] == d ) || ( a[2][0] == d && a[2][1] == d && a[2][2] == d ) )
    {
        printf("\n\tYOU LOSE\n");
    }
    else
    {
        printf("\n\tMatch draw\n");
    }
}



void cinput(char d)
{
    if( a[1][1] != ' ')
    {
        if( a[0][0] == ' ' )
        {
            a[0][0] = d;
        }
        else if( a[0][2] == ' ' )
        {
            a[0][2] = d;
        }
        else if( a[2][0] == ' ')
        {
            a[2][0] = d;
        }
        else if( a[2][2] == ' ')
        {
            a[2][2] = d;
        }
    }
    else if( a[0][0] != ' ' || a[0][2] != ' ' || a[2][0] !=' ' || a[2][2] != ' ')
    {
        if(a[1][1] == ' ')
        {
            a[1][1]=d;
        }
        else if( a[0][0] == ' ')
        {
            a[0][0]=d;
        }
        else if( a[0][2] == ' ')
        {
            a[0][2]=d;
        }
        else if( a[2][0] == ' ')
        {
            a[2][0]=d;
        }
        else if( a[2][2] == ' ')
        {
            a[0][0]=d;
        }
    }
    else if( a[0][0] != ' ' && a[0][2] != ' ' && a[2][0] != ' ' && a[2][2] != ' ' && a[1][1] != ' ')
    {
        if( a[0][1] == ' ' )
        {
            a[0][1] = d;
        }
        else if( a[1][0] == ' ' )
        {
            a[1][0] = d;
        }
        else if( a[1][2] == ' ')
        {
            a[1][2] = d;
        }
        else if( a[2][1] == ' ')
        {
            a[2][1] = d;
        }
    }
    else if( a[0][0] != ' ' && a[0][2] != ' ' && a[2][0] != ' ' && a[2][2] != ' ' )
    {
        if( a[1][1] == ' ')
        {
            a[1][1]=d;
        }
        else if( a[0][1] == ' ' )
        {
            a[0][1] = d;
        }
        else if( a[1][0] == ' ' )
        {
            a[1][0] = d;
        }
        else if( a[1][2] == ' ')
        {
            a[1][2] = d;
        }
        else if( a[2][1] == ' ')
        {
            a[2][1] = d;
        }

    }
    else if( a[0][1] != ' ' || a[1][0] != ' ' || a[1][2] != ' ' || a[2][1] != ' ')
    {
        if( a[1][1] == ' ')
        {
            a[1][1]=d;
        }
        else if( a[0][0] == ' ' )
        {
            a[0][0] = d;
        }
        else if( a[0][2] == ' ' )
        {
            a[0][2] = d;
        }
        else if( a[2][0] == ' ' )
        {
            a[2][0] = d;
        }
        else if( a[2][2] == ' ' )
        {
            a[2][2] = d;
        }
        else if( a[0][1] == ' ' )
        {
            a[0][1] = d;
        }
        else if( a[1][0] == ' ' )
        {
            a[1][0] = d;
        }
        else if( a[1][2] == ' ')
        {
            a[1][2] = d;
        }
        else if( a[2][1] == ' ')
        {
            a[2][1] = d;
        }
    }

    else if( a[0][1] != ' ' && a[1][0] != ' ' && a[1][2] != ' ' && a[2][1] != ' ' )
    {
        if( a[1][1] == ' ')
        {
            a[1][1]=d;
        }
        else if( a[0][0] == ' ' )
        {
            a[0][0] = d;
        }
        else if( a[0][2] == ' ' )
        {
            a[0][2] = d;
        }
        else if( a[2][0] == ' ' )
        {
            a[2][0] = d;
        }
        else if( a[2][2] == ' ' )
        {
            a[2][2] = d;
        }
    }
}



void main()
{
    printf("Enter character you want among 'x' or 'o' :");
    scanf("%c",&c);
    if( c == 'x')
    {
        d = 'o';
    }
    else if( c == 'o' )
    {
        d = 'x';
    }
    else
    {
        printf("Invalid input");
    }
    input(c);
    display();
}