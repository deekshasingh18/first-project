#include  
#include  
#include 

void header()
{
printf("\nFlight                        Price                      Seating Capacity                  Available Seats\n");
}
void option1()
{
printf("\nFlights on January 12,2023    Price                      Seating Capacity                  Available Seats\n");
printf("1. Ahmedabad To BengalurU       4,500                            100                                  6\n");
printf("2. Ahmedabad To Mumbai          5,000                            100                                 24\n");
}         

void option2()
{
printf("\nFlights on January 13,2023    Price                      Seating Capacity                  Available Seats \n");
printf("1. Ahmedabad To Bengaluru       3,700                            100                                 18\n");
printf("2. Ahmedabad To Mumbai          4,400                            100                                 65\n");
}

void option3()
{
printf("\nFlights on January 12,2023    Price                      Seating Capacity                  Available Seats\n");
printf("1. Bengaluru To Ahmedabad       4,400                            100                                 16\n");
printf("2. Mumbai To Ahmedabad          5,500                            100                                 24\n");
}

void option4()
{
printf("\nFlights on January 13,2023    Price                      Seating Capacity                  Available Seats\n");
printf("1. Bengaluru To Ahmedabad       3,900                            100                                 18\n");
printf("2. Mumbai To Ahmedabad          4,700                            100                                 65\n");
}

struct user{
char name[20];
int age;
};
int main()
{
char username [50], pw[50], adminu[50]="deekshas", adminpw[50]="12345678"; 
int trip, date, date2, a,x,flight;
float total;
printf("Enter name:\n"); 
scanf("%s", username);
printf("Welcome back %s", username); 
printf("\nEnter username: "); 
scanf("%s", username);
printf("\nEnter password: "); 
scanf("%s",pw);
if (strcmp(username, adminu)==0 && strcmp(pw, adminpw)==0)
{
printf("\n\n\t\t\t\t Welcome to Flyhigh Airlines \t\t\t\t");
printf("\nChoose if one way trip or roundtrip: "); 
printf("\n1. One way trip (n2. Roundtrip\n");
scanf("\n%d", &trip);
printf("\nChoose Date of Journey: ");
printf("\n1. January 12,2023\n2. January 13,2023\n");
scanf("%d", &date);

switch (trip)
{
case 1:
{
if (date==1)
{
printf("\nJanuary 12,2023\n");
option1();
printf("\nPlease select which flight you will book: ");
scanf("%d", &flight);
printf("\nHow many tickets will you get?:");
scanf("%d", &x);
for (a=1; a=x; a++)
{
if (flight==1)
{
total=4500*x;
}
else if (flight==2)
{
total=5000*x;
}
else
{
printf("Invalid flight no");
}

}
}
else if (date==2)
{
 printf("\nJanuary 13,2023\n"); 
 option2();
 printf("\nPlease select which flight you will book: ");
 scanf("%d", &flight);
 printf("\nHow many tickets will you get?: ");
scanf("%d", &x);
for (a=1; a=x; a++)
{
 if (flight==1)
 {
 total=3700*x;
 }
 else if (flight==2)
 {
    total=4000*x;
 }
   else
 {
 printf("Invalid flight no");
 }
}
}

else printf("\nInvalid");
break;

case 2:
if (date==1)
{
printf("\nJanuary 12,2023\n");
printf("\nChoose date of return: \n1. January 12,2023\n2. January 13,2023\n"); 
scanf("%d", &date2);
printf("\nPlease select which flight you will book: ");
scanf("%d", &flight);
printf("\nHow many tickets will you get (excluding the return trip)?: ");
scanf("%d", &x);

for (a=1; a<=x;a++)
{
    if(date2==1)
    {
      option3():
    }
    if (flight==1)
     {
      total=4400*x;
     }
 else if (flight==2)
 {
 total=5500*x;
 }
 else
 {
 printf("Invalid flight no");
 }
}
else if (date2==2)
 {
  option4();
  if (flight==1)
  {
   total=3900*x;
  }
   else if (flight==2)
  {
  total=4700*x;
  }
  else
  {
    printf("Invalid flight no");
  }  
 }
}
{
else
printf("\nInvalid");
}
break;
break;
}
default:
break;
}
printf("\n");
}
struct user[x];
for(a=1;a<=x;a++)
{
    printf("\nEnter the name of person %d:",a); 
    scanf("%s",u[a].name);
    printf("\nEnter the age of person %d:",a); 
    scanf("%d",&u[a].age);
}
printf("\nSummary: ");
printf("\nDate of journey: %d", date); 
printf("\nDetails of Ticket no. [%d]", a); 
printf("\nName:%s",u[a].name);
printf("\nAge: %d",u[a].age);
printf("\nFlight no.: %d\n", flight);
}
  printf("\nTotal number of tickets: %d\n", x); 
 printf("\nTotal Price: %0.2f", total);

else
{
printf("\nInvalid login");
}
return 0;
}