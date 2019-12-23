    #include <iostream>
    using namespace std;
    template <typename T>
    void Swap(T &n1, T &n2)
    {
        T temp;
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    int main()
    {
        int i1 = 1, i2 = 2;
        float f1 = 1.1, f2 = 2.2;
        cout << "Before passing data to function template.\n";
        cout << "i1 = " << i1 << "\ni2 = " << i2;
        cout << "\nf1 = " << f1 << "\nf2 = " << f2;
        Swap(i1, i2);
        Swap(f1, f2);
        cout << "\n\nAfter passing data to function template.\n";
        cout << "i1 = " << i1 << "\ni2 = " << i2;
        cout << "\nf1 = " << f1 << "\nf2 = " << f2;
        return 0;
    }