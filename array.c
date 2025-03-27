#include <stdio.h>

int main(){
    /*Array is Collection of similar data types stored at
    
    contiguous memory locations

    why array is useful :
        if i want 3 integer or 5 float any more than one similar data type.
        and insted of declaring multiple time we can declare an array /
        we use array because it's accesabilty. it store in a contiguous memory location. 

        e.g. : 
           int  marks1 = 97;
           int  marks2 = 95;
           int  marks3 = 93;

        //    this is a synatax of an array. 

            1)this is an integer array
           int marks[] = {97,95,93};
           
           2)this is an float array
           float  marks[] = {97.0,95.0,93.0};
           
           1)this is an character array
           char alpa[] = {'A','B','C'};
           
           
           
           //in C language 0 index based it's meaning that in c language array postioning of first element starting index with 0. 
           e.g. : 
           int marks[] = {97,95,93};
           if i want to access 97: 
           
           printf("%d",marks[0]);
           
           
           
           
           
           */
          //integer array

          int marks[] = {97,95,93};

          // float array
          float  marks[] = {97.0,95.0,93.0};

          // char 
          char alpa[] = {'A','B','C'};

          printf("The marks at index  is %d",marks[0]);


    
    return 0;
}