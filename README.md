# Stacks-and-Queues

## Stacks using arrays

Program a stack of integers. The stack should be implemented by using arrays.

__Input Format__: The first input is the number of test cases. Thereafter each test case starts with n, the number of inputs. Thereafter, each test case starts with n, the number of commands and s, the maximum stack size (the maximum number of elements that can be stored in the stack at any point of time). Thereafter, each of the following n lines have commands “push a” meaning push integer a in the stack; “pop” meaning pop an item from the stack and print on the screen; and “top”, meaning print the element at the top of the stack on the screen.

An attempt to add an element in an already full stack gives a “stack overflow” error printed on the screen. An attempt to pop or access an element in an already empty stack gives a “stack underflow” error printed on the screen.

__Output Format__: As below <br />

__Sample Input__: <br />
1 <br />
6 2 <br />
push 1 <br />
push 2 <br />
push 3 <br />
pop <br />
pop <br />
top <br />

__Sample Output__: <br />
stack overflow <br />
2 <br />
1 <br />
stack underflow <br />

## Stacks using Linked Lists <br />

Same as question 1 with the change that the implementation should be by using a linked list instead of an array. There will be no size specified in the inputs.

__Sample Input__: <br />
1 <br />
6 <br />
push 1 <br />
push 2 <br />
push 3 <br />
pop <br />
pop <br />
top <br />

__Sample Output__: <br />
3 <br />
2 <br />
1 <br />

## Queues using arrays

Same as question 1 with the term stack replaced by a queue

__Sample Input__: <br />
1 <br />
6 2 <br />
enqueue 1 <br /> 
enqueue 2 <br />
enqueue 3 <br />
dequeue <br />
dequeue <br />
front <br />

__Sample Output__:
queue overflow <br />
1 <br /> 
2 <br />
queue underflow <br />

## Queues using Linked Lists

Same as question 2 with the change that the implementation should be by using a linked list instead of an array. There will be no size specified in the inputs.

__Sample Input__: <br />
1 <br />
6 <br />
enqueue 1 <br />
enqueue 2 <br />
enqueue 3 <br />
dequeue <br />
dequeue <br />
front <br />

__Sample Output__: <br />
1 <br />
2 <br />
3 <br />
 
