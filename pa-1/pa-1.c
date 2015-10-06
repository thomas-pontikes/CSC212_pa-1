// add includes
#include "pa-1.h"


bool f_armstrong(int n)
{
    printf("\nFunction: f_armstrong \n\n");
    //define the variables used in the function
    int holder;
    int remainder;
    int new_num=0;
    holder = n;
    //While the holder does not equal 0 the loop iterates though each of the values stored in the int and checks to see if each part multipied by 3 and added together equals n.
    while(holder!=0)
    {
        remainder = holder %10;
        new_num += (remainder * remainder * remainder);
        holder /= 10;
    }
    //If the sum the numbers equals n the function returns true.
    if(new_num==n){
        return true;
    }else{
        return false;
    }
}
bool f_brackets(char *e)
{
    printf("\nFunction: f_brackets \n\n");
    //Initializes variables to count the amount of left and right brackets and the length of the string so that the loop may iterate according to the length
    int left = 0;
    int right = 0;
    int length = (int)strlen(e);
    int i;
    //For the length of the string this loop looks for when the array equals '[' or ']', it adds one to the respective counter variable
    for (i = 0; i < length;i++)
    {
        if (e[i] == '[')
            left++;
        if (e[i] == ']')
            right++;
    }
    //If the left and right brackets are equal the function returns true
    if (left == right){
        return true;
    }else{
        return false;
    }
}
//3
bool f_perfect(int x)
{
    printf("\nFunction: f_perfect \n\n");
    //Initiates the varibles i as a counter and sum
    int i=1;
    int sum=0;
    
    //This loop parses the int and finds if x divided by i's remainder is equal to 0 and adds i to sum
    
    while(i<x){
    
        if(x%i == 0)
        sum=sum+i;
        i++;
    }
    
    //This checks to see if sum is equal to x and it returns the proper value
    if(sum == x){
    
    return true;
   
    }else{
        
    return false;
    
    }
}
//4
int f_rotate(int n, int r){
    printf("\nFunction: f_rotate \n\n");
    //Initializes two place holders that help to move the int n by r
    int holder_1;
    int holder_2;
    //While r is incrementing down the function iterates and moves the integer over by r spaces
    while(r--){
        holder_1 = n%10;
        n = n/10;
        holder_2 = 10;
    //This loop uses multiplys holder_2 by 10 untill its length matches n then it multiplys that number by the value stored in holder_1 and adds the remaining values of n to the end
        while( holder_2 < n)
            holder_2 *= 10;
            n = holder_1*holder_2 + n;
        
    }
    return n;
}
//5
int f_str_search(char *pattern, char *text){
    printf("\nFunction: f_str_search \n\n");
    //Initiates a counter variable to keep track of how many occurences are in the text
    int count = 0;
    // Create a temporary char* to hold the contents of the text
    const char *tmp = text;
    //Searches the temporary char* and adds 1 to counter every time a pattern is matched
    while((tmp = strstr(tmp, pattern)))
    {
        tmp++;
        count++;
    }
    return count;
}
//6
int f_collatz_count(int n){
    printf("\nFunction: f_collatz_count \n\n");
    //Initializes a counter used to keep track of the number of times n is altered
    int count = 0;
    //This loop is active when n is not equal to 1 and it checks to see if n is even or odd.
    //It then applies the proper math opperations needed by the algorithm.
    while(n != 1){
        if (n % 2 == 0){
            n = n/2;
            count ++;
        }else{
            n = 3*n + 1;
            count ++;
        }
    }
    //After each pass through the loop 1 is added to count, when n reaches 1 the loop breaks and the amount of math operations needed to get to 1 is recorded in the count variable.
    return count;
}
//7
float f_array(int n){
    printf("\nFunction: f_array \n\n");
    //The variables are initialized for the array and two integers, one that counts how many times a loop finds a number divisable by 3 and one that holds the sum of all those numbers so it can be averaged.
    int A[n];
    int count = 0;
    int sum = 0;
    int i;
    //This initiates the random function used to fill the array with random numbers.
    srand((int)time(NULL));
    //This loop fills the array of length n with random numbers from 0-100 and then multiplies each number by 2.
    for(i=0; i<=n; i++){
        A[i] = ((rand() % 100 +1) * 2);
    }
    //This loop goes through the array and looks to see if a number is divisable by 3. If it finds one it is added to the "sum" variable and adds one to the "count" variable.
    for(i=0;i<=n;i++){
        if(count >= 5){
            break;
        }
        if(A[i] % 3 == 0) {
            sum+= A[i];
            count++;
        }
    }
    //The function returns sum/count or the average
    return sum/count;
}
//8
void f_strings(char* s1, char* s2, char* s3){
    printf("\nFunction: f_strings \n\n");
    //Initialize tw0 variables to hold the length of each parameter
    int char1 = (int)strlen(s1);
    int char2 = (int)strlen(s2);
    int n = 0;
    //allocates enough memory to include three inputs with a max of 50 charactors each
    
    //Checks the length and if the strings are the same length before continuing
   
        if(char1 > 50 || char2 > 50){
            sprintf(s3, "One of your inputs has more than 50 charactors.\n");
            
        }
        if(char1 == char2){
            sprintf(s3,"Your inputs are the same size.\n");
        
        }
        
    if (n == 0){
   
    //Compares the lengths, then concatinates the strings accordingly
    if(char1 > char2){
       s3[150] = sprintf(s3,"<%s><%s><%s>",s2,s1,s2);
    
    }else{
       s3[150] = sprintf(s3,"<%s><%s><%s>",s1,s2,s1);
    }
}
    
}
//9
void f_sort(int x, int y, int z, char* list){
    printf("\nFunction: f_sort \n\n");
    printf("Original: %d %d %d \n", x,y,z);
    //Initialize an int to help sort the numbers
    int sort;
    //This section looks at the inputs and swaps them according to their sizes.
    //By the end of these staments the variables are swaped so that x is the smallest and z is the largest
    if (x > y)
    {
        sort = x;
        x = y;
        y = sort;
    }
    if (y > z)
    {
        sort = y;
        y = z;
        z = sort;
    }
    if (x > y)
    {
        sort = x;
        x = y;
        y = sort;
    }
    //adds in the values to the list
    
    list [x+y+z] = sprintf(list,"Sorted: %d %d %d",x,y,z);
    
}
//10
char* f_cubes_sum(int n){
    printf("\nFunction: f_cubes_sum \n\n");
    //Initiates the variables a and b as well as the char array return_
    int a;
    int b;
    char *return_;
    
    //The pointer array is allocated memory
    return_ = malloc(n);
    
    //This loop finds when a^3 and b^3 is less than or equal to n
    for(a = 0; a*a*a <= n ; a++)
    for(b = a; b*b*b <= n ; b++)
        
        //For each loop iteration the function checks to see if a^3 and b^3 is equal to n, if its true the return_ array is filled with the answer.
       if(a*a*a + b*b*b == n ) {
            
          sprintf(return_, "%d^3 + %d^3 = %d" ,a,b,n);
            
             return return_;
       }
    
    free(return_);
    return NULL;
   
}
