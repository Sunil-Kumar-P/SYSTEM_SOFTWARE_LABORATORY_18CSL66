# SYSTEM_SOFTWARE_LABORATORY_18CSL66

VTU SYSTEM SOFTWARE LABORATORY 18CSL66

1. 

a. Write a LEX program to recognize valid arithmetic expression. Identifiers in the expression could be only integers and operators could be + and *. Count the identifiers & operators present and print them separately.
``` 
lex 1a.l

cc lex.yy.c -ll

./a.out
```

b. Write YACC program to evaluate arithmetic expression involving operators: +, -,*, and /
``` 
lex 1b.l

yacc -d 1b.y

cc lex.yy.c y.tab.c -ll

./a.out
``` 
___

2. Develop, Implement and Execute a program using YACC tool to recognize all strings ending with b preceded by n a’s using the grammar an b (note: input n value)

``` 
lex 2.l
yacc -d 2.y
cc lex.yy.c y.tab.c -ll
./a.out
``` 
___

3. Design, develop and implement YACC/C program to construct Predictive / LL(1) Parsing Table for the grammar rules: A aBa , B bB | . Use this table to parse the sentence: abba$

```
cc program3.c
./a.out
```
___

4. Design, develop and implement YACC/C program to demonstrate Shift Reduce Parsing technique for the grammar rules: E E+T | T, T T*F | F, F (E) | id and parse the sentence: id + id* id.

```
cc program4.c
./a.out
```
___

5. Design, develop and implement a C/Java program to generate the machine code using Triples for the statement A = -B * (C +D) whose intermediate code in three-address form:
T1 = -B
T2 = C + D
T3 = T1 + T2
A = T3

```
cat input.txt
T1 -B = ?
T2 C + D
T3 T1 * T2
A T3 = ?
? ? ? ?

cc program4.c
./a.out

cat output.txt

LD R0,-B
ST T1,R0
LD R0,C
ADD R0,D
ST T2,R0
LD R0,T1
MUL R0,T2
ST T3,R0
LD R0,T3
ST A,R0
```

6. a. Write a LEX program to eliminate comment lines in a C program and copy the resulting program into a separate file.

```
cat input.c
#include <stdio.h>
int main()
{
    int a, b, c; /* Hello */
    c =1+2;
    printf("sum is %d",c); //sum
}
```

```
lex 6a.l
cc lex.yy.c -ll
./a.out
```

```
output.c
#include <stdio.h>
int main()
{
    int a, b, c; 
    c =1+2;
    printf("sum is %d",c); 
}
```

b. Write YACC program to recognize valid identifier, operators and keywords in the given text
(C program) file.

```
lex 6b.l
yacc -d 6b.y
cc lex.yy.c y.tab.c -ll
./a.out
```
