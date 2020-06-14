#include<iostream>
#include<conio.h>
using namespace std;
void winnercheck(char a[],char p1[],char p2[])
{
   if (a[0]==a[1] && a[1]==a[2] )
   {
      if (a[0]=='0')
      {
          cout<<p1<<" WINS";
          
      }
      else
      {
          cout<<p2<<" WINS";
          
      } 
   }
   if(a[3]==a[4]&& a[4]==a[5])
   {
       if (a[3]=='0')
      {
            cout<<p1<<" WINS";
          
      }
      else
      {
          cout<<p2<<" WINS";
          
      } 
   }
   if (a[6]==a[7]&&a[7]==a[8])
   {
              if (a[6]=='0')
      {
             cout<<p1<<" WINS";
          
      }
      else
      {
          cout<<p2<<" WINS";
          
      } 
       
   }
   if (a[0]==a[3]&&a[3]==a[6])
   {
              if (a[3]=='0')
      {
            cout<<p1<<" WINS";
          
      }
      else
      {
          cout<<p2<<" WINS";
          
      } 
   }
   if (a[1]==a[4]&&a[4]==a[7])
   {
           if (a[1]=='0')
      {
          cout<<p1<<" WINS";
          
      }
      else
      {
          cout<<p2<<" WINS";
          
      } 
   }
   if (a[2]==a[5]&&a[5]==a[8])
   {
              if (a[2]=='0')
      {
        cout<<p1<<" WINS";
          
      }
      else
      {
          cout<<p2<<" WINS";
          
      } 
   }
   if (a[0]==a[4]&&a[4]==a[8])
   {
              if (a[0]=='0')
      {
       cout<<p1<<" WINS";
          
      }
      else
      {
          cout<<p2<<" WINS";
          
      } 
   }
   if (a[2]==a[4]&&a[4]==a[6])
   {
              if (a[2]=='0')
      {
         cout<<p1<<" WINS";
          
      }
      else
      {
          cout<<p2<<" WINS";
          
      } 
   }
   int flag=0;
   for (int i = 0; i < 9; i++)
   {
       if (a[i]=='x'||a[i]=='0')
       {
           flag++;
       }
   }
   if (flag==9)
   {
       cout<<"NO WINNER";
       
   }
}
bool check(char a[])
{
   if (a[0]==a[1] && a[1]==a[2] )
   {
      return false;
   }
   if(a[3]==a[4]&& a[4]==a[5])
   {
       return false;
   }
   if (a[6]==a[7]&&a[7]==a[8])
   {
       return false;
   }
   if (a[0]==a[3]&&a[3]==a[6])
   {
       return false;
   }
   if (a[1]==a[4]&&a[4]==a[7])
   {
    return false;
   }
   if (a[2]==a[5]&&a[5]==a[8])
   {
       return false;
   }
   if (a[0]==a[4]&&a[4]==a[8])
   {
       return false;
   }
   if (a[2]==a[4]&&a[4]==a[6])
   {
       return false;
   }
   int flag=0;
   for (int i = 0; i < 9; i++)
   {
       if (a[i]=='x'||a[i]=='0')
       {
           flag++;
       }
   }
   if (flag==9)
   {
       return false;
   }
   
   
   return true;
}
void board(char a[])
{
    //board
    cout<<endl;
   cout<<a[0]<<" "<<"| "<<a[1]<<" "<<"| "<<a[2]<<" ";
   cout<<endl;
   cout<<"__________";
   cout<<endl;
   cout<<a[3]<<" "<<"| "<<a[4]<<" "<<"| "<<a[5]<<" ";
    cout<<endl;
   cout<<"__________";
   cout<<endl;
    cout<<a[6]<<" "<<"| "<<a[7]<<" "<<"| "<<a[8]<<" ";    
}
int main(){
    char a[9]={'1','2','3','4','5','6','7','8','9'};
    char p1[100],p2[100];
    cout<<"ENTER NAME OF PLAYER 1 : ";
    cin.getline(p1,100);
    cout<<"ENTER NAME OF PLAYER 2 : ";
    cin.getline(p2,100);
    cout<<p1<< " -> 0"<<" "<<p2<<" -> X"<<endl;
    int i=0;
    board(a);
    cout<<endl;
    while (check(a)==true)
    {
        if (i%2==0)
        {   cout<<p1<<" ";
            int x;
            cin>>x;
            a[x-1]='0';
        }
        else
        {   cout<<p2<<" ";
            int x;
            cin>>x;
            a[x-1]='x';
        }
        i++;
        board(a);
        cout<<endl;
    }
    winnercheck(a,p1,p2);
    getch();
    return 0;
}