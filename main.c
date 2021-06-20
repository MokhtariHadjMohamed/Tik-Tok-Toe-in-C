#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

typedef struct TikTok
{
    int place;
    bool play;
    struct TikTok *next;
}TikTok;

int place;

void print_bord(char bord[5][5]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf(" %c",bord[i][j]);
        printf("\n");
    }
}

void put_place(char bord[5][5], int place, char tik, int i){
    switch (place)
    {
        case 1:
            bord[0][0] = tik;
            break;
        case 2:
            bord[0][2] = tik;
            break;
        case 3:
            bord[0][4] = tik;
            break;
        case 4:
            bord[2][0] = tik;
            break;
        case 5:
            bord[2][2] = tik;
            break;
        case 6:
            bord[2][4] = tik;
            break;
        case 7:
            bord[4][0] = tik;
            break;
        case 8:
            bord[4][2] = tik;
            break;
        case 9:
            bord[4][4] = tik;
            break;
        default:
            break;
    }
}

void Test_play(TikTok *head, int j){
    TikTok *p = head;
    while(p != NULL)
    {
        if (j % 2 != 0)
        {
            if (p->place == place && p->play == true)
            {
                printf("%d-Change your move: ",j);
                scanf("%d",&place);
                Test_play(head,j);
            }
        }else{
            if (p->place == place && p->play == true)
            {
                place = rand()%9 + 1;
                Test_play(head,j);
            }
        }
        p = p->next;
    }
}

TikTok *crateTik(){
    TikTok *p = (TikTok* )malloc(sizeof(TikTok* ));
    p->next = NULL;
    return p;
}

void winer(char bord[5][5] , int n){
    char player[] = "Player Win",CPU[] = "CPU Win", 
         player1[] = "Player 1 Win", player2[] = "Player 2 Win";
    if(n == 1){

        if (bord[0][0] == bord[0][2] && bord[0][0] == bord[0][4])
        {
            if (bord[0][0] == 'X')
            {
                printf("%s \n",player);
                exit(0);
            }else if(bord[0][0] == 'O'){
                printf("%s \n",CPU);
                exit(0);
            }
        }else if (bord[0][0] == bord[2][2] && bord[0][0]== bord[4][4])
        {
            if (bord[0][0] == 'X')
            {
                printf("%s \n",player);
                exit(0);
            }else if(bord[0][0] == 'O'){
                printf("%s \n",CPU);
                exit(0);
            }
        }else if (bord[0][0] == bord[2][0] && bord[0][0] == bord[4][0])
        {
            if (bord[0][0] == 'X')
            {
                printf("%s \n",player);
                exit(0);
            }else if(bord[0][0] == 'O'){
                printf("%s \n",CPU);
                exit(0);
            }
        }else if (bord[0][4] == bord[2][4] && bord[0][4] == bord[4][4])
        {
            if (bord[0][4] == 'X')
            {
                printf("%s \n",player);
                exit(0);
            }else if(bord[0][4] == 'O'){
                printf("%s \n",CPU);
                exit(0);
            }
        }else if (bord[0][4] == bord[2][2] && bord[0][4] == bord[4][0])
        {
            if (bord[0][4] == 'X')
            {
                printf("%s \n",player);
                exit(0);
            }else if(bord[0][4] == 'O'){
                printf("%s \n",CPU);
                exit(0);
            }
        }else if (bord[2][0] == bord[2][2] && bord[2][0] == bord[2][4])
        {
            if (bord[2][0] == 'X')
            {
                printf("%s \n",player);
                exit(0);
            }else if(bord[2][0] == 'O'){
                printf("%s \n",CPU);
                exit(0);
            }
        }else if (bord[4][0] == bord[4][2] && bord[4][0] == bord[4][4])
        {
            if (bord[4][0] == 'X')
            {
                printf("%s \n",player);
                exit(0);
            }else if(bord[4][0] == 'O'){
                printf("%s \n",CPU);
                exit(0);
            }
        }else if (bord[0][2] == bord[2][2] && bord[0][2] == bord[4][2])
        {
            if (bord[0][2] == 'X')
            {
                printf("%s \n",player);
                exit(0);
            }else if(bord[0][2] == 'O'){
                printf("%s \n",CPU);
                exit(0);
            }
        }

    }else{

        if (bord[0][0] == bord[0][2] && bord[0][0] == bord[0][4])
        {
            if (bord[0][0] == 'X')
            {
                printf("%s \n",player1);
                exit(0);
            }else if(bord[0][0] == 'O'){
                printf("%s \n",player2);
                exit(0);
            }
        }else if (bord[0][0] == bord[2][2] && bord[0][0]== bord[4][4])
        {
            if (bord[0][0] == 'X')
            {
                printf("%s \n",player1);
                exit(0);
            }else if(bord[0][0] == 'O'){
                printf("%s \n",player2);
                exit(0);
            }
        }else if (bord[0][0] == bord[2][0] && bord[0][0] == bord[4][0])
        {
            if (bord[0][0] == 'X')
            {
                printf("%s \n",player1);
                exit(0);
            }else if(bord[0][0] == 'O'){
                printf("%s \n",player2);
                exit(0);
            }
        }else if (bord[0][4] == bord[2][4] && bord[0][4] == bord[4][4])
        {
            if (bord[0][4] == 'X')
            {
                printf("%s \n",player1);
                exit(0);
            }else if(bord[0][4] == 'O'){
                printf("%s \n",player2);
                exit(0);
            }
        }else if (bord[0][4] == bord[2][2] && bord[0][4] == bord[4][0])
        {
            if (bord[0][4] == 'X')
            {
                printf("%s \n",player1);
                exit(0);
            }else if(bord[0][4] == 'O'){
                printf("%s \n",player2);
                exit(0);
            }
        }else if (bord[2][0] == bord[2][2] && bord[2][0] == bord[2][4])
        {
            if (bord[2][0] == 'X')
            {
                printf("%s \n",player1);
                exit(0);
            }else if(bord[2][0] == 'O'){
                printf("%s \n",player2);
                exit(0);
            }
        }else if (bord[4][0] == bord[4][2] && bord[4][0] == bord[4][4])
        {
            if (bord[4][0] == 'X')
            {
                printf("%s \n",player1);
                exit(0);
            }else if(bord[4][0] == 'O'){
                printf("%s \n",player2);
                exit(0);
            }
        }else if (bord[0][2] == bord[2][2] && bord[0][2] == bord[4][2])
        {
            if (bord[0][2] == 'X')
            {
                printf("%s \n",player1);
                exit(0);
            }else if(bord[0][2] == 'O'){
                printf("%s \n",player2);
                exit(0);
            }
        }
    }
}

