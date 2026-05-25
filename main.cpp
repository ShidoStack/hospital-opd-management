

#include <iostream>
#include <string>
#include <limits>

using namespace std;


//                      PATIENT STRUCT

struct Patient {

    int id;
    int tokenNo;
    string name;
    int age;
    string type;
};


//                 P1 MEMBER WORK
//          CIRCULAR QUEUE IMPLEMENTATION


class CircularQueue {

private:

    int front;
    int rear;
    int size;
    int capacity;

    Patient* arr;

public:

    // Constructor
    CircularQueue(int cap) {

        capacity = cap;

        front = -1;
        rear = -1;

        size = 0;

        arr = new Patient[capacity];
    }

    // Destructor
    ~CircularQueue() {

        delete[] arr;
    }

    // Check Queue Empty
    bool isEmpty() {

        return size == 0;
    }

    // Check Queue Full
    bool isFull() {

        return size == capacity;
    }

    // Add General Patient
    void enqueue(Patient p) {

        if (isFull()) {

            cout << "\nGeneral Queue Full!\n";

            return;
        }

        // First element
        if (isEmpty()) {

            front = 0;
        }

        rear = (rear + 1) % capacity;

        arr[rear] = p;

        size++;

        cout << "\nGeneral Patient Registered Successfully\n";

        cout << "Token Number : " << p.tokenNo << endl;
    }

    // Remove Patient
    Patient dequeue() {

        if (isEmpty()) {

            return {-1, -1, "", 0, ""};
        }

        Patient temp = arr[front];

        // Only one element
        if (front == rear) {

            front = rear = -1;
        }
        else {

            front = (front + 1) % capacity;
        }

        size--;

        return temp;
    }

    // Display Queue
    void display() {

        if (isEmpty()) {

            cout << "\nGeneral Queue Empty\n";

            return;
        }

        cout << "\n========== GENERAL QUEUE ==========\n";

        int i = front;

        for (int count = 0; count < size; count++) {

            cout << "\nPatient ID : " << arr[i].id;
            cout << "\nToken No   : " << arr[i].tokenNo;
            cout << "\nName       : " << arr[i].name;
            cout << "\nAge        : " << arr[i].age;
            cout << "\nType       : " << arr[i].type;

            cout << "\n-----------------------------------";

            i = (i + 1) % capacity;
        }

        cout << endl;
    }

    // Count Patients Using O(n) Traversal
    int countPatientsTraversal() {

        int countPatients = 0;

        int i = front;

        for (int count = 0; count < size; count++) {

            countPatients++;

            i = (i + 1) % capacity;
        }

        return countPatients;
    }

    // Search Patient By Token
    bool searchPatientByToken(int token) {

        if (isEmpty()) {

            return false;
        }

        int i = front;

        for (int count = 0; count < size; count++) {

            if (arr[i].tokenNo == token) {

                cout << "\nPatient Found In General Queue\n";

                cout << "Patient ID : " << arr[i].id << endl;
                cout << "Token No   : " << arr[i].tokenNo << endl;
                cout << "Name       : " << arr[i].name << endl;
                cout << "Age        : " << arr[i].age << endl;
                cout << "Type       : " << arr[i].type << endl;

                return true;
            }

            i = (i + 1) % capacity;
        }

        return false;
    }
};


//                  P2 MEMBER WORK
//                  DEQUE IMPLEMENTATION


class Deque {

private:

    int front;
    int rear;
    int size;
    int capacity;

    Patient* arr;

public:

    // Constructor
    Deque(int cap) {

        capacity = cap;

        front = -1;
        rear = -1;

        size = 0;

        arr = new Patient[capacity];
    }

    // Destructor
    ~Deque() {

        delete[] arr;
    }

    // Check Empty
    bool isEmpty() {

        return size == 0;
    }

    // Check Full
    bool isFull() {

        return size == capacity;
    }

    // Add Emergency Patient At Front
    void insertFront(Patient p) {

        if (isFull()) {

            cout << "\nPriority Queue Full!\n";

            return;
        }

        // First element
        if (isEmpty()) {

            front = rear = 0;
        }
        else {

            front = (front - 1 + capacity) % capacity;
        }

        arr[front] = p;

        size++;

        cout << "\nEmergency Patient Added Successfully\n";

        cout << "Token Number : " << p.tokenNo << endl;
    }

    // Add VIP Patient At Rear
    void insertRear(Patient p) {

        if (isFull()) {

            cout << "\nPriority Queue Full!\n";

            return;
        }

        // First element
        if (isEmpty()) {

            front = rear = 0;
        }
        else {

            rear = (rear + 1) % capacity;
        }

        arr[rear] = p;

        size++;

        cout << "\nVIP Patient Added Successfully\n";

        cout << "Token Number : " << p.tokenNo << endl;
    }

    // Serve Patient From Front
    Patient deleteFront() {

        if (isEmpty()) {

            return {-1, -1, "", 0, ""};
        }

        Patient temp = arr[front];

        // One element
        if (front == rear) {

            front = rear = -1;
        }
        else {

            front = (front + 1) % capacity;
        }

        size--;

        return temp;
    }

    // Display Queue
    void display() {

        if (isEmpty()) {

            cout << "\nPriority Queue Empty\n";

            return;
        }

        cout << "\n========== PRIORITY QUEUE ==========\n";

        int i = front;

        for (int count = 0; count < size; count++) {

            cout << "\nPatient ID : " << arr[i].id;
            cout << "\nToken No   : " << arr[i].tokenNo;
            cout << "\nName       : " << arr[i].name;
            cout << "\nAge        : " << arr[i].age;
            cout << "\nType       : " << arr[i].type;

            cout << "\n-----------------------------------";

            i = (i + 1) % capacity;
        }

        cout << endl;
    }

