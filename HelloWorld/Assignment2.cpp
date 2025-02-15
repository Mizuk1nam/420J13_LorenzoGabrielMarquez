﻿/* 
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

## Question 5

```cpp
int a = 5;
int* p = &a;
p = nullptr;
*p = 10;
```

**Questions**:

- What will be the output?
None it will crash
- Will this run/compile?
It will compile but not run
- Is there a memory leak or dangling pointer?
None

## Question 6

```cpp
int* p = new int(5);
int* q = p;
delete p;
```

**Questions**:

- What will be the output?
None
- Will this run/compile?
Yes
- Is there a memory leak or dangling pointer?
No memory leak but q is a dangling pointer

## Question 7

```cpp
int* p = new int(5);
p = new int(10);
```

**Questions**:

- What will be the output?
None not std cout
- Will this run/compile?
Yes
- Is there a memory leak or dangling pointer?
Yes memory leak because new int(5) was never deleted but no dangling pointer

Question  8
void func(int* p) {
    *p = 10;
}

int main() {
    int a = 5;
    func(&a);
    std::cout << a;
}

**Questions**:

- What will be the output?
10
- Will this run/compile?
Yes to both
- Is there a memory leak or dangling pointer?
None









*/