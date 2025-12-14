#include <iostream>
#include <string>
using namespace std;
// โปรแกรมตัวอย่างสำหรับระบบควบคุมรถวิ่งตามเส้น (Line Following Robot)
// เซนเซอร์จะรายงานว่าเส้นสีดำอยู่ทางซ้าย ขวา หรือกลาง
// โค้ดนี้เป็นเวอร์ชันจำลองแบบคอนโซล: ผู้ใช้พิมพ์ "l", "r", "c" หรือคำเต็มเพื่อจำลองการอ่านจากเซนเซอร์
enum class LinePosition
{
    Left,    // เส้นอยู่ทางซ้าย
    Center,  // เส้นอยู่ตรงกลาง
    Right,   // เส้นอยู่ทางขวา
    Unknown  // ไม่พบข้อมูลหรือข้อมูลไม่ถูกต้อง
};
// แปลงสตริง (ตัวอย่าง: "l","left","r","right","c","center") เป็นค่า LinePosition
LinePosition ParseSensor(const string& s)
{
    if (s.empty()) return LinePosition::Unknown;

    // ใช้ตัวอักษรตัวแรก (ไม่สนใจตัวพิมพ์ใหญ่/เล็ก) เพื่อระบุตำแหน่ง
    char c = tolower(s[0]);
    if (c == 'l') return LinePosition::Left;
    if (c == 'r') return LinePosition::Right;
    if (c == 'c') return LinePosition::Center;
    return LinePosition::Unknown;
}
// กระทำคำสั่งควบคุมรถตามตำแหน่งเส้นที่อ่านได้
void ActOnSensor(LinePosition pos)
{
    switch (pos)
    {
    case LinePosition::Left:
        // ถ้าเส้นอยู่ทางซ้าย -> เลี้ยวซ้าย
        cout << "Action: Turn left" << endl;
        break;
    case LinePosition::Right:
        // ถ้าเส้นอยู่ทางขวา -> เลี้ยวขวา
        cout << "Action: Turn right" << endl;
        break;
    case LinePosition::Center:
        // ถ้าเส้นอยู่ตรงกลาง -> วิ่งตรงไปข้างหน้า
        cout << "Action: Move forward" << endl;
        break;
    default:
        // กรณีไม่ทราบตำแหน่ง (เช่น ข้อมูลผิดพลาดหรือยังไม่มีเส้น)
        cout << "Action: No line detected / Unknown sensor reading" << endl;
        break;
    }
}

int main()
{
    // ข้อความแนะนำการใช้โปรแกรม
    cout << "Simple Line Following Robot (type l/r/c, or left/right/center). Type q to quit." << endl;

    string input;
    while (true)
    {
        cout << "> ";
        if (!getline(cin, input)) break;

        // trim leading spaces
        // ตัดช่องว่างด้านหน้าออก (trim leading spaces)
        size_t first = input.find_first_not_of(" \t\r\n");
        if (first == string::npos) continue;
        string token = input.substr(first);

        // ถ้าผู้ใช้พิมพ์ q หรือ quit -> ออกจากโปรแกรม
        if (token == "q" || token == "Q" || token == "quit" || token == "Quit") break;

        // แปลงสตริงที่รับมาเป็นตำแหน่งเส้น แล้วทำการกระทำตามนั้น
        LinePosition pos = ParseSensor(token);
        ActOnSensor(pos);
    }

    cout << "Exiting." << endl;
    return 0;
}