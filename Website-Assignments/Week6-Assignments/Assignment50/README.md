# Check If Large?

### Task

You have an array that contains a group of numbers.
The elements of the array can change, and we will use three examples to test the code.

Check if the sum of the first and last numbers is greater than the middle number. If this condition is true, print the message as shown in the example.

If the above condition is not true, check if the sum of the second and the second-to-last numbers is greater than the middle number. If this condition is true, print the message as shown in the example.

If none of the above conditions are true, print the middle number.

### Provided Code

```cpp

// Example 1
int vals[]{100, 200, 250, 400, 200};

// Needed Output
"First Number + Last Number Is Larger Than Middle Number"
"100 + 200 = 300"
"300 > 250"

// Example 2
int vals[]{100, 200, 500, 400, 200};

// Needed Output
"Second Number + Before Last Number Is Larger Than Middle Number"
"200 + 400 = 600"
"600 > 500"

// Example 3
int vals[]{100, 200, 600, 400, 200};

// Needed Output
"Middle Number Is The Largest"
"600"