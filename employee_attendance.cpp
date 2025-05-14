#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;
class Employee {
public:
    int id;
    string name;
    Employee(int empId, string empName) {
        id = empId;
        name = empName;
    }
};
class AttendanceRecord {
public:
    int employeeId;
    string checkIn;
    string checkOut;
    AttendanceRecord(int empId, string inTime) {
        employeeId = empId;
        checkIn = inTime;
        checkOut = "Not Checked Out";
    }
    void setCheckOut(string outTime) {
        checkOut = outTime;
    }
};
class AttendanceSystem {
private:
    vector<Employee> employees;
    vector<AttendanceRecord> records;
public:
    void addEmployee(int id, string name) {
        employees.push_back(Employee(id, name));
    }  
    void checkIn(int empId) {
        string time;
        cout << "Enter check-in time for Employee " << empId << ": ";
        cin >> time;
        records.push_back(AttendanceRecord(empId, time));
        cout << "Employee " << empId << " checked in at " << time << "\n";
    }
    void checkOut(int empId) {
        string time;
        cout << "Enter check-out time for Employee " << empId << ": ";
        cin >> time;
        for (auto &record : records) {
            if (record.employeeId == empId && record.checkOut == "Not Checked Out") {
                record.setCheckOut(time);
                cout << "Employee " << empId << " checked out at " << time << "\n";
                return;
            }
        }
        cout << "No check-in record found for Employee " << empId << "\n";
    }
    void showRecords() {
        cout << "\nAttendance Records:\n";
        for (const auto &record : records) {
            cout << "Employee ID: " << record.employeeId << " | Check-In: " << record.checkIn << " | Check-Out: " << record.checkOut << "\n";
        }
    }
};
int main() {
    AttendanceSystem system;
    system.addEmployee(101, "John");
    system.addEmployee(102, "Jane");
    
    system.checkIn(101);
    system.checkOut(101);
    system.checkIn(102);
    system.checkOut(102);
    
    system.showRecords();  
    return 0;
}
