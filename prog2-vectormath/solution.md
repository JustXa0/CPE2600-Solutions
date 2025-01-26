# Programming Assignment 2

For this assignment, I created several functions to represent different elementary functions done on vectors such as addition, subtraction, as well as dot and cross multiplication. I stored the inital 2 vectors being used for calculations as a simple int array, where the first position contained the size of the vector that the array represented. I then transfered them to new arrays of size specified by the user to ensure that no data was misrepresented due to the automatic initaliziation of arrays to 0s. The user would then provide a number associated with an operation that should be performed between the two vectors, with a switch-case used for readability.

## Grade

I recieved 3 points off on test case 5, where I did not correctly catch that the two given vectors were of the same size when doing a subtraction calculation.
I recieved 5 points off on test case 7, where I did not correctly catch that a cross product should only be done on vectors of 3 dimensions or size 3.

## Learnings

From this assignment, I learned how to store and pass data back and forth through pointers, as well as how to perform simple calculations at a large scale.