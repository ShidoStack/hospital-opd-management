#include <iostream>
#include <string>

using namespace std;

// ======================================================
//                    PATIENT STRUCT
// ======================================================

struct Patient {

    int id;
    int tokenNo;
    string name;
    int age;
    string disease;
    string type;
    int roomNo;
};

// ======================================================
//                CIRCULAR QUEUE
// ======================================================

class CircularQueue {

private:

    int front, rear, size, capacity;

    Patient* arr;

public:

    // Constructor
    CircularQueue(int cap) {

        capacity = cap;

        front = rear = -1;

        size = 0;

        arr = new Patient[capacity];
    }

    // Destructor
    ~CircularQueue() {

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

    // Get Queue Size
    int getSize() {

        return size;
    }

    // Add Patient
    void enqueue(Patient p) {

        if (isFull()) {

            cout << "\n❌ General Queue Full!\n";

            return;
        }

        if (isEmpty()) {

            front = 0;
        }

        rear = (rear + 1) % capacity;

        arr[rear] = p;

        size++;

        cout << "\n✅ General Patient Added Successfully\n";

        cout << "Patient ID  : " << p.id << endl;

        cout << "Token Number: " << p.tokenNo << endl;
    }

    // Remove Patient
    Patient dequeue() {

        if (isEmpty()) {

            return {-1, -1, "", 0, "", "", 0};
        }

        Patient temp = arr[front];

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

            cout << "\n📭 General Queue Empty\n";

            return;
        }

        cout << "\n========== GENERAL QUEUE ==========\n";

        int i = front;

        for (int count = 0; count < size; count++) {

            cout << "\nPatient ID : " << arr[i].id;
            cout << "\nToken No   : " << arr[i].tokenNo;
            cout << "\nName       : " << arr[i].name;
            cout << "\nAge        : " << arr[i].age;
            cout << "\nDisease    : " << arr[i].disease;
            cout << "\nType       : " << arr[i].type;
            cout << "\nRoom No    : " << arr[i].roomNo;

            cout << "\n-----------------------------------";

            i = (i + 1) % capacity;
        }

        cout << endl;
    }

    // Search By Token
    bool searchPatientByToken(int searchToken) {

        if (isEmpty()) {

            return false;
        }

        int i = front;

        for (int count = 0; count < size; count++) {

            if (arr[i].tokenNo == searchToken) {

                cout << "\n========== PATIENT FOUND ==========\n";

                cout << "Patient ID : " << arr[i].id << endl;
                cout << "Token No   : " << arr[i].tokenNo << endl;
                cout << "Name       : " << arr[i].name << endl;
                cout << "Age        : " << arr[i].age << endl;
                cout << "Disease    : " << arr[i].disease << endl;
                cout << "Type       : " << arr[i].type << endl;
                cout << "Room No    : " << arr[i].roomNo << endl;

                cout << "===================================\n";

                return true;
            }

            i = (i + 1) % capacity;
        }

        return false;
    }
};

// ======================================================
//                        DEQUE
// ======================================================

class Deque {

private:

    int front, rear, size, capacity;

    Patient* arr;

public:

    // Constructor
    Deque(int cap) {

        capacity = cap;

        front = rear = -1;

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

    // Get Size
    int getSize() {

        return size;
    }

    // Emergency Patient
    void insertFront(Patient p) {

        if (isFull()) {

            cout << "\n❌ Priority Queue Full!\n";

            return;
        }

        if (isEmpty()) {

            front = rear = 0;
        }
        else {

            front = (front - 1 + capacity) % capacity;
        }

        arr[front] = p;

        size++;

        cout << "\n🚑 Emergency Patient Added Successfully\n";

        cout << "Patient ID  : " << p.id << endl;

        cout << "Token Number: " << p.tokenNo << endl;
    }

    // VIP Patient
    void insertRear(Patient p) {

        if (isFull()) {

            cout << "\n❌ Priority Queue Full!\n";

            return;
        }

        if (isEmpty()) {

            front = rear = 0;
        }
        else {

            rear = (rear + 1) % capacity;
        }

        arr[rear] = p;

        size++;

        cout << "\n⭐ VIP Patient Added Successfully\n";

        cout << "Patient ID  : " << p.id << endl;

        cout << "Token Number: " << p.tokenNo << endl;
    }

    // Serve Patient
    Patient deleteFront() {

        if (isEmpty()) {

            return {-1, -1, "", 0, "", "", 0};
        }

        Patient temp = arr[front];

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

            cout << "\n📭 Priority Queue Empty\n";

            return;
        }

        cout << "\n========== PRIORITY QUEUE ==========\n";

        int i = front;

        for (int count = 0; count < size; count++) {

            cout << "\nPatient ID : " << arr[i].id;
            cout << "\nToken No   : " << arr[i].tokenNo;
            cout << "\nName       : " << arr[i].name;
            cout << "\nAge        : " << arr[i].age;
            cout << "\nDisease    : " << arr[i].disease;
            cout << "\nType       : " << arr[i].type;
            cout << "\nRoom No    : " << arr[i].roomNo;

            cout << "\n-----------------------------------";

            i = (i + 1) % capacity;
        }

        cout << endl;
    }

    // Search By Token
    bool searchPatientByToken(int searchToken) {

        if (isEmpty()) {

            return false;
        }

        int i = front;

        for (int count = 0; count < size; count++) {

            if (arr[i].tokenNo == searchToken) {

                cout << "\n========== PATIENT FOUND ==========\n";

                cout << "Patient ID : " << arr[i].id << endl;
                cout << "Token No   : " << arr[i].tokenNo << endl;
                cout << "Name       : " << arr[i].name << endl;
                cout << "Age        : " << arr[i].age << endl;
                cout << "Disease    : " << arr[i].disease << endl;
                cout << "Type       : " << arr[i].type << endl;
                cout << "Room No    : " << arr[i].roomNo << endl;

                cout << "===================================\n";

                return true;
            }

            i = (i + 1) % capacity;
        }

        return false;
    }
};