    // Count Patients Using O(n)
    int countPatientsTraversal() {

        int countPatients = 0;

        int i = front;

        for (int count = 0; count < size; count++) {

            countPatients++;

            i = (i + 1) % capacity;
        }

        return countPatients;
    }

    // Search Patient By Token
    bool searchPatientByToken(int token) {

        if (isEmpty()) {

            return false;
        }

        int i = front;

        for (int count = 0; count < size; count++) {

            if (arr[i].tokenNo == token) {

                cout << "\nPatient Found In Priority Queue\n";

                cout << "Patient ID : " << arr[i].id << endl;
                cout << "Token No   : " << arr[i].tokenNo << endl;
                cout << "Name       : " << arr[i].name << endl;
                cout << "Age        : " << arr[i].age << endl;
                cout << "Type       : " << arr[i].type << endl;

                return true;
            }

            i = (i + 1) % capacity;
        }

        return false;
    }
};


//                  P3 MEMBER WORK
//          PATIENT REGISTRATION & INTEGRATION


// Input Validation Function
int getValidInteger() {

    int value;

    while (!(cin >> value)) {

        cout << "\nInvalid Input! Enter Numbers Only: ";

        cin.clear();

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return value;
}

// Create Patient Function
Patient createPatient(int& patientID,
                    int& tokenNo,
                    string patientType) {

    Patient p;

    p.id = patientID++;

    p.tokenNo = tokenNo++;

    p.type = patientType;

    cin.ignore();

    cout << "\nEnter Patient Name: ";

    getline(cin, p.name);

    cout << "Enter Age: ";

    p.age = getValidInteger();

    return p;
}


//                  P4 MEMBER WORK
//          DISPLAY + COUNT + SEARCH + WAITING TIME


// Waiting Time Estimate
void waitingTimeEstimate(int totalPatients) {

    int waitingTime = totalPatients * 5;

    cout << "\nEstimated Waiting Time : ";

    cout << waitingTime << " Minutes\n";
}


//                        MAIN FUNCTION

int main() {

    CircularQueue generalQueue(10);

    Deque priorityQueue(10);

    int choice;

    int patientID = 1;

    int tokenNo = 100;

    while (true) {

        cout << "\n\n=====================================\n";
        cout << "      HOSPITAL OPD QUEUE SYSTEM\n";
        cout << "=====================================\n";

        cout << "1. Register General Patient\n";
        cout << "2. Register VIP Patient\n";
        cout << "3. Register Emergency Patient\n";
        cout << "4. Call Next Patient\n";
        cout << "5. Display All Queues\n";
        cout << "6. Count Patients\n";
        cout << "7. Waiting Time Estimate\n";
        cout << "8. Search Patient By Token\n";
        cout << "9. Exit\n";

        cout << "\nEnter Choice: ";

        choice = getValidInteger();

        switch (choice) {

        
        // GENERAL PATIENT

        case 1: {

            Patient p =
                createPatient(patientID,
                            tokenNo,
                            "General");

            generalQueue.enqueue(p);

            break;
        }

       
        // VIP PATIENT
       
        case 2: {

            Patient p =
                createPatient(patientID,
                            tokenNo,
                            "VIP");

            priorityQueue.insertRear(p);

            break;
        }

        // EMERGENCY PATIENT

        case 3: {

            Patient p =
                createPatient(patientID,
                            tokenNo,
                            "Emergency");

            priorityQueue.insertFront(p);

            break;
        }


        // CALL NEXT PATIENT

        case 4: {

            Patient served;

            // Priority Queue First
            if (!priorityQueue.isEmpty()) {

                served = priorityQueue.deleteFront();
            }
            else if (!generalQueue.isEmpty()) {

                served = generalQueue.dequeue();
            }
            else {

                cout << "\nNo Patients Waiting\n";

                break;
            }

            cout << "\n========== NOW SERVING ==========\n";

            cout << "Patient ID : " << served.id << endl;
            cout << "Token No   : " << served.tokenNo << endl;
            cout << "Name       : " << served.name << endl;
            cout << "Age        : " << served.age << endl;
            cout << "Type       : " << served.type << endl;

            cout << "=================================\n";

            break;
        }

 
        // DISPLAY ALL QUEUES

        case 5:

            priorityQueue.display();

            generalQueue.display();

            break;


        // COUNT PATIENTS

        case 6: {

            int priorityPatients =
                priorityQueue.countPatientsTraversal();

            int generalPatients =
                generalQueue.countPatientsTraversal();

            cout << "\n========== PATIENT COUNT ==========\n";

            cout << "Priority Patients : "
                << priorityPatients << endl;

            cout << "General Patients  : "
                << generalPatients << endl;

            cout << "Total Patients    : "
                << priorityPatients + generalPatients
                << endl;

            break;
        }


        // WAITING TIME

        case 7: {

            int totalPatients =
                priorityQueue.countPatientsTraversal()
                +
                generalQueue.countPatientsTraversal();

            waitingTimeEstimate(totalPatients);

            break;
        }


        // SEARCH PATIENT

        case 8: {

            int searchToken;

            cout << "\nEnter Token Number: ";

            searchToken = getValidInteger();

            bool found = false;

            // Search Priority Queue
            found =
                priorityQueue.searchPatientByToken(
                    searchToken);

            // Search General Queue
            if (!found) {

                found =
                    generalQueue.searchPatientByToken(
                        searchToken);
            }

            // Not Found
            if (!found) {

                cout << "\nPatient Not Found\n";
            }

            break;
        }


        // EXIT

        case 9:

            cout << "\nExiting Hospital OPD System...\n";

            return 0;


        // INVALID CHOICE

        default:

            cout << "\nInvalid Choice\n";
        }
    }

    return 0;
}