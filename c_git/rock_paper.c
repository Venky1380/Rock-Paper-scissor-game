#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int mode(int i);

int main() {
    int i;
    printf("select mode (2-friend,3-computer):");
    scanf("%d",&i); 

    mode(i);
return 0;
}

int mode(int i){
    int user1,user[4];
while (1){
    if (i < 2 || i > 3){
        printf("Invalid choice! Please enter 2 or 3\n");
        continue;
    }
    char *options[]= {"rock","paper","scissor"};

    printf("enter the choice for user 1:");
    scanf("%d",&user1);
    printf("your choice :%s \n",options[user1]); 
    if (user1 < 0 || user1 > 2){
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        continue;
    }

    if(i==2){
        printf("enter the choice for user 2:");
        scanf("%d",&user[i]); 
        printf("your choice :%s \n",options[user[i]]);
    }

    else if(i==3){
        srand(time(NULL)); 
        user[i] = rand() % 3; 
        printf("computer choice :%s\n",options[user[i]]);
    }

    if (user1 == user[i]){
        printf("It's a draw!\n");
    }
    else if ((user1 == 0 && user[i] == 2) ||(user1 == 1 && user[i] == 0) ||(user1 == 2 && user[i] == 1)){
        printf("game won by user 1\n");
        break;
    }
    else{
        printf("game won by user %d\n",i);
    }
}

return 0;
}