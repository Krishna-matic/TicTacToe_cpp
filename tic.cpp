#include <iostream>
#include <array>
using namespace std;
int main(){
    int r1,c1,i=0;
    char ele;
    array<array<char,3>,3>a;
    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            a[r][c]='_';
        }
    }
    bool player=true;
    while(i<9){
        cout<<"Enter the number of row(0-2): ";
        cin>>r1;
        cout<<"Enter the number of coloumn(0-2): ";
        cin>>c1;
        cout<<"Enter the element(X/O): ";
        cin>>ele;
        if(a[r1][c1] != '_'){
            cout << "Cell already filled. Try again.\n";
            continue;
        }
        a[r1][c1]=ele;
        cout << "Board after " << i+1 << " move :\n";
        for(int row = 0; row < 3; row++) {
            for(int col = 0; col < 3; col++) {
                cout << a[row][col] << " ";
            }
            cout << endl;
        }
        if(a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X'){
            cout<<"Player 1 wins";
            player=false;
            break;
        }else if(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X'){
            cout<<"Player 1 wins";
            player=false;
            break;
        }else if(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X'){
            cout<<"Player 1 wins";
            player=false;
            break;
        }else if(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X'){
            cout<<"Player 1 wins";
            player=false;
            break;
        }else if(a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X'){
            cout<<"Player 1 wins";
            player=false;
            break;
        }else if(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X'){
            cout<<"Player 1 wins";
            player=false;
            break;
        }else if(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X'){
            cout<<"Player 1 wins";
            player=false;
            break;
        }else if(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X'){
            cout<<"Player 1 wins";
            player=false;
            break;
        }else if(a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O'){// player 2 starts.
            cout<<"Player 2 wins";
            player=false;
            break;
        }else if(a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O'){
            cout<<"Player 2 wins";
            player=false;
            break;
        }else if(a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O'){
            cout<<"Player 2 wins";
            player=false;
            break;
        }else if(a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O'){
            cout<<"Player 2 wins";
            player=false;
            break;
        }else if(a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O'){
            cout<<"Player 2 wins";
            player=false;
            break;
        }else if(a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O'){
            cout<<"Player 2 wins";
            player=false;
            break;
        }else if(a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O'){
            cout<<"Player 2 wins";
            player=false;
            break;
        }else if(a[0][2]=='O'&&a[1][1]=='O'&&a[2][0]=='O'){
            cout<<"Player 2 wins";
            player=false;
            break;
        }
        i++;
    }
    if(player==true&&i==9){
        cout<<"It's a draw.";
    }
    return 0;
}