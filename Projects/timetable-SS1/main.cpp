#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<direct.h>
#include<process.h>
#include<time.h>
#include<string.h>
#include<windows.h>


void add();
void search();
void list(); 
void del(); 
void modify();
void rec(); 
void mainpage(); 
int logscreen();
void callExit();
void menu();
void date();
void empty();
void title();

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}



struct information
{
  char day[15]; 
  char room[30];  
  char first_per[10];  
  char sec_per[35];  
  char thir_per[50];  
  char four_per[30];  
  char fifth_per[15]; 
  char six_per[15];  
};
struct information c;
FILE *fpt;

void main()
{
  system("cls");
  mainpage();
  logscreen();
}

void date()
{
  time_t T= time(NULL);
  struct  tm tm = *localtime(&T);
  printf("\n\n\n");
  printf("\t\t\t\t\t   Date:%02d/%02d/%04d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
}


void title()
{
  printf("\n\n\n");
  printf("\t\t\t\t\t");
  printf("\n");
  printf("\t\t\t\t    ---------------------------\n");
  printf("\t\t\t\t    |TIMETABLE MANAGEMENT SYSTEM|\n");
  printf("\t\t\t\t    ---------------------------\n");
  printf("\n\n");
  printf("\t\t\t\t");

}

void mainpage()
{
  int process=0;
  system("cls");
  date();
  printf("\n");
  printf("\t\t\t\t    ---------------------------\n");
  printf("\t\t\t\t    |TIMETABLE MANAGEMENT SYSTEM|\n");
  printf("\t\t\t\t    ---------------------------\n");
  printf("\n\n\n");
  printf("\t\t\t\t");
  printf("Prepared By    ");
  printf(":");
  printf("   Abeer Zafar");
  printf("\n\n");
  printf("\t\t\t\t");
  printf("Mini Project   ");
  printf(":");
  printf("  TIMETABLE Management System");
  printf("\n\n");
  printf("\t\t\t\t");
  printf("\n\n");
  printf("\t\t\t\t    Press Enter to continue......");
  printf("\n\n");
  getchar();
  printf("\t\t\t\tLoading");

  for(process=0;process<25;process++)
  {
    delay(150);
    printf(".");
  }
}

int logscreen()
{
  char username[30];
  char password[30];
  int try = 0;
  int true = 1;
  do
  {
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t");
    printf("Username: ");
    scanf("%s",username);
    printf("\t\t\t\t\t");
    printf("\n");
    printf("\t\t\t\t\t");
    printf("Password: ");
    scanf("%s",password);
    if(strcmp(username,"admin")==0 && strcmp(password,"pass")==0)
      {
        printf("\n\n");
        printf("\t\t\t\t");
        printf("You are accessed to the system!\n\n");
        printf("\t\t\t\t   Press Enter to continue...");
        fflush(stdin);
        getchar();
        menu();
        system("cls");
        getchar();
        true =0;
      }
      else
      {
        system("cls");
        try = try+1;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("No. of attempts remain: %d",3-try);
        fflush(stdin);
        getchar();
        if(try>=3)
        {

          printf("\t\t\t\t\t\t");
          printf("\n");
          printf("\t\t\t\t");
          printf("   No permission to enter the system!" );
          getchar();
          callExit();
          getchar();
      ;
      }
  } 
 }
 while(true==1);
}


void menu()
{
  int input;
  system("cls");
  title();
  printf(" 1. Enter new Records\n\n");
  printf("\t\t\t\t");
  printf(" 2. Modify Records\n\n");
  printf("\t\t\t\t");
  printf(" 3. Delete Records\n\n");
  printf("\t\t\t\t");
  printf(" 4. Search and view Records\n\n");
  printf("\t\t\t\t");
  printf(" 5. Exit\n\n");
  printf("\t\t\t\t");
  printf("Choose options:[1/2/3/4/5]:");
  fflush(stdin);
  scanf("%d",&input);
  switch(input)
  {
    case 1:
    {
      system("cls");
      add();
    }
    break;

    case 2:
    {
      system("cls");
      modify();
      getchar();
    }
    break;

    case 3:
    {
      system("cls");
      del();
    }
    break;

    case 4:
    {
      system("cls");
      search();
    }break;

    case 5:
    {
      system("cls");
      printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
      fflush(stdin);
      printf("\t\t\t\t");
      printf("\n\n\n\n");
      exit(0);
    }
    break;

    default:
    {
      fflush(stdin);
      printf("\n\n\n");
      printf("\t\t\t\t");
      printf("      Invalid input!");
      printf("\n\n");
      printf("\t\t\t\t");
      printf("Press Enter to choose again...");
      getchar();
      menu();
    }
  }
  }
  void add()
  {
    char input;
    system("cls");
    printf(" ");
    printf("\n");
    printf("\t\t\t\t");
    printf("\n");
    printf("\t\t\t\t");
    printf("\n");
    printf("\t\t\t\t");
    printf("\n");
    printf("\n\n\n\n");
    printf("\t\t\t\t");
    printf("Enter The Information Below: \n\n");
    printf("\t\t\t\t");
    printf("Enter the Day : ");

    fflush(stdin);
    scanf("%s",c.day);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Enter Room no ");
    fflush(stdin);
    scanf("%[^\n]s",c.room);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Enter the name of th Teacher in First period ");
    fflush(stdin);
    scanf("%[^\n]s",c.first_per);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Enter the name of th Teacher in Second period ");
    fflush(stdin);
    scanf("%[^\n]s",c.sec_per);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Enter the name of th Teacher in Third period ");
    fflush(stdin);
    scanf("%[^\n]s",c.thir_per);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Enter the name of th Teacher in Fourth period ");
    fflush(stdin);
    scanf("%[^\n]s",c.four_per);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Enter the name of th Teacher in Fifth period ");
    fflush(stdin);
    scanf("%s",c.fifth_per);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Enter the name of th Teacher in Sixth period ");
    fflush(stdin);
    scanf("%s",c.six_per);
    fflush(stdin);
    fpt=fopen("data.txt","a");
    fwrite(&c,sizeof(c),1,fpt);
    fclose(fpt);
    printf("\n\n");
    printf("\t\t\t\t");
    printf("Record added successfully!!");

    printf("\n\n");
    printf("\t\t\t\t");
    printf("Do you want to add more?(Y/N)");
    scanf("%s",&input);
    if(input=='Y' || input=='y')
    {
      add();
    }
    else
    menu();
    getchar();
    }

      void callExit()
      {
       system("cls");
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
       printf("\t\t\t\t\t");
       fflush(stdin);
       printf("You are out of the System.");
       printf("\n\n");
       printf("\t\t\t\t");
       printf("   Press Enter to Continue Exit Program...");
       getchar();
       exit(0);
      }

      void search()
      {
        int ch;
        char sid[30];
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");

        fflush(stdin);
        printf("Enter Room no:");
        scanf("%[^\n]s",sid);

        fpt=fopen("data.txt","r");
        while (fread(&c, sizeof(c), 1, fpt)==1)
        {
          if(strcmp(sid,c.room)==0)
          {
            ch=1;
            break;
          }
        }
        if(ch==1)
        {
          system("cls");
          printf("\n\n\n\n\n\n\n");
          printf("\t\t\t\t\t");

          printf("<<==Search Succesfull==>>");
          fflush(stdin);
          getchar();
          list(); //display the record
          printf("\n\n\n");
          printf("\t\t\t\t\t");
          printf("Press Enter For Main Menu...");
          getchar();
          menu();
        }
        else
        {
          system("cls");
          getchar();
          printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
          printf("\t\t\t\t\t");

          printf("<<--Record Not Found-->>");
          printf("\n\n\n");
          printf("\t\t\t\t\t");
          printf("Press Enter For Main Menu...");
          getchar();
          menu();
        }

        fclose(fpt);
      }


      void list()
{
      printf(" ");
      printf("\n");
      printf("\t\t\t\t");

      printf("\t\t\t\t");
      printf("\n");
      printf("\t\t\t\t");
      printf("\n");

      printf("\t\t\t\t");


      printf("\tDay      :  %s\n\n",c.day);
      printf("\t\t\t\t");
      printf("room       : %s  ",c.room);

      printf("\n\n");
      printf("\t\t\t\t");
      printf("First           : %s  ",c.first_per);

      printf("\n\n");
      printf("\t\t\t\t");
      printf("Second Period          : %s  ",c.sec_per);

      printf("\n\n");
      printf("\t\t\t\t");
      printf("Third Period        : %s  ",c.thir_per);

      printf("\n\n");
      printf("\t\t\t\t");
      printf("Fourth Period   : %s  ",c.four_per);

      printf("\n\n");
      printf("\t\t\t\t");
      printf("Fifth Period     : %s  ",c.fifth_per);

      printf("\n\n");
      printf("\t\t\t\t");
      printf("Sixth Period       : %s  ",c.six_per);

}

       void del()
       {
         FILE *fpt,*temp;
         int ch;
         char sid[30];

         system("cls");
         printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
         printf("\t\t\t\t\t");
         printf("Enter Room");
         fflush(stdin);
         scanf("%[^\n]s",sid);
         fflush(stdin);
         printf("\t\t\t\t\t");
         printf("\n");
         printf("\t\t\t\t\t");
         printf("Record Deleted Successfully.\n");
         printf("\n");
         printf("\t\t\t\t\t");
         printf("Press Enter For Main Menu...");
         getchar();
         menu();
         fpt=fopen("data.txt","r");
         temp = fopen("temp.txt", "w");
         while (fread(&c, sizeof(c), 1, fpt)==1)
         {
           if(strcmp(sid,c.room)==0)
           {
             {
                 fwrite(&c,sizeof(c),1,temp);
           }
         }
         fclose(fpt);
         fclose(temp);
         remove("data.txt");
         rename("temp.txt","data.txt");
         }
       }

       

      void empty()
      {
        strcpy(c.day," ");
        strcpy(c.room," ");
        strcpy(c.first_per," ");
        strcpy(c.sec_per," ");
        strcpy(c.thir_per," ");
        strcpy(c.four_per," ");
        strcpy(c.fifth_per," ");
        strcpy(c.six_per," ");
      }

void modify()
{
  char mid[30];

  int found=0;
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
  printf("\t\t\t\t\t");
  fflush(stdin);
  printf("Enter Room ");
  scanf("%[^\n]s",mid);
  fflush(stdin);
  FILE *fpt, *temp;
  temp =fopen("temp.txt","w");
  fpt = fopen("data.txt","r+");
  while(fread(&c, sizeof(c),1,fpt) == 1)
  {
      if(strcmp(mid, c.room) == 0)
      {
          fflush(stdin);
          system("cls");
          printf("\n\n\n\n\n\n\n\n\n\n\n");
          printf("\t\t\t\t\t");
          printf("<<<==Old Record==>>>");
          printf("\n");
          printf("\t\t\t\t\t");
          list();
          printf("\n\n");
          printf("\t\t\t\t\t");

          printf("Press Enter to modify the record...");


          getchar();
          system("cls");
          rec(); 
          fseek(fpt, ftell(fpt) - sizeof(c),0);
          fwrite(&c, sizeof(c), 1, fpt); 
          found = 1;
          printf("\n\n");
          printf("\t\t\t\t\t");
          printf("Record Saved !!!");
          getchar();
        }
        fclose(fpt);
        menu();
      }

      if(!found)
      {
        {
          system("cls");
          delay(200);
          fflush(stdin);

          printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
          printf("\t\t\t\t\t");
          fflush(stdin);

          printf("<<--Record Not Found-->>");
          getchar();
          menu();
        }
      }
      fclose(fpt);
}
       void rec()
       {
         printf(" ");
         printf("\n");
         printf("\t\t\t\t");
         printf("\n");
         printf("\t\t\t\t");
         printf("\n");
         printf("\t\t\t\t");
         printf("\n");
         printf("\n\n\n\n");
         printf("\t\t\t\t");

         printf("Enter The Information Below: \n\n");
         printf("\t\t\t\t");
         printf("\tID      :  %s\n\n",c.day);
         printf("\t\t\t\t");
         printf("Room      :  ");
         fflush(stdin);
         scanf("%[^\n]s",c.room);
         printf("\n\n");
         printf("\t\t\t\t");
         printf("First Period           :  ");
         fflush(stdin);
         scanf("%[^\n]s",c.first_per);
         printf("\n\n");
         printf("\t\t\t\t");
         printf("Second Period          :  ");
         fflush(stdin);
         scanf("%[^\n]s",c.sec_per);
         printf("\n\n");
         printf("\t\t\t\t");
         printf("Third Period        :  ");
         fflush(stdin);
         scanf("%[^\n]s",c.thir_per);
         printf("\n\n");
         printf("\t\t\t\t");
         printf("Fourth Period   :  ");
         fflush(stdin);
         scanf("%[^\n]s",c.four_per);
         printf("\n\n");
         printf("\t\t\t\t");
         printf("Fifth Period       :  ");
         fflush(stdin);
         scanf("%s",c.fifth_per);
         printf("\n\n");
         printf("\t\t\t\t");
         printf("Sixth Period       :  ");
         fflush(stdin);
         scanf("%s",c.six_per);
         fflush(stdin);
}
