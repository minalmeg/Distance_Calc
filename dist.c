#include <stdio.h>
#include <stdlib.h>
 
typedef struct node
{
    int val;
    struct node *next;
    struct node *prev;    
}n;

n *new, *ptr, *prev;
n *first = NULL, *last = NULL;
int number = 0;

n* create_node(int);
int insert_at_end(int);
int search(int);
int datafeedingflr0();
int datafeedingflr1();
int datafeedingflr2();
int datafeedingflr3();
int datafeedingflr4();
int flr1info();
int flr2info();
int flr3info();
int flr4info();
int flr0info();

int main()
{   
	int n, dest,d,loc,l,c;
	printf("ENTER YOUR CURRENT FLOOR :\n");
	scanf("%d",&n);
	switch(n)
	{	

		case 0 : datafeedingflr0();
				 flr0info();
				 printf("ENTER YOUR LOCATION : \n");
				 scanf("%d",&loc);
				 l=search(loc);
				 printf("ENTER YOUR DESTINATION : \n");
				 scanf("%d",&dest);
				 d=search(dest);
				 c=d-l;
				 printf("Distance to be covered : %d meters \n", c*50);
				 break;
		
        case 1 : datafeedingflr1();
				 flr1info();
				 printf("ENTER YOUR LOCATION : \n");
				 scanf("%d",&loc);
				 l=search(loc);
				 printf("ENTER YOUR DESTINATION : \n");
				 scanf("%d",&dest);
				 d=search(dest);
				 c=d-l;
				 printf("Distance to be covered : %d meters \n", c*50);
				 break;

		case 2 : datafeedingflr2();
				 flr2info();
				 printf("ENTER YOUR LOCATION : \n");
				 scanf("%d",&loc);
				 l=search(loc);
				 printf("ENTER YOUR DESTINATION : \n");
				 scanf("%d",&dest);
				 d=search(dest);
				 c=d-l;
				 printf("Distance to be covered : %d meters \n", c*50);
				 break;

		case 3 : datafeedingflr3();
				 flr3info();
				 printf("ENTER YOUR LOCATION : \n");
				 scanf("%d",&loc);
				 l=search(loc);
				 printf("ENTER YOUR DESTINATION : \n");
				 scanf("%d",&dest);
				 d=search(dest);
				 c=d-l;
				 printf("Distance to be covered : %d meters \n", c*50);
				 break;

		case 4 : datafeedingflr4();
				 flr4info();
				 printf("ENTER YOUR LOCATION : \n");
				 scanf("%d",&loc);
				 l=search(loc);
				 printf("ENTER YOUR DESTINATION : \n");
				 scanf("%d",&dest);
				 d=search(dest);
				 c=d-l;
				 printf("Distance to be covered : %d meters \n", c*50);
				 break;

		default : printf("INVALID FLOOR");
				  break;
		
	}
return 0;
}


n* create_node(int info)
{
    number++;
    new = (n *)malloc(sizeof(n));
    new->val = info;
    new->next = NULL;
    new->prev = NULL;
    return new;
}

int insert_at_end(int info)
{   
	new = create_node(info);
 
    if (first == last && first == NULL)
    {
        
        first = last = new;
        first->next = last->next = NULL;    
        first->prev = last->prev = NULL;
        return 0;
    }
    else
    {
        last->next = new;
        new->prev = last;
        last = new;
        first->prev = last;
        last->next = first;
        return -1;
    }
}



int search(int key)
{
    int count = 0, i ;
 
 
    if (first == last && first == NULL)
        printf("\nlist is empty no elemnets in list to search");
    else
    {
        for (ptr = first,i = 0;i < number;i++,ptr = ptr->next)
        {
            count++;
            if (ptr->val == key)
            {
             
                return count;
               
            }    
        }
    }
    return -1;
}

int datafeedingflr0()
{
	insert_at_end(1);
	insert_at_end(2);
	insert_at_end(3);
	insert_at_end(4);
	insert_at_end(5);
	insert_at_end(6);
	insert_at_end(7);
	insert_at_end(8);
	insert_at_end(9);
	insert_at_end(10);
	insert_at_end(11);
	insert_at_end(12);
	insert_at_end(13);
	insert_at_end(14);
	insert_at_end(15);
	insert_at_end(16);
	insert_at_end(17);
	insert_at_end(18);
	insert_at_end(19);
	insert_at_end(20);
	insert_at_end(21);
	insert_at_end(22);
	return 0;
}

