#include<iostream>
#include<conio.h>
using namespace std;
char Grid[]={'0','1','2','3','4','5','6','7','8','9'};
void ShowGrid(){
    system("cls");
    cout<<"\n\n\t\t*****| Welcome to Tic Tac Toe |*****"<<endl;
    cout<<"\n\t\t\t     |      |       "<<endl;
    cout<<"\t\t\t--------------------"<<endl;
    cout<<"\t\t\t  "<<Grid[1]<<"  |   "<<Grid[2]<<"  |   "<<Grid[3]<<"  "<<endl;
    cout<<"\t\t\t     |      |       "<<endl;
    cout<<"\t\t\t--------------------"<<endl;
    cout<<"\t\t\t  "<<Grid[4]<<"  |   "<<Grid[5]<<"  |   "<<Grid[6]<<"  "<<endl;
    cout<<"\t\t\t     |      |       "<<endl;
    cout<<"\t\t\t--------------------"<<endl;
    cout<<"\t\t\t  "<<Grid[7]<<"  |   "<<Grid[8]<<"  |   "<<Grid[9]<<"  "<<endl;
    cout<<"\t\t\t     |      |       "<<endl;
}
int CheckGameStatus(){
    int i;
    if(Grid[1]==Grid[2] && Grid[2]==Grid[3])
        return 1;
    else if(Grid[4]==Grid[5]  && Grid[5]==Grid[6])
        return 1;
    else if(Grid[7]==Grid[8]  && Grid[8]==Grid[9])
        return 1;
    else if(Grid[1]==Grid[4]  && Grid[4]==Grid[7])
        return 1;
    else if(Grid[2]==Grid[5]  && Grid[5]==Grid[8])
        return 1;
    else if(Grid[3]==Grid[6]  && Grid[6]==Grid[9])
        return 1;
    else if(Grid[1]==Grid[5]  && Grid[5]==Grid[9])
        return 1;
    else if(Grid[3]==Grid[5]  && Grid[5]==Grid[7])
        return 1;
    else if(Grid[1]!='1' &&  Grid[2]!='2' &&  Grid[3]!='3' &&  Grid[4]!='4' &&  Grid[5]!='5' &&  Grid[6]!='6' &&  Grid[7]!='7' &&  Grid[8]!='8' &&
             Grid[9]!='9'  )
        return 0;
    else
        return -1;
}
int main(){
    int Player=1;;
    int Choice;
    char Mark;
    int GameStatus;
    do{
        ShowGrid();
        //Player=(Player%2)?1:2;
        if(Player%2)
            Player=1;
        else
            Player=2;

    cout<<"\n\t\tPlayer "<<Player<<" Enter Postion to fill : ";
        cin>>Choice;
        if(Player==1)
            Mark='X';
        else if(Player==2)
            Mark='O';

        if(Choice==1 && Grid[1]=='1')
            Grid[1]=Mark;
        else if(Choice==2 && Grid[2]=='2')
            Grid[2]=Mark;
        else if(Choice==3 && Grid[3]=='3')
            Grid[3]=Mark;
        else if(Choice==4 && Grid[4]=='4')
            Grid[4]=Mark;
        else if(Choice==5 && Grid[5]=='5')
            Grid[5]=Mark;
        else if(Choice==6 && Grid[6]=='6')
            Grid[6]=Mark;
        else if(Choice==7 && Grid[7]=='7')
            Grid[7]=Mark;
        else if(Choice==8 && Grid[8]=='8')
            Grid[8]=Mark;
        else if(Choice==9 && Grid[9]=='9')
            Grid[9]=Mark;
        else{
            cout<<"\t\tInvalid Move."<<endl;
            Player--;
            cin.ignore();
			cin.get();
        }
        GameStatus=CheckGameStatus();
        Player++;
    }while(GameStatus==-1);

    ShowGrid();
    if(GameStatus==1){
        cout<<"\t\tPlayer "<<Player-1<<" is winner."<<endl;
    }
    else
        cout<<"\t\tGame is draw."<<endl;


    return 0;
}
