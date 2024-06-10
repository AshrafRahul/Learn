#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        int roll;
        int cls;
        double cgpa;

        Student(int roll, int cls, double cgpa) {
            this->roll = roll;
            this->cls = cls;
            this->cgpa = cgpa;
        }
};

Student fun() {
    Student Rahul(29, 15, 3.89);
    return Rahul;
}

// Student* fun() {
//     Student Rahul(29, 15, 3.89);
//     Student *p = &Rahul;
//     return p;
// }

int main() {
    Student ans = fun();
    // Student* ans = fun();
    cout << ans.roll << " " << ans.cls << " " << ans.cgpa << endl;
    // cout << ans->roll << " " << ans->cls << " " << ans->cgpa << endl;

    return 0;
}
