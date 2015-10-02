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
    
  
    int a = 1;
    int b = 2;
    int c = 3;
    
    
    int p = f_collatz_count(200);
    
    printf("%d \n",p);
    
    
    f_strings("T", "KEK", "");
    
    f_sort(3,1,2,"");
    
    

}

    




    




void AnswerCheck(bool a){
        
        if(a == true)
            
            printf("True \n");
            
        if(a ==false)
            
            printf("False \n");
        
        
}
