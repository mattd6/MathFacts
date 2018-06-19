// MathFacts1.cpp : Defines the entry point for the console application.
//
/***************************************************************************
* Math Facts                                                              *
* Name: Matthew DeAngelo                         *
* Functions                                                               *
* Program Description : Write a program to help your young child          *
*                       practice their math facts                         *
***************************************************************************/
// Random Number 2.cpp : Defines the entry point for the console application.
//

//Libraries
#include <stdio.h>
#include <stdlib.h>//required to use rand()
#include <time.h>//required to use srand(time(NULL)
//#include "stdafx.h"
//#include <random>
//Signage Functions
void MathFactsSign(void)
{
    printf(" /$$      /$$             /$$     /$$             /$$$$$$$$                   /$$   \n");          
    printf("| $$$    /$$$            | $$    | $$            | $$_____/                  | $$ \n");            
    printf("| $$$$  /$$$$  /$$$$$$  /$$$$$$  | $$$$$$$       | $$    /$$$$$$   /$$$$$$$ /$$$$$$   /$$$$$$$\n");
    printf("| $$ $$/$$ $$ |____  $$|_  $$_/  | $$__  $$      | $$$$$|____  $$ /$$_____/|_  $$_/  /$$_____/\n");
    printf("| $$  $$$| $$  /$$$$$$$  | $$    | $$  \\ $$      | $$__/ /$$$$$$$| $$        | $$   |  $$$$$$ \n");
    printf("| $$\\  $ | $$ /$$__  $$  | $$ /$$| $$  | $$      | $$   /$$__  $$| $$        | $$ /$$\\____  $$\n");
    printf("| $$ \\/  | $$|  $$$$$$$  |  $$$$/| $$  | $$      | $$  |  $$$$$$$|  $$$$$$$  |  $$$$//$$$$$$$/\n");
    printf("|__/     |__/ \\_______/   \\___/  |__/  |__/      |__/   \\_______/ \\_______/   \\___/ |_______/ \n");
                                                                                              
                                                                                              
                                                                                              

}
void AdditionSign(void)
{
    
    printf("  /$$$$$$        /$$       /$$ /$$   /$$     /$$   \n");                 
    printf(" /$$__  $$      | $$      | $$|__/  | $$    |__/    \n");                
    printf("| $$  \\ $$  /$$$$$$$  /$$$$$$$ /$$ /$$$$$$   /$$  /$$$$$$  /$$$$$$$ \n");
    printf("| $$$$$$$$ /$$__  $$ /$$__  $$| $$|_  $$_/  | $$ /$$__  $$| $$__  $$\n");
    printf("| $$__  $$| $$  | $$| $$  | $$| $$  | $$    | $$| $$  \\ $$| $$  \\ $$\n");
    printf("| $$  | $$| $$  | $$| $$  | $$| $$  | $$ /$$| $$| $$  | $$| $$  | $$\n");
    printf("| $$  | $$|  $$$$$$$|  $$$$$$$| $$  |  $$$$/| $$|  $$$$$$/| $$  | $$\n");
    printf("|__/  |__/ \\_______/ \\_______/|__/   \\___/  |__/ \\______/ |__/  |__/\n");
                                                                    
                                                                    
                                                                    

}
void MenuSign(void)
{
    
    printf(" /$$      /$$  \n");                            
    printf("| $$$    /$$$   \n");                           
    printf("| $$$$  /$$$$  /$$$$$$  /$$$$$$$  /$$   /$$\n");
    printf("| $$ $$/$$ $$ /$$__  $$| $$__  $$| $$  | $$\n");
    printf("| $$  $$$| $$| $$$$$$$$| $$  \\ $$| $$  | $$\n");
    printf("| $$\\  $ | $$| $$_____/| $$  | $$| $$  | $$\n");
    printf("| $$ \\/  | $$|  $$$$$$$| $$  | $$|  $$$$$$/\n");
    printf("|__/     |__/ \\_______/|__/  |__/ \\______/ \n");
                                           
                                           
                                           

}
void SubtractionSign(void)
{
    
    printf("  /$$$$$$            /$$         /$$                                    /$$     /$$  \n");                  
    printf(" /$$__  $$          | $$        | $$                                   | $$    |__/  \n");                  
    printf("| $$  \\__/ /$$   /$$| $$$$$$$  /$$$$$$    /$$$$$$  /$$$$$$   /$$$$$$$ /$$$$$$   /$$  /$$$$$$  /$$$$$$$ \n");
    printf("|  $$$$$$ | $$  | $$| $$__  $$|_  $$_/   /$$__  $$|____  $$ /$$_____/|_  $$_/  | $$ /$$__  $$| $$__  $$\n");
    printf(" \\____  $$| $$  | $$| $$  \\ $$  | $$    | $$  \\__/ /$$$$$$$| $$        | $$    | $$| $$  \\ $$| $$  \\ $$\n");
    printf(" /$$  \\ $$| $$  | $$| $$  | $$  | $$ /$$| $$      /$$__  $$| $$        | $$ /$$| $$| $$  | $$| $$  | $$\n");
    printf("|  $$$$$$/|  $$$$$$/| $$$$$$$/  |  $$$$/| $$     |  $$$$$$$|  $$$$$$$  |  $$$$/| $$|  $$$$$$/| $$  | $$\n");
    printf(" \\______/  \\______/ |_______/    \\___/  |__/      \\_______/ \\_______/   \\___/  |__/ \\______/ |__/  |__/\n");
                                                                                                           
                                                                                                           
                                                                                                       

}
void MultiplicationSign(void)
{
    
    printf(" /$$      /$$           /$$   /$$     /$$           /$$ /$$                       /$$     /$$   \n");                 
    printf("| $$$    /$$$          | $$  | $$    |__/          | $$|__/                      | $$    |__/   \n");                 
    printf("| $$$$  /$$$$ /$$   /$$| $$ /$$$$$$   /$$  /$$$$$$ | $$ /$$  /$$$$$$$  /$$$$$$  /$$$$$$   /$$  /$$$$$$  /$$$$$$$ \n");
    printf("| $$ $$/$$ $$| $$  | $$| $$|_  $$_/  | $$ /$$__  $$| $$| $$ /$$_____/ |____  $$|_  $$_/  | $$ /$$__  $$| $$__  $$\n");
    printf("| $$  $$$| $$| $$  | $$| $$  | $$    | $$| $$  \\ \\ $$| $$| $$| $$        /$$$$$$$  | $$    | $$| $$  \\ $$| $$  \ $$\n");
    printf("| $$\\  $ | $$| $$  | $$| $$  | $$ /$$| $$| $$  | $$| $$| $$| $$       /$$__  $$  | $$ /$$| $$| $$  | $$| $$  | $$\n");
    printf("| $$ \\/  | $$|  $$$$$$/| $$  |  $$$$/| $$| $$$$$$$/| $$| $$|  $$$$$$$|  $$$$$$$  |  $$$$/| $$|  $$$$$$/| $$  | $$\n");
    printf("|__/     |__/ \\______/ |__/   \\___/  |__/| $$____/ |__/|__/ \\_______/ \\_______/   \\___/  |__/ \\______/ |__/  |__/\n");
                                                                                                           
                                                                                                           
                                                                                                           

}
void Integer_DivisionSign(void)
{
    
    printf(" /$$$$$$             /$$                                                   /$$$$$$$  /$$            /$$           /$$   \n");                 
    printf("|_  $$_/            | $$                                                  | $$__  $$|__/           |__/          |__/   \n");                 
    printf("  | $$   /$$$$$$$  /$$$$$$    /$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$       | $$  \\ $$ /$$ /$$    /$$ /$$  /$$$$$$$ /$$  /$$$$$$  /$$$$$$$ \n");
    printf("  | $$  | $$__  $$|_  $$_/   /$$__  $$ /$$__  $$ /$$__  $$ /$$__  $$      | $$  | $$| $$|  $$  /$$/| $$ /$$_____/| $$ /$$__  $$| $$__  $$\n");
    printf("  | $$  | $$  \\ $$  | $$    | $$$$$$$$| $$  \\ $$| $$$$$$$$| $$  \\__/      | $$  | $$| $$ \\  $$/$$/ | $$|  $$$$$$ | $$| $$  \\ $$| $$  \\ $$\n");
    printf("  | $$  | $$  | $$  | $$ /$$| $$_____/| $$  | $$| $$_____/| $$            | $$  | $$| $$  \\  $$$/  | $$ \\____  $$| $$| $$  | $$| $$  | $$\n");
    printf(" /$$$$$$| $$  | $$  |  $$$$/|  $$$$$$$|  $$$$$$$|  $$$$$$$| $$            | $$$$$$$/| $$   \\  $/   | $$ /$$$$$$$/| $$|  $$$$$$/| $$  | $$\n");
    printf("|______/|__/  |__/   \\___/   \\_______/ \\____  $$ \\_______/|__/            |_______/ |__/    \\_/    |__/|_______/ |__/ \\______/ |__/  |__/\n");
    printf("                                       /$$  \\ $$                                                                                         \n");
    printf("                                      |  $$$$$$/                                                                                         \n");
    printf("                                       \\______/                                                                                          \n");

}
int GetInteger(int min, int max)
{
	//this function validates input to be between min and max

    int integer;
	do
	{
		printf("Enter your menu choice: ");
		scanf("%i", &integer);
	
		if(integer < min || integer > max)
		      printf(" Invalid Entry.  Try again\n");
	}while(integer < min || integer > max);
	return(integer);
}

