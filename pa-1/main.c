//
//  main.c
//  pa-1
//
//  Created by Thomas Pontikes on 10/1/15.
//  Copyright © 2015 Thomas Pontikes. All rights reserved.
//

#include "pa-1.h"

void BoolCheck(bool a);
void IntCheck(int a);
void NullCheck(char *a);
void VoidCheck(char *a);
char a[50];

int main(int argc, const char * argv[]) {


    
    BoolCheck(f_armstrong(373));
    
    BoolCheck(f_brackets("[[[]]]"));
    
    BoolCheck(f_perfect(28));
    
    IntCheck(f_rotate(24579, 3));
    
    IntCheck(f_str_search("ana", "ana ate the banana"));
    
    IntCheck(f_collatz_count(1000));
    
    IntCheck(f_array(100));
    
    f_strings("Tom", "Pontikes", a);
    printf("%s \n",a);
    
    f_sort(420, 69, 13, a);
    printf("%s \n",a);
    
    NullCheck(f_cubes_sum(79));
 

}



void IntCheck(int a){
    
    printf("Answer: %d \n",a);
    
}

void BoolCheck(bool a){
        
        if(a == true)
            
            printf("True \n");
            
        if(a == false)
            
            printf("False \n");
}


void NullCheck(char *a){
    
    if(a == NULL){
        
        printf("Function Returned NULL \n");
    
}else{
        printf("%s\n",a);
}
    
}

void VoidCheck(char *a){
    
    printf("%s \n",a);

   
}
    


