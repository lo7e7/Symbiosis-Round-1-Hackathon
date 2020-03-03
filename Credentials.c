#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void hackathon(void);

struct ab{
    char name[100];
    char username[100];
    char password[100];
}f[100];
int num,sum,n,i,j,b=0;
int main(){
{
    FILE *fp = fopen("credentials.txt","r");
    if(fp == NULL)
    {
        //create empty file, so that we can open it
        //in the next execution of this program
        fp= fopen("credentials.txt","w");
        fclose(fp);


    }

     num= fread(f,sizeof(struct ab),100, fp);
    fclose(fp);
    int c,i,q;
    printf("-------------------------------------------------------------------------------------------");
    printf(" \t\t\t\t\t\t\tSARVODAYA HOSPITAL\t\t\t\t\n");
    printf("-------------------------------------------------------------------------------------------\n\n\n");


    while(c!=6)
    {

        printf("**Enter your choice**\n\n1.SignUp\n2. Login\n3. Exit\n\nOption=");
        scanf("%d",&c);//choice for option
        fflush(stdin);//making it clear
        if(c==1)//add
        {
            system("cls");
                printf("How many entry do you want to add=\n");
    scanf("%d",&n);
    sum=n+num;

    for(i=num,j=0; i<sum; i++){
    {
    printf("\n\n");
    fflush(stdin);
    printf("Enter Name");
    gets(f[i].name);
    fflush(stdin);
    printf("Enter Username");
    gets(f[i].username);
    fflush(stdin);
    printf("Enter Password");
    gets(f[i].password);
    fflush(stdin);
        j++;
        b++;
        num++;

}
    }
        }
        else if(c==2)//view
        {
            system("cls");
            char usr[100],pass[100];

    printf("Enter Username =");
    scanf("%s",&usr);
    printf("Enter Password =");
    scanf("%s",&pass);
    for (int i=0;i<=num;i++){
    if(strcmp(usr, f[i].username) == 0){

		if(strcmp(pass,f[i].password) == 0){

			printf("\nUser successfully logged in...");
			hackathon();
			break;
		}else{
			//invalid password. Report it
			continue;
		}
	}else{
		//invalid username. Report it
		printf("\nUsername entered is invalid");
	}
    }
        }

        else if(c==3)
        {
                FILE *fp = fopen("credentials.txt","w");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(f, sizeof(struct ab),num, fp);

    fclose(fp);
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    }
     }

}







