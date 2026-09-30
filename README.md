# DSA_assignment_01
Question no.1-
Operations of Stack

A stack is a linear data structure that follows the LIFO (Last In First Out) principle. It means the element which is inserted last will be removed first.

1. Push Operation

Push operation is used to insert a new element into the stack. The new element is always added at the top position. Before inserting an element, we check whether the stack is full or not.

2. Pop Operation

Pop operation is used to remove the top element from the stack. After removing the element, the top position is decreased by one. If the stack is empty, the pop operation cannot be performed.

3. Peek Operation

Peek operation is used to see the top element of the stack without removing it. It helps us to know which element is currently present at the top.

4. Display Operation

Display operation is used to show all the elements present in the stack. It starts from the top and displays each element one by one until it reaches the bottom.

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Push      | O(1)            |
| Pop       | O(1)            |
| Peek      | O(1)            |
| Display   | O(n)            |


**Note:** Here, `n` represents the number of elements present in the stack.  



# Q2. Circular Queue Using Array

## Introduction

A Circular Queue is a type of queue which follows the FIFO (First In First Out) rule. In this queue, the last position is connected to the first position, so it works like a circle.

It uses two variables:
- **FRONT:** It points to the first element.
- **REAR:** It points to the last element.

The main purpose of using a circular queue is to reuse the empty spaces which are created after deleting elements.

## Operations

| Operation | Description |
|-----------|-------------|
| ENQUEUE(x) | Used to insert a new element into the queue. |
| DEQUEUE() | Used to remove the first element from the queue. |
| FRONT() | Shows the first element without deleting it. |
| DISPLAY() | Prints all the elements of the queue. |

## Important Conditions

| Condition | Meaning |
|-----------|---------|
| `front == -1` | Queue is empty. |
| `(rear + 1) % MAX == front` | Queue is full. |
| `front == rear` | Only one element is present. |

**Note:** We use the modulo (%) operator to move REAR and FRONT back to index 0 after reaching the last position.

For example, if MAX = 5:

`(4 + 1) % 5 = 0`

## Additional Questions

### 1. Why does a circular queue use memory better?

In a circular queue, the empty positions created after deletion can be used again for inserting new elements. This helps in avoiding memory wastage.

### 2. Time Complexity of ENQUEUE and DEQUEUE

| Operation | Time Complexity |
|-----------|-----------------|
| ENQUEUE | O(1) |
| DEQUEUE | O(1) |

Both operations take constant time because they only change the position of FRONT and REAR. No shifting of elements is required.

### 3. Space Complexity

The space complexity of a circular queue using an array is **O(MAX)** because we declare an array with a fixed size to store the elements.

### 4. What happens in a linear queue when REAR reaches the last index?

This condition is called **False Overflow**.

In a linear queue, when REAR reaches the last index, we cannot insert more elements even if some positions at the beginning are empty. This happens because the empty spaces cannot be reused directly.

A circular queue solves this problem by connecting the last position with the first position.

## Difference Between Linear Queue and Circular Queue

| Linear Queue | Circular Queue |
|--------------|----------------|
| Elements are arranged in a straight order. | Elements are arranged in a circular manner. |
| Deleted spaces cannot be reused directly. | Deleted spaces can be reused. |
| False overflow can occur. | Avoids false overflow. |
| REAR moves only forward. | REAR moves in a circular way. |
| Memory utilization is less efficient. | Memory utilization is better. |

## Conclusion

Circular Queue is an improved version of a simple queue. It helps to use empty spaces again and reduces memory wastage. It follows FIFO and uses FRONT and REAR to insert and delete elements.

## Space Complexity

| Operation | Space Complexity |
|-----------|------------------|
| Push      | O(1)             |
| Pop       | O(1)             |
| Peek      | O(1)             |
| Display   | O(1)             |

**Note:** All operations require constant extra space, regardless of the number of elements in the stack.
