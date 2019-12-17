# Stacks-and-Queues

## Stacks using arrays

Program a stack of integers. The stack should be implemented by using arrays.

__Input Format__: The first input is the number of test cases. Thereafter each test case starts with n, the number of inputs. Thereafter, each test case starts with n, the number of commands and s, the maximum stack size (the maximum number of elements that can be stored in the stack at any point of time). Thereafter, each of the following n lines have commands “push a” meaning push integer a in the stack; “pop” meaning pop an item from the stack and print on the screen; and “top”, meaning print the element at the top of the stack on the screen.

An attempt to add an element in an already full stack gives a “stack overflow” error printed on the screen. An attempt to pop or access an element in an already empty stack gives a “stack underflow” error printed on the screen.

__Output Format__: As below

__Sample Input__:
1
6 2
push 1
push 2
push 3
pop
pop
top

__Sample Output__:
stack overflow
2
1
stack underflow

## Stacks using Linked Lists

Same as question 1 with the change that the implementation should be by using a linked list instead of an array. There will be no size specified in the inputs.

__Sample Input__:
1
6
push 1
push 2
push 3
pop
pop
top

__Sample Output__:
3
2
1

## Queues using arrays

Same as question 1 with the term stack replaced by a queue

__Sample Input__:
1
6 2
enqueue 1
enqueue 2
enqueue 3
dequeue
dequeue
front

__Sample Output__:
queue overflow
1
2
queue underflow

## Queues using Linked Lists

Same as question 2 with the change that the implementation should be by using a linked list instead of an array. There will be no size specified in the inputs.

__Sample Input__:
1
6
enqueue 1
enqueue 2
enqueue 3
dequeue
dequeue
front

__Sample Output__:
1
2
3
