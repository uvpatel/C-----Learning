#include <stdio.h>

void Namste();  // funtion prototype.
void Bonjure();

int main(){     
    int n;
    printf("Enter 1 for indian and 0 for french: ");
    scanf("%d",&n);
    if (n == 1)
    {
        Namste();   // Function call.
        
    }
    else if(n == 0)
    {
        
        Bonjure();
    }
    
    else{
        printf("Error");
    }
    return 0;
}

void Namste(){      // function declaration
    printf("Namaste");
}

void Bonjure(){     // function declaration
    printf("Bonjour");  
}