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

int main(int argc, const char * argv[]) {
   
    bool check;
    
    f_sort(100, 20, 8, "");
    
    NullCheck(f_cubes_sum(72));
    
    BoolCheck(f_armstrong(373));
    
    IntCheck(f_collatz_count(1000));
    
    IntCheck(f_str_search("ana", "ana ate the banana"));
    
    BoolCheck(f_brackets("[]]]][[[[][][][[]]"));
    
    printf("%d",f_rotate(245798989,3));
    
    printf("Average: %f \n", f_array(1000));
    

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