void Menu(void)
{
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Integer Division\n");
    printf("5. Quit\n");
}
/*******************************************************/
//Calculation Functions
/*
void initrand(void)
{
	srand((time(NULL)));
	
	int a, b, n, solution;

    //print 10 equations with random numbers within the range of 1 to 100
    for (n = 1; n <= number_of_problems; ++n)
    {
            a = RangedRandDemo(minimum, maximum);
            b = RangedRandDemo(minimum, maximum);
            solution = a + b;
            printf("%i + %i = %i\n ", a, b, solution);
    }
}
int randint(int min, int max)
{   //generates a psuedo-random integer between min and max
	if (min>max)
	{
		return max + int((min - max + 1)*rand() );
	}
	else
	{
		return min + int((max - min + 1)*rand() );
	}
}*/
void Addition(int max, int min, int num)
{              //maximum  minimum   number of problems

	int RandomNumber(int min, int max)
    {
        int num;
        
        num = rand() % (max - min) + min;
        
        return(num);
        
    }
	
	srand((unsigned)time(NULL));
	
	int a, b, n, solution, num1, num2;

    //print 10 equations with random numbers within the range of 1 to 100
    for (n = 1; n <= num; ++n)
    {
            a = RandomNumber(min, max);
            b = RandomNumber(min, max);
            solution = a + b;
            printf("What is %i + %i?    ", a, b);
	        scanf("%i", &num1);
	
	        if(num1 != solution)
	        {
	            printf("Sorry, %i is not correct. Try again.    ", num1);
	            scanf("%i", &num2);
	    
	            if(num2 != solution)
	                printf("Sorry, %i is also not correct.\nThe correct answer is %i.\n", num2, solution);
	            else
	                printf("You got it!\n");
	        }
	        else
	        {
	            printf("You got it!\n");
	        }
    }
	
	
}
void Subtraction(int max, int min, int num)
{//maximum  minimum   number of problems
    
    int RandomNumber(int min, int max)
    {
        int num;
        
        num = rand() % (max - min) + min;
        
        return(num);
        
    }
    
    srand((unsigned)time(NULL));
	
	int a, b, n, solution, num1, num2;

    //print 10 equations with random numbers within the range of 1 to 100
    for (n = 1; n <= num; ++n)
    {
            a = RandomNumber(min, max);
            b = RandomNumber(min, max);
            solution = a - b;
            printf("What is %i - %i?    ", a, b);
	        scanf("%i", &num1);
	
	        if(num1 != solution)
	        {
	            printf("Sorry, %i is not correct. Try again.    ", num1);
	            scanf("%i", &num2);
	    
	            if(num2 != solution)
	                printf("Sorry, %i is also not correct.\nThe correct answer is %i.\n", num2, solution);
	            else
	                printf("You got it!\n");
	        }
	        else
	        {
	            printf("You got it!\n");
	        }
    }
}
void Multiplication(int max, int min, int num)
{//maximum  minimum   number of problems
    
    int RandomNumber(int min, int max)
    {
        int num;
        
        num = rand() % (max - min) + min;
        
        return(num);
        
    }
    
    srand((unsigned)time(NULL));
	
	int a, b, n, solution, num1, num2;

    //print 10 equations with random numbers within the range of 1 to 100
    for (n = 1; n <= num; ++n)
    {
            a = RandomNumber(min, max);
            b = RandomNumber(min, max);
            solution = a * b;
            printf("What is %i * %i?    ", a, b);
	        scanf("%i", &num1);
	
	        if(num1 != solution)
	        {
	            printf("Sorry, %i is not correct. Try again.    ", num1);
	            scanf("%i", &num2);
	    
	            if(num2 != solution)
	                printf("Sorry, %i is also not correct.\nThe correct answer is %i.\n", num2, solution);
	            else
	                printf("You got it!\n");
	        }
	        else
	        {
	            printf("You got it!\n");
	        }
    }
}
void Integer_Division(int max, int min, int num)
{//maximum  minimum   number of problems
    
	int RandomNumber(int min, int max)
    {
        int num;
        
        num = rand() % (max - min) + min;
        
        return(num);
        
    }
    
    srand((unsigned)time(NULL));
	
	int     a, b, n, solution, rem, num1, num2, rem1, rem2;

    //print 10 equations with random numbers within the range of 1 to 100
    for (n = 1; n <= num; ++n)
    {
            a = RandomNumber(min, max);
            b = RandomNumber(min, max);
            solution = a / b;
            rem = a%b;
            
            printf("What is %i / %i?    ", a, b);
	        scanf("%i", &num1);
	        printf("What is the remainder?  ");
	        scanf("%i", &rem1);
	        
	        if(num1 != solution)
	        {
	            printf("Sorry, %i R %i is not correct. Try again.    ", num1, rem1);
	            scanf("%i", &num2);
	            printf("What is the remainder?  ");
	            scanf("%i", &rem2);
	    
	            if(num2 != solution)
	                printf("Sorry, %i R %i is also not correct.\nThe correct answer is %i R %i.\n", num2, rem2, solution, rem);
	            else if(rem2 != rem)
	                printf("Sorry, %i R %i is also not correct.\nThe correct answer is %i R %i.\n", num2, rem2, solution, rem);
	            else
	                printf("You got it!\n");
	        }
	        else if(rem1 != rem)
	        {
	            printf("Sorry, %i R %i is not correct. Try again.    ", num1, rem1);
	            scanf("%i", &num2);
	            printf("What is the remainder?  ");
	            scanf("%i", &rem2);
	    
	            if(num2 != solution)
	                printf("Sorry, %i R %i is also not correct.\nThe correct answer is %i R %i.\n", num2, rem2, solution, rem);
	            else if(rem2 != rem)
	                printf("Sorry, %i R %i is also not correct.\nThe correct answer is %i R %i.\n", num2, rem2, solution, rem);
	            else
	                printf("You got it!\n");
	        }
	        else
	        {
	            printf("You got it!\n");
	        }
    }
}
void Quit(void)
{
    
}
/******************************************************************/
void Redirection(int c, int min, int max, int num)
{
	switch (c)
	{
	case 1: AdditionSign();
		Addition(max, min, num);
		break;
	case 2:  SubtractionSign();
		Subtraction(max, min, num);
		break;
	case 3:  MultiplicationSign();
		Multiplication(max, min, num);
		break;
	case 4:  Integer_DivisionSign();
		Integer_Division(max, min, num);
		break;
	case 5: Quit(); break;

	}//end of switch
}
void Practicing(int min, int max, int number)
{
	int choice;	//menu choice
	printf("Let's get practicing!\n\n");
	
	do
	{
	    MenuSign();
	    Menu();
    	choice = GetInteger(1, 5);
	    Redirection(choice, min, max, number);
	}while (choice < 5);
	
}
int main(void)
{
	int minimum, maximum, number_of_problems;
	
	

	MathFactsSign();
	printf("Welcome!\n\n");
	printf("Before we start, we will need some information.\n\n");
	printf("1.  Range of Numbers\n");
	printf("\ta.  What is your lowest number? ");
	scanf("%i", &minimum);

	printf("\tb.  What is the highest number? ");
	scanf("%i", &maximum);

	printf("2.  How many problems would you like to have? ");
	scanf("%i", &number_of_problems);

	Practicing(minimum, maximum, number_of_problems);

	return 0;
}










