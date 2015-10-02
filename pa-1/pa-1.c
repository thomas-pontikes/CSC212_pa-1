// add includes
#include "pa-1.h"


bool f_armstrong(int n)
{
    //define the variables used in the function
    int holder;
    int remainder;
    int new_num=0;
    bool answer;
    
    holder = n;
    
    while(holder!=0)
    {
        remainder = holder %10;
        
        new_num += (remainder * remainder * remainder);
        
        holder /= 10;
    }
    
    if(new_num==n){
        answer = true;
    }else{
     answer = false;
    }
    return answer;

}


/*
bool f_brackets(char *e)
{
    int left = 0;
    int right = 0;
    bool answer;
    
    for (int i=0;i< sizeof e;i++)
    
    {
        
        if (&e == "[")
            
            left++;
    
        if (e[i]=="]")
            
            right++;
        
        if (left == right)
            
            answer = true;
            break;
        
    }

    return answer;
  
}
 */

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
int f_rotate(int n, int r)
{
  
    return 0;
}

//5
int f_str_search(char *pattern, char *text){
    
    int i;
    int M = pattern;
    int N = text;
    
    /* A loop to slide pat[] one by one */
    for (i = 0; i <= N - M; i++)
    {
        int j;
        
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
        {
            if (text[i+j] != pattern[j])
                break;
        }
        if (j == M)  // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        {
            printf("Pattern found at index %d \n", i);
            
            
        }
    }

    return i;
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
//float f_array(int n);

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
    
    int holder = n;
    int a= 0;
    int b = n;
    int answer;
    for(; holder >=0; holder--){
        
        answer = pow(a,3) + pow(b,3);
        
        
            
            printf("%d \n", answer);
            
        
        
        a++;
        b--;
        
        
    }
    
    return NULL;
}


