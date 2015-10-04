// add includes
#include "pa-1.h"


bool f_armstrong(int n)
{
    //define the variables used in the function
    int holder;
    int remainder;
    int new_num=0;
    
    holder = n;
    
    while(holder!=0)
    {
        remainder = holder %10;
        
        new_num += (remainder * remainder * remainder);
        
        holder /= 10;
    }
    
    if(new_num==n){
        return true;
    }else{
     return false;
    }
}



bool f_brackets(char *e)
{
    int left = 0;
    int right = 0;
    int length = (int)strlen(e);
    
    
    for (int i = 0; i < length; i++)
    {

        if (e[i] == '[')
            
            left++;
    
        if (e[i] == ']')
            
            right++;
    }
    
    
    if (left == right){
        return true;
    }else{
        return false;
    }
  
}


//3
bool f_perfect(int x)
{
 int i=1;
 int sum=0;
 bool answer;
    
    while(i<x){
        if(x%i == 0)
            sum=sum+i;
        i++;
    }
    if(sum==x)
        answer = true;
    else
        answer = false;
    
    return answer;
}




//4
int f_rotate(int n, int r){
    
    n = 24579;
    r = 2;
    char* shift;
    
    shift = malloc(n);
    
   
    

    
    return 0;
}



//5
int f_str_search(char *pattern, char *text){
    
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
    
    //The variables are initialized for the array and two integers, one that counts how many times a loop finds a number divisable by 3 and one that holds the sum of all those numbers so it can be averaged.
    int A[n];
    int count = 0;
    int sum = 0;
    
    
    //This initiates the random function used to fill the array with random numbers.
    srand((int)time(NULL));
    
   //This loop fills the array of length n with random numbers from 0-100 and then multiplies each number by 2.
    for(int i=0; i<=n; i++){

        A[i] = ((rand() % 100 +1) * 2);
        
    }
    //This loop goes through the array and looks to see if a number is divisable by 3. If it finds one it is added to the "sum" variable and adds one to the "count" variable.
    for(int i=0; i<=n; i++){
        
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
   
    //Initialize two variables to hold the length of each parameter
        double char1 = strlen(s1);
    double char2 = strlen(s2);
    
    //Checks the length and if the strings are the same length before continuing
    while(true){
    if(char1 > 50){
        printf("One of your inputs has more than 50 charactors.\n");
        return;
    }
       if(char2 > 50){
        printf("One of your inputs has more than 50 charactors.\n");
        return;
        
    }
    if(char1 == char2){
        printf("Your inputs are the same size.\n");
        return;
    }
          break;
}
    
    //allocates enough memory to include three inputs with a max of 50 charactors each
    s3 = malloc(150);
    
    //Compares the lengths, then concatinates the strings accordingly
    if(char1 > char2){
    
    stpcpy(stpcpy(stpcpy(s3, s2), s1), s2);
    
    }else{
        
    stpcpy(stpcpy(stpcpy(s3, s1), s2), s1);
        
    }
    
    //Prints the output of the strings and frees the allocated memory for s3
    
    printf("%s \n",s3);
    
    free(s3);
}

//9
void f_sort(int x, int y, int z, char* list){
    
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
    
    //Allocates memory for the list and adds in the values
    list = malloc(3);
    
    sprintf(list, "%d,%d,%d " ,x,y,z);
    
    //The values are printed in the correct order and the allocated memory is freed
    printf("The list is now ordered: %s",list);
  
    free(list);

}

//10

char* f_cubes_sum(int n){

   

    
    
    return "LLL";
}


