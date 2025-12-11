# Task

You have a set of variables that will help you complete the required task.

The requirement is to print the numbers in the required order using a loop.

After each number, you must sum it with its corresponding number from the other side.

Specifically: First number with the last number, second number with the second-to-last number, third number with the third number (middle element), fourth number with the second number, and last number with the first number.

It is strictly forbidden to use any numbers in the final solution other than the ones defined in your initial variables.

View the example to understand the requirement.

### Provided Code

```cpp
int help_num = 4;
int nums[] = {2, 4, 5, 6, 10};

// Output Needed
"2 + 10 = 12"
"4 + 6 = 10"
"5 + 5 = 10"
"6 + 4 = 10"
"10 + 2 = 12"