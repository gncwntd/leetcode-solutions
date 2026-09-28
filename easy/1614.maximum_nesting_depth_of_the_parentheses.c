/*
count =    
total = +  + + + +

-> (  1 2 (1 ) (1 ) ( ( 1 ) ) 1)

*/

int maxDepth(char* s) {
    
    int stack[100];
    int top = -1;
    int count = 0;

    for(int i = 0; s[i] != '\0';i++){
        if(s[i] == '('){
            stack[++top] = s[i];
            if(top+1 > count){
                count = top+1;
            }
        } 
        else if(s[i] == ')') top--;
    }

    return count;

}

/*

1614. Maximum Nesting Depth of the Parentheses

solved using stack to keep track parenttheses' max depht

Runtime
0
ms
Beats
100.00%
Memory
8.84
MB
Beats
13.45%
*/