int datafeedingflr1()
{
	insert_at_end(1);
	insert_at_end(2);
	insert_at_end(3);
	insert_at_end(4);
	insert_at_end(5);
	insert_at_end(6);
	insert_at_end(7);
	insert_at_end(8);
	insert_at_end(9);
	insert_at_end(10);
	insert_at_end(11);
	insert_at_end(12);
	insert_at_end(13);
	insert_at_end(14);
	insert_at_end(15);
	insert_at_end(16);
	insert_at_end(17);
	insert_at_end(18);
	insert_at_end(19);
	insert_at_end(20);
	insert_at_end(21);
	insert_at_end(22);
	insert_at_end(23);
	return 0;
}


int datafeedingflr4()
{
	insert_at_end(1);
	insert_at_end(2);
	insert_at_end(3);
	insert_at_end(4);
	insert_at_end(5);
	insert_at_end(6);
	insert_at_end(7);
	return 0;
}

int datafeedingflr3()
{
	insert_at_end(1);
	insert_at_end(2);
	insert_at_end(3);
	insert_at_end(4);
	insert_at_end(5);
	insert_at_end(6);
	insert_at_end(7);
	insert_at_end(8);
	insert_at_end(9);
	insert_at_end(10);
	insert_at_end(11);
	insert_at_end(12);
	insert_at_end(13);
	insert_at_end(14);
	insert_at_end(15);
	insert_at_end(16);
	insert_at_end(17);
	insert_at_end(18);
	insert_at_end(19);
	insert_at_end(20);

	return 0;
}

int datafeedingflr2()
{
	insert_at_end(1);
	insert_at_end(2);
	insert_at_end(3);
	insert_at_end(4);
	insert_at_end(5);
	insert_at_end(6);
	insert_at_end(7);
	insert_at_end(8);
	insert_at_end(9);
	insert_at_end(10);
	insert_at_end(11);
	insert_at_end(12);
	insert_at_end(13);
	insert_at_end(14);
	insert_at_end(15);
	insert_at_end(16);
	insert_at_end(17);
	insert_at_end(18);

	return 0;
}

int flr0info()
{
	printf("1.Entry 2.Liftarea 3.Stationary 4.Lab4 5.DataStructure Lab 5.Class 6.Chemistry Lab 7.Examination cell 8.Staircase 9.Physics Lab \n ");
	printf(" 10.Gymkhana 11.Mechanics Lab 12.Workshop 13.Washroom 14.Staircase 15.System Programming Lab 16.Chairman Office 17.MMS \n");
	printf("18.Principal Office 19.Autocad 20.Seminar Hall 21.Admin Office 22.Exit\n");
	return -1;
}

int flr1info()
{
	printf("1.ENTRY 2.LiftArea 3.Microprocessor Lab 4.Instrument Control Lab 5.HOD Extc Dept 6.DLDA Lab 7.Hardware Workshop Lab\n");
	printf("8.EDL Lab 9.Storeroom 10.Staircase 11.Class 109 12.Boys Washroom 13.Trustee Office 14.Staircase 15.Class 101 16.Class 102\n");
	printf("17.class 103 18.EXTC Project Lab 19.Lab X 20.MicroProcessor Control Lab 21.Analog Communication Lab 22.Microwave Lab 23.EXIT\n");
	return -1;
}

int flr2info()
{
	printf("1.ENTRY 2.Liftarea 3.Class 206 4.HOD IT Dept 5.Class 207 6.Class 208 7.Staircase 8.Boys Restroom 9.Staircase 10.Chem Lab 11.Phy Lab\n");
	printf("12.Class 203 13.Computer Project lab 14.Class 213 15.Class 212 16.Class 211 17.Class 210 18.Exit\n");
	return -1;
}


int flr3info()
{
	printf("1.ENTRY 2.LiftArea 3.Class 305 4.HOD Computer Dept 5.Class 306 6.Class 309 8.Girls Washroom \n"); 
     printf("9.Staffroom 10.Staircase 11.Class 301 12.Class 302 13.Class 303 14.Class 300 15.E-CELL 16.Class 313 17.Class 312 18.Class 311 19.Class 310 20.EXIT\n");
	return -1;
}


int flr4info()
{
	printf(" 1.Entry 2.Simulation Lab 3.Library 4.Restroom 5.Terrace 6.Lift 7.Exit\n");
	return -1;
}

