//
//  main.c
//  FizzBuzz
//
//  Created by Jimmy Hoang on 2016-12-13.
//  Copyright © 2016 Jimmy Hoang. All rights reserved.
//

#include <stdio.h>

int main (){
    
    int target = 100;
    
    for (int i = 0; i <= target; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0)){
            printf("FizzBuzz \n");
        } else if (i % 5 == 0){
            printf("Buzz \n");
        } else if (i % 3 == 0)  {
            printf("Fizz \n");
        } else {
            printf("%d \n", i);
        }
    }
    return 0;
}

