#include <stdio.h>
#include <string.h>
#define N 1000
char stack[N];
int top = -1;
int mp[N];
char str[N];
void push(char value)
{
    if(top >= N) printf("Stack is full!!\n");
    else{
        top++;
        stack[top] = value;
    }
}

void pop()
{
    if(top < 0) printf("Stack is empty!!\n");
    else{
        top--;
    }
}


void solve()
{
    char ss[] = "+-*/^";
    for(int i = 0; i < strlen(ss); i++) mp[ss[i]] = i + 1;
    char s[N];
    scanf("%[^\n]", s);
    int len = strlen(s);
    s[len] = ')';
    push('(');
    int j = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '('){
            push(s[i]);
        }
        else if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
            str[j] = s[i];
            j++;
        }
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
            if(mp[stack[top]] > mp[s[i]]){
                while(stack[top] != '('){
                    str[j] = stack[top];
                    j++;
                    pop();
                }
                pop();
            }
            else{
                push(s[i]);
            }
        }
        else if(s[i] == ')'){
            while(stack[top] != '('){
                str[j] = stack[top];
                j++;
                pop();
            }
            pop();
        }
    }
    puts(str);
    return;
}



int main()
{

    solve();

    return 0;
}
