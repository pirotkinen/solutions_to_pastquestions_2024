#include <iostream>
#include <cstring>
using namespace std;

// Task 1: Check if a number is prime
void checkPrime() {
    int num;
    cout << "Input a number: ";
    cin >> num;

    bool isPrime = true;
    if (num <= 1) isPrime = false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
}

// Task 2: Find the sum of an array
void arraySum() {
    int n, sum = 0;
    cout << "Input the number of elements to be stored in the array: ";
    cin >> n;

    int arr[n];
    cout << "Input " << n << " elements in the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "element - " << i << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of all elements stored in the array is: " << sum << endl;
}

// Task 3: Perform bubble sort
void bubbleSort() {
    int n;
    cout << "Input the number of elements to be stored in the array: ";
    cin >> n;

    int arr[n];
    cout << "Input " << n << " elements in the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "element - " << i << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "After sorting, the array is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Task 4: Compute the length of a string
void stringLength() {
    char str[100];
    cout << "Input a string: ";
    cin.ignore();
    cin.getline(str, 100);

    cout << "The length of the string '" << str << "' is: " << strlen(str) << endl;
}

// Task 5: Perform linear search
void linearSearch() {
    int arr[] = {23, 60, 90, 50, 20, 55, 100, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the key to search: ";
    cin >> key;

    int position = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            position = i + 1; // 1-based index
            break;
        }
    }

    if (position != -1)
        cout << "The key " << key << " is found at position: " << position << endl;
    else
        cout << "The key " << key << " is not found in the array." << endl;
}

// Task 6: Add two numbers using pointers
void addNumbers() {
    int num1, num2;
    int *ptr1 = &num1, *ptr2 = &num2;

    cout << "Input the first number: ";
    cin >> *ptr1;
    cout << "Input the second number: ";
    cin >> *ptr2;

    cout << "The sum of the entered numbers is: " << *ptr1 + *ptr2 << endl;
}

// Task 7: Check if a number is a palindrome
void checkPalindrome() {
    int num, original, reversed = 0, remainder;
    cout << "Input a number: ";
    cin >> num;

    original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        cout << "The number is a palindrome." << endl;
    else
        cout << "The number is not a palindrome." << endl;
}

// Task 8: Student details and average marks
void studentDetails() {
    struct Student {
        string name;
        int age;
        float totalMarks;
    };

    Student s1, s2;
    cout << "Input data for Student 1:" << endl;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, s1.name);
    cout << "Enter age: ";
    cin >> s1.age;
    cout << "Enter total marks: ";
    cin >> s1.totalMarks;

    cout << "Input data for Student 2:" << endl;
    cin.ignore();
    getline(cin, s2.name);
    cout << "Enter age: ";
    cin >> s2.age;
    cout << "Enter tot…