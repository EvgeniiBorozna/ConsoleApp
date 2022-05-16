// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    char cKey;
    char str0[] = { 218, 196, 196, 196, 194, 196, 196, 196, 194, 196, 196, 196, 191, 0 };
    char str1[] = { 179, 32, 32, 32, 179, 32, 32, 32, 179, 32, 32, 32, 179, 0 };
    char str2[] = { 195, 196, 196, 196, 197, 196, 196, 196, 197, 196, 196, 196, 180, 0 };
    char str3[] = { 179, 32, 32, 32, 179, 32, 32, 32, 179, 32, 32, 32, 179, 0 };
    char str4[] = { 195, 196, 196, 196, 197, 196, 196, 196, 197, 196, 196, 196, 180, 0 };
    char str5[] = { 179, 32, 32, 32, 179, 32, 32, 32, 179, 32, 32, 32, 179, 0 };
    char str6[] = { 192, 196, 196, 196, 193, 196, 196, 196, 193, 196, 196, 196, 217, 0 };
    /*str1[2] = 88;
    str1[6] = 79;
    str3[6] = 88;
    str5[10] = 88;*/
m0: cin >> cKey;
    //std::cout << "Hello World!\n";
    switch (cKey) {
        case 49:
            str1[2] = 88;
            break;
        case 50:
            str3[6] = 88;
            break;
        case 51:
            str5[10] = 88;
            break;
        case 113:
            goto m1;
        default:
            str1[2] = 32;
            str3[6] = 32;
            str5[10] = 32;
    }
    cout << "\033[2J\033[1;1H";
    std::cout << str0 << "\n";
    std::cout << str1 << "\n";
    std::cout << str2 << "\n";
    std::cout << str3 << "\n";
    std::cout << str4 << "\n";
    std::cout << str5 << "\n";
    std::cout << str6 << "\n";
    goto m0;
m1:
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(float));
    return (0);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
