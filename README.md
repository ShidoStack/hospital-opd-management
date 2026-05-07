# 🏥 Hospital OPD Management System

A console-based Hospital OPD (Outpatient Department) Management System developed in **C++** using **Data Structures** like **Circular Queue** and **Deque** to efficiently manage patient flow in a hospital.

This project simulates real-world OPD operations such as patient registration, emergency handling, VIP priority management, token generation, and queue-based patient servicing.

---

# 🚀 Features

## 👨‍⚕️ Patient Management
- Add General Patients
- Add VIP Patients
- Add Emergency Patients
- Auto-generated Patient IDs
- Auto-generated Token Numbers

## 📋 Queue Management
- Circular Queue for General Patients
- Deque for Priority Patients
- Emergency patients handled with highest priority
- VIP patients handled before general patients

## 🔍 Search Functionality
- Search patients using Token Number
- Displays complete patient details

## ⏳ Waiting Time Estimation
- Calculates estimated waiting time
- Based on total patients in queue

## 📊 Queue Statistics
- Display all patient queues
- Count total waiting patients
- Separate counts for:
  - Priority Patients
  - General Patients

## 🩺 Patient Serving System
- Emergency patients served first
- VIP patients served second
- General patients served afterward

---

# 🧠 Data Structures Used

| Data Structure | Purpose |
|----------------|---------|
| Circular Queue | Manage General Patients |
| Deque | Manage VIP & Emergency Patients |

---

# 🛠️ Technologies Used

- C++
- Object-Oriented Programming (OOP)
- Dynamic Memory Allocation
- Queue Data Structure
- Deque Data Structure
- VS Code
- Git & GitHub

---

# 📂 Project Structure

```bash
Hospital-OPD-Management-System/
│
├── main.cpp
├── README.md

--- 