// ======================================================
//                        MAIN
// ======================================================

int main() {

    CircularQueue generalQ(10);

    Deque priorityQ(10);

    int choice;

    int patientID = 1;

    int tokenNo = 100;

    while (true) {

        cout << "\n\n=====================================\n";
        cout << "        🏥 HOSPITAL OPD SYSTEM\n";
        cout << "=====================================\n";

        cout << "1. Add General Patient\n";
        cout << "2. Add VIP Patient\n";
        cout << "3. Add Emergency Patient\n";
        cout << "4. Serve Next Patient\n";
        cout << "5. Display All Queues\n";
        cout << "6. Count Patients\n";
        cout << "7. Waiting Time Estimate\n";
        cout << "8. Search Patient By Token Number\n";
        cout << "9. Exit\n";

        cout << "\nEnter Choice: ";

        cin >> choice;

        cin.ignore();

        Patient p;

        switch (choice) {

        // ==================================================
        // ADD GENERAL PATIENT
        // ==================================================

        case 1:

            p.id = patientID++;

            p.tokenNo = tokenNo++;

            p.roomNo = 101;

            p.type = "General";

            cout << "Enter Patient Name: ";

            getline(cin, p.name);

            cout << "Enter Age: ";

            cin >> p.age;

            cin.ignore();

            cout << "Enter Disease/Symptoms: ";

            getline(cin, p.disease);

            generalQ.enqueue(p);

            break;

        // ==================================================
        // ADD VIP PATIENT
        // ==================================================

        case 2:

            p.id = patientID++;

            p.tokenNo = tokenNo++;

            p.roomNo = 102;

            p.type = "VIP";

            cout << "Enter VIP Patient Name: ";

            getline(cin, p.name);

            cout << "Enter Age: ";

            cin >> p.age;

            cin.ignore();

            cout << "Enter Disease/Symptoms: ";

            getline(cin, p.disease);

            priorityQ.insertRear(p);

            break;

        // ==================================================
        // ADD EMERGENCY PATIENT
        // ==================================================

        case 3:

            p.id = patientID++;

            p.tokenNo = tokenNo++;

            p.roomNo = 999;

            p.type = "Emergency";

            cout << "Enter Emergency Patient Name: ";

            getline(cin, p.name);

            cout << "Enter Age: ";

            cin >> p.age;

            cin.ignore();

            cout << "Enter Disease/Symptoms: ";

            getline(cin, p.disease);

            priorityQ.insertFront(p);

            break;

        // ==================================================
        // SERVE PATIENT
        // ==================================================

        case 4: {

            Patient served;

            if (!priorityQ.isEmpty()) {

                served = priorityQ.deleteFront();
            }
            else if (!generalQ.isEmpty()) {

                served = generalQ.dequeue();
            }
            else {

                cout << "\n❌ No Patients Waiting\n";

                break;
            }

            cout << "\n===================================\n";
            cout << "         🩺 NOW SERVING\n";
            cout << "===================================\n";

            cout << "Patient ID : " << served.id << endl;
            cout << "Token No   : " << served.tokenNo << endl;
            cout << "Name       : " << served.name << endl;
            cout << "Type       : " << served.type << endl;
            cout << "Age        : " << served.age << endl;
            cout << "Disease    : " << served.disease << endl;
            cout << "Room No    : " << served.roomNo << endl;

            cout << "===================================\n";

            break;
        }

        // ==================================================
        // DISPLAY QUEUES
        // ==================================================

        case 5:

            priorityQ.display();

            generalQ.display();

            break;

        // ==================================================
        // COUNT PATIENTS
        // ==================================================

        case 6: {

            int priorityCount = priorityQ.getSize();

            int generalCount = generalQ.getSize();

            cout << "\n========== PATIENT COUNT ==========\n";

            cout << "Priority Patients : "
                 << priorityCount << endl;

            cout << "General Patients  : "
                 << generalCount << endl;

            cout << "Total Patients    : "
                 << priorityCount + generalCount << endl;

            break;
        }

        // ==================================================
        // WAITING TIME
        // ==================================================

        case 7: {

            int totalPatients =
                priorityQ.getSize() +
                generalQ.getSize();

            int waitingTime = totalPatients * 5;

            cout << "\n⏳ Estimated Waiting Time : ";

            cout << waitingTime << " Minutes\n";

            break;
        }

        // ==================================================
        // SEARCH BY TOKEN
        // ==================================================

        case 8: {

            int searchToken;

            cout << "\nEnter Token Number To Search: ";

            cin >> searchToken;

            bool found = false;

            // Search Priority Queue First
            found = priorityQ.searchPatientByToken(searchToken);

            // Search General Queue
            if (!found) {

                found = generalQ.searchPatientByToken(searchToken);
            }

            // Not Found
            if (!found) {

                cout << "\n❌ PATIENT NOT FOUND\n";
            }

            break;
        }

        // ==================================================
        // EXIT
        // ==================================================

        case 9:

            cout << "\n✅ Exiting Hospital OPD System...\n";

            return 0;

        // ==================================================
        // INVALID CHOICE
        // ==================================================

        default:

            cout << "\n❌ Invalid Choice\n";
        }
    }

    return 0;
}