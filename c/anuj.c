#include<stdio.h>
#include<string.h>

void pre();
void push(int);
char pop();
char infix[20], prefix[20];
struct stack {
    int s[20];
    int top;
} st;

int main() {
    st.top = -1;
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    pre();
    return 0;
}

void pre() {
    int i, j = 0;
    char temp[20];
    strrev(infix);
    for(i = 0; infix[i] != '\0'; i++) {
        switch(infix[i]) {
            case '+':
            case '-':
                while(st.s[st.top] > 1)
                    prefix[j++] = pop();
                push(1);
                break;
            case '*':
            case '/':
                while(st.s[st.top] > 3)
                    prefix[j++] = pop();
                push(3);
                break;
            case '^':
                while(st.s[st.top] >= 4)
                    prefix[j++] = pop();
                push(4);
                break;
            case ')':
                push(0);
                break;
            case '(':
                while(st.s[st.top] != 0)
                    prefix[j++] = pop();
                st.top--;
                break;
            default:
                prefix[j++] = infix[i];
        }
    }
    while(st.top >= 0)
        prefix[j++] = pop();
    prefix[j] = '\0';
    strrev(prefix);
    printf("The prefix expression is %s\n", prefix);
}

void push(int ele) {
    st.top++;
    st.s[st.top] = ele;
}

char pop() {
    int el;
    char e;
    el = st.s[st.top];
    st.top--;
    switch(el) {
        case 1: e = '+'; break;
        case 2: e = '-'; break;
        case 3: e = '*'; break;
        case 4: e = '/'; break;
        case 5: e = '^'; break;
    }
    return e;
}