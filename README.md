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

7. Design, develop and implement a C/C++/Java program to simulate the working of Shortest remaining time and Round Robin (RR) scheduling algorithms. Experiment with different quantum sizes for RR algorithm.

```
cc program7.c
./a.out
1.RR
 2.SRTf 
1
Enter Number of process : 6
Enter arrival time for process P1 : 0
ENter Burst time for Process P1 : 8
Enter arrival time for process P2 : 1   
ENter Burst time for Process P2 : 4
Enter arrival time for process P3 : 2
ENter Burst time for Process P3 : 2
Enter arrival time for process P4 : 3
ENter Burst time for Process P4 : 1
Enter arrival time for process P5 : 4
ENter Burst time for Process P5 : 3
Enter arrival time for process P6 : 5
ENter Burst time for Process P6 : 2
Enter time quantum :    2

Process time | TurnaroundTime|Waiting Time 
P[3]    |       4       |       2
P[4]    |       4       |       3
P[6]    |       6       |       4
P[2]    |       14      |       10
P[5]    |       12      |       9
P[1]    |       20      |       12

 Average Waiting Time=6.67

 Average Turnaround Time Time=10.00


1.RR
 2.SRTf 
2
Enter Number of process : 6
Enter arrival time for process P1 : 0
ENter Burst time for Process P1 : 8
Enter arrival time for process P2 : 1
ENter Burst time for Process P2 : 4
Enter arrival time for process P3 : 2
ENter Burst time for Process P3 : 2
Enter arrival time for process P4 : 3
ENter Burst time for Process P4 : 1
Enter arrival time for process P5 : 4
ENter Burst time for Process P5 : 3
Enter arrival time for process P6 : 5
ENter Burst time for Process P6 : 2

Process time | TurnaroundTime|Waiting Tie 

P[3]    |       |       2       |       0

P[4]    |       |       2       |       1

P[6]    |       |       2       |       0

P[2]    |       |       9       |       5

P[5]    |       |       9       |       6

P[1]    |       |       20      |       12

Average waiting time=4.000000
Average Turnaround time 7.333333
```

8. Design, develop and implement a C/C++/Java program to implement Banker‟s algorithm. Assume suitable input required to demonstrate the results

```
cc program8.c
./a.out

Enter number of process(p) : 5
Enter number of resource(r) : 3
Enter Allocation matrix : 0 1 0
2 0 0
3 0 2
2 1 1
0 0 2
Enter Max matrix : 7 5 3
3 2 2
9 0 2
4 2 2
5 3 3
Enter Total number of each resource : 10 5 7
Available : 332

Allocation matrix :     Max Matrix :     Need Matrix 
010             753             743
200             322             122
302             902             600
211             422             211
002             533             531
Safe State : 
2->4->5->1->3->
```

9. Design, develop and implement a C/C++/Java program to implement page replacement algorithms LRU and FIFO. Assume suitable input required to demonstrate the results.

```
cc program9.c
./a.out


Enter the no of empty frames: 3

Enter the length of the string: 15

Enter the string: 701203042303120

*********** MENU ***********
1:FIFO
2:LRU 
3:EXIT
Enter your choice: 1

        PAGE     FRAMES                  FAULTS
        7        7 � �  Page-fault0
        0        7 0 �  Page-fault1
        1        7 0 1  Page-fault2
        2        2 0 1  Page-fault3
        0        2 0 1  No page-fault
        3        2 3 1  Page-fault4
        0        2 3 0  Page-fault5
        4        4 3 0  Page-fault6
        2        4 2 0  Page-fault7
        3        4 2 3  Page-fault8
        0        0 2 3  Page-fault9
        3        0 2 3  No page-fault
        1        0 1 3  Page-fault10
        2        0 1 2  Page-fault11
        0        0 1 2  No page-fault

Do u want to continue IF YES PRESS 1
IF NO PRESS 0 : 1

*********** MENU ***********
1:FIFO
2:LRU 
3:EXIT
Enter your choice: 2

        PAGE     FRAMES                  FAULTS
        7        7 � �  Page-fault0
        0        7 0 �  Page-fault1
        1        7 0 1  Page-fault2
        2        0 1 2  Page-fault3
        0        1 2 0  No page fault
        3        2 0 3  Page-fault4
        0        2 3 0  No page fault
        4        3 0 4  Page-fault5
        2        0 4 2  Page-fault6
        3        4 2 3  Page-fault7
        0        2 3 0  Page-fault8
        3        2 0 3  No page fault
        1        0 3 1  Page-fault9
        2        3 1 2  Page-fault10
        0        1 2 0  Page-fault11

Do u want to continue IF YES PRESS 1
IF NO PRESS 0 : 3
```
