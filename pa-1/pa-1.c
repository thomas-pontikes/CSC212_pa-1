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
//int f_str_search(char *pattern, char *text);

//6
//int f_collatz_count(int n);

//7
//float f_array(int n);

//8
//void f_strings(char* s1, char* s2, char* s3);

//9
//void f_sort(int x, int y, int z, char* list);

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
