/* 
Pointers assignment
Question 1
int a = 10;
int* p = &a;
*p = 20;
std::cout << a;
​
Questions:
What will be the output?
20
Will this run/compile?
Yes
Is there a memory leak or dangling pointer?
None

Question 2
int* p = nullptr;
*p = 5;
​
Questions:
What will be the output?
No output
Will this run/compile?
It would complie but not run
Is there a memory leak or dangling pointer?
None

## Question 2.1

```cpp
int a = 5;
int* p = &a;
int b = *p;
*p = 10;
std::cout << a << " " << b;
```

**Questions**:

- What will be the output?
10 5
- Will this run/compile?
Yes to both
- Is there a memory leak or dangling pointer?
No to both


## Question 3

```cpp
int* p = new int(5);
delete p;
*p = 10;
```

**Questions**:

- What will be the output?
None
- Will this run/compile?
Would compile but not run
- Is there a memory leak or dangling pointer?
No memory leak but p is a dangling pointer

## Question 4

```cpp
int a = 10;
float* p = (float*)&a;
std::cout << *p;
```

**Questions**:

- What will be the output?
The output might not be 10 because its converting int to float
- Will this run/compile?
It would compile but not run
- Is there a memory leak or dangling pointer?
None














*/