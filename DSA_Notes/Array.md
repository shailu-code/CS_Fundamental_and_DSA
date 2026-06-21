# Topic: Array

1) What is an Array?
    Array is a collection of elements stored in contiguous memory locations.
    Because memory is contiguous, accessing any index is fast.

2) Time Complexity:
    Operation   	Complexity
    Access  	    O(1)
    Search	        O(n)
    Insert Middle	O(n)
    Delete Middle	O(n)

3) Why is Array Access O(1)?
    Arrays store elements in contiguous memory locations.
    Using the formula:
        Address = Base Address + (Index × Size of Data Type)

    the computer directly calculates the memory location.
        No traversal is required.

    Therefore:
        Access = O(1)