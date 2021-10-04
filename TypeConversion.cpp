#include <iostream>
using namespace std;
// Anirudh Sharma
// Source class
class Stock_type_1
{
    int ID, Quant, Cost;

public:
    Stock_type_1(int x, int y, int z)
    {
        ID = x;
        Quant = y;
        Cost = z;
    }
    void Display()
    {
        cout << "ID : " << ID << "\n";
        cout << "Quantity : " << Quant << "\n";
        cout << "Cost/item (in Rs.) : " << Cost;
    }
    int EnterID()
    {
        return ID;
    }
    int EnterQuantity()
    {
        return Quant;
    }
    int EnterCost()
    {
        return Cost;
    }
};
// Destination class
class Stock_type_2
{
    int ID, Value;

public:
    Stock_type_2()
    {
        ID = 0;
        Value = 0;
    }
    Stock_type_2(int x, int y)
    {
        ID = x;
        Value = y;
    }
    void Display()
    {
        cout << "ID : " << ID << "\n";
        cout << "Total value (in Rs.) : " << Value << "\n";
    }
    Stock_type_2(Stock_type_1 obj)
    {
        ID = obj.EnterID();
        Value = obj.EnterQuantity() * obj.EnterCost();
    }
};
// Driver Code
int main()
{
    Stock_type_1 obj1(87, 7, 99);
    Stock_type_2 obj2;
    obj2 = obj1;
    cout << "Stock Type 1: \n\n";
    obj1.Display();
    cout << "\n\nStock Type 2: \n\n";
    obj2.Display();
    cout << "\n";
    return 0;
}