#include <iostream>

using namespace std;

int main () {
 //       char city [] = {'A','B','C','\0'};
 //       char city2 [2] = {"ABC","CDF"}  //ABC
 //
                         //CDE

        char name[] = {"Arnon"}; //nonrA
        int nameLength = 5;
        cout << name << endl;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้
        char revName[nameLength+1];

        for (int i = 0; i < nameLength; i++) {
            revName[i] = name[4-i];
        }
        revName[nameLength] = '\0';
        cout << revName << endl;

        for (int i = 0; i < nameLength; i++) {
            revName[i] = revName [i] + 1;
        }
        cout << revName;
 //       revName[0] = name [5];
 //       revName[1] = name [4];
  //      revName[2] = name [3];
  //      revName[3] = name revName[1] = name [4];[2];
  //      revName[4] = name [1];
  //      revName[5] = name [0];




        return 0;
}
