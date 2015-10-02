//
//  main.c
//  pa-1
//
//  Created by Thomas Pontikes on 10/1/15.
//  Copyright © 2015 Thomas Pontikes. All rights reserved.
//

#include "pa-1.h"

void AnswerCheck(bool a);

int main(int argc, const char * argv[]) {
   
    bool check;
    
    int n = 189;
    check = f_armstrong(n);
    AnswerCheck(check);
    
    int x = 28;
    check = f_perfect(x);
    AnswerCheck(check);
    
    
    int p = f_collatz_count(200);
    
    f_strings("T", "KEK", "");
    
    f_sort(3,1,2,"");
    
    printf("%d",f_str_search("ana", "ana ate the banana"));
    
    printf("%d",f_cubes_sum(273));
    
    f_rotate(1234567, 2);
    

}

    




    




void AnswerCheck(bool a){
        
        if(a == true)
            
            printf("True \n");
            
        if(a ==false)
            
            printf("False \n");
        
        
}