void main(){
    TikTok *head,*p,*q;
    p = crateTik();
    head = p;
    p->place = 1;
    p->play = false;
    for (int i = 2; i <= 9; i++)
    {
        q = crateTik();
        q->place = i;
        q->play = false;
        p->next = q;
        p = p->next;
    }
    char bord[5][5]={
        {'1', '|', '2', '|', '3'},
        {'_', '.', '_', '.', '_'},
        {'4', '|', '5', '|', '6'},
        {'_', '.', '_', '.', '_'},
        {'7', '|', '8', '|', '9'},
    };
    int n;
    printf("1 player => 1 \t 2 player => 2 \n");
    do{
        printf("choosing: ");
        scanf("%d",&n);
    }while(n != 1 && n != 2);
// test player
    if(n == 1)
    {
// 1 player
        print_bord(bord);
        printf("%d-choosing your move: ",1);
        scanf("%d",&place);
        p = head;
        for (int i = 1; i <= 9; i++)
        {
            if(p->place == place)
            {
                p->play = true;
                break;
            }else{
                p = p->next;
            }
        }
        put_place(bord,place,'X',1);
        print_bord(bord);
        for (int i = 2; i <= 9; i++)
        {
            p = head;
            winer(bord, n);
            if(i%2 != 0)
            {
                printf("%d-choosing your move: ",i);
                scanf("%d",&place);
                Test_play(head,i);
                for (int i = 1; i <= 9; i++)
                {
                    if(p->place == place)
                    {
                        p->play = true;
                        break;
                    }else{
                        p = p->next;
                    }
                }  
            put_place(bord,place,'X',i);
            print_bord(bord);
            }else{
                printf("%d-CPU \n",i);
                for (int i = 0; i < 1; i++)
                    {
                        place = (rand()%(9 - 1 + 1)) + 1;
                        printf("\n ||%d|| \n",place);
                    }
                Test_play(head,i);
                for (int i = 1; i <= 9; i++)
                {
                    if(p->place == place)
                    {
                        p->play = true;
                        break;
                    }else{
                        p = p->next;
                    }
            }
                put_place(bord,place,'O',i);
                print_bord(bord);
            }
        }
    }else{
// 2 player
        print_bord(bord);
        printf("%d-player 1 choosing your move: ",1);
        scanf("%d",&place);
        p = head;
        for (int i = 1; i <= 9; i++)
        {
            if(p->place == place)
            {
                p->play = true;
                break;
            }else{
                p = p->next;
            }
        }
        put_place(bord,place,'X',1);
        print_bord(bord);
        for (int i = 2; i <= 9; i++)
        {
            p = head;
            winer(bord, n);
            if(i%2 != 0)
            {
                printf("%d-player 1 choosing your move: ",i);
                scanf("%d",&place);
                Test_play(head,i);
                for (int i = 1; i <= 9; i++)
                {
                    if(p->place == place)
                    {
                        p->play = true;
                        break;
                    }else{
                        p = p->next;
                    }
                }  
            put_place(bord,place,'X',i);
            print_bord(bord);
            }else{

                printf("%d-player 2 choosing your move: ",i);
                scanf("%d",&place);
                Test_play(head,i);
                for (int i = 1; i <= 9; i++)
                {
                    if(p->place == place)
                    {
                        p->play = true;
                        break;
                    }else{
                        p = p->next;
                    }
                }  
            put_place(bord,place,'O',i);
            print_bord(bord);
            
            }
        }
    }
}
