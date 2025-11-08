# If Else If...

### Task

You have a variable named Check that contains the number 25, which will be used for comparison.
You also have an array that contains several numbers, and the first three numbers in it can change.
We need to:

Check if the first number is greater than 25 (the value of Check), then add the first number with the second-to-last number.

If the second number is greater than 25, add it with the second-to-last number.

If the third number is greater than 25, add it with the second-to-last number.

If more than one of the first three numbers is greater than 25, we must process them in order (from the first to the third).

Use the values from the array when printing the message as shown in the examples.

The output message must be printed over three lines, using cout for each line.

### Provided Code

```cpp
// Example 1
int check = 25;
int nums[]{40, 20, 30, 70, 100};

// Ouput
"{40} + {70} = 110"

// Example 2
int check = 25;
int nums[]{20, 35, 30, 70, 100};

// Ouput
"{35} + {70} = 105"

// Example 2
int check = 25;
int nums[]{20, 25, 30, 70, 100};

// Ouput
"{30} + {70} = 100"