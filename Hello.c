
// C Programming code 
/* #include<stdio.h>
int main(){
int a[5]= {2,3,4,5,6} ;
for(int i=0;i<5; i++){
printf(" a[%d]=%d\n", i, a[i]);
}
return 0;
}

#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f\n", celsius);
    return 0; 
}

#include <stdio.h>
#include <math.h> 
int main() {
    int number, isPrime = 1; 
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 1) {
        isPrime = 0; 
    } else if (number == 2) {
        isPrime = 1; 
    } else if (number % 2 == 0) {
        isPrime = 0; 
    } else {
        
        for (int i = 3; i <= sqrt(number); i += 2) {
            if (number % i == 0) {
                isPrime = 0; 
                break;       
            }
        }
    }
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}  

#include <stdio.h>
int main() {
int n1 = 0, n2 = 1, nextTerm, i;
printf("Fibonacci Series from 1 to 10: \n");
for (i = 1; i <= 10; ++i) {
printf("%d ", n2);
nextTerm = n1 + n2;
n1 = n2;
n2 = nextTerm;
}
return 0;
}


#include <stdio.h>

long long factorial_iterative(int n) {
    long long result = 1;
    if (n < 0) {
        printf("Factorial of a negative number does not exist.\n");
        return -1; 
    } else if (n == 0) {
        return 1; 
    } else {
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    long long fact = factorial_iterative(number);
    if (fact != -1) { 
        printf("Factorial of %d is: %lld\n", number, fact);
    }
    return 0;
}



#include<stdio.h>
int main(){
int a;
printf("Write any day");
scanf("%d",&a);
switch(a){
case 1:
printf("Monday");
break;
case 2:
printf("Tuesday");
break;
case 3:
printf("Wednesday") ;
break;
case 4:
printf("Thursday");
break;
case 5:
printf("Friday");
break;
case 6:
printf("Saturday");
break;
case 7:
printf("Sunday");
break;
default:
printf("invalid input");
break;
}

#include <stdio.h>
int main() {
printf("Frist matrix \n");
int a[2][2]={{10,20}, {30,40}};
for (int i=0;i<2;i++){
for (int j=0;j<2;j++){
printf(" %d \t" , a[i] [j]);
}
printf("\n");
}
printf("Second matrix \n");
int b[2][2]={{50,60} , {70,80}} ;
for (int i=0;i<2;i++){
for (int j=0;j<2; j++){
printf(" %d \t" , b[i] [j]);
}
printf("\n");
}
printf("Sum of matrix \n");
int c[2] [2];
for (int i=0;i<2;i++){
for (int j=0;j<2;j++){
printf(" %d \t" , a[i] [j] + b[i] [j]);
}
printf("\n");
}
return 0;
}





// 	Fibonacci Series in C without recursion
#include<stdio.h>    
int main()  {
    	 int n1=0,n2=1,n3,i,number;    
         	 printf("Enter the number of elements:");    
	 scanf("%d",&number);    
	 printf("\n%d %d",n1,n2); 
	 for(i=2;i<number;++i)   
	 {    
	  n3=n1+n2;    
	  printf(" %d",n3);    
	  n1=n2;    
	  n2=n3;    
	 }  
	  return 0;  

}  



//  	Fibonacci Series in C with recursion
	#include<stdio.h>    
	void printFibonacci(int n){    
	    static int n1=0,n2=1,n3;    
	    if(n>0){    
	         n3 = n1 + n2;    
	         n1 = n2;    
	         n2 = n3;    
         printf("%d ",n3);    
	         printFibonacci(n-1);    
	    }    
	}    
	int main(){    
	    int n;    
	    printf("Enter the number of elements: ");    
	    scanf("%d",&n);    
	    printf("Fibonacci Series: ");    
	    printf("%d %d ",0,1);    
	    printFibonacci(n-2);   
	  return 0;  
}



// Stack Implementation in C 
#include <stdio.h>
#include <stdlib.h>
#define MAX 100 // Maximum size of the stack

// Stack structure
typedef struct Stack {
    int arr[MAX];
    int top;
} Stack;

// Initialize the stack
void initialize(Stack *stack) {
    stack->top = -1;
}

// Check if the stack is empty
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Check if the stack is full
int isFull(Stack *stack) {
    return stack->top == MAX - 1;
}

// Push an element onto the stack
void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    stack->arr[++stack->top] = value;
    printf("%d pushed onto the stack.\n", value);
}

// Pop an element from the stack
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop.\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

// Peek the top element of the stack
int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty! Nothing to peek.\n");
        return -1;
    }
    return stack->arr[stack->top];
}

// Main function to demonstrate stack operations
int main() {
    Stack stack;
    initialize(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element is %d\n", peek(&stack));

    printf("Popped element is %d\n", pop(&stack));
    printf("Popped element is %d\n", pop(&stack));

    if (isEmpty(&stack)) {
        printf("Stack is now empty.\n");
    }

    return 0;
}


// Array Implementation in C 
#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size 'n'

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the elements of the array
    printf("\nThe elements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/
#include<stdio.h>
int main(){
    int a[5]= {2,4,5,6,7,8};
    for(int i=0;i<5; i++){
        printf(" a[%d]=%d\n", i, a[i]);
    }
    return 0;
}




