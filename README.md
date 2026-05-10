# Hospital OPD Queue Manager

A simple C++ project that manages hospital OPD patient queues using:

* **Circular Queue** for General Patients
* **Deque** for VIP and Emergency Patients

This project demonstrates queue data structures and patient management operations.

---

# Features

## General Queue (Circular Queue)

* Register General Patients
* FIFO queue handling

## Priority Queue (Deque)

* Add Emergency Patients at Front
* Add VIP Patients at Rear
* Serve priority patients first

## Additional Features

* Display all queues
* Count total patients
* Search patient by token number
* Estimate waiting time

---

# Technologies Used

* C++
* Object Oriented Programming
* Arrays
* Circular Queue
* Deque

---

# Project Structure

| Member | Work                                     |
| ------ | ---------------------------------------- |
| P1     | Circular Queue Implementation            |
| P2     | Deque Implementation                     |
| P3     | Patient Registration & Queue Integration |
| P4     | Display, Search, Count & Waiting Time    |

---

# Menu Options

```text
1. Register General Patient
2. Register VIP Patient
3. Register Emergency Patient
4. Call Next Patient
5. Display All Queues
6. Count Patients
7. Waiting Time Estimate
8. Search Patient By Token
9. Exit
```

---

# How to Run

## Compile

```bash
clang++ hospital-opd-management.cpp -o opd
```

## Run

```bash
./opd
```

---

# Data Structures Used

## Circular Queue

Used for:

* General Patients

Operations:

* Enqueue
* Dequeue
* Display
* Count
* Search

## Deque

Used for:

* VIP Patients
* Emergency Patients

Operations:

* Insert Front
* Insert Rear
* Delete Front
* Display
* Count
* Search

---

# Waiting Time Logic

Estimated waiting time:

```text
Waiting Time = Total Patients × 5 Minutes
```

---

# Sample Output

```text
========== NOW SERVING ==========
Patient ID : 1
Token No   : 100
Name       : Rahul
Age        : 25
Type       : Emergency
=================================
```

---

# Learning Outcomes

* Implementation of Circular Queue
* Implementation of Deque
* Queue Management System Design
* OOP Concepts in C++
* Input Validation
* Traversal Operations

---

# Author

Hospital OPD Queue Manager Team Project
C++ Data Structures Mini Project
