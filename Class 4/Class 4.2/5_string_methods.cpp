#include<bits/stdc++.h>

using namespace std;

int main() {
    string s = "Hello World";
    
    // length
    cout << "Length of String is " << s.length() << endl;
    
    // concatenation
    string a = "Hello ", b = "World";
    string res = a + b;
    cout << "Concatenation Example is " << res << endl;
    
    // Equality
    a = "Test", b = "test";
    bool comp = a == b;
    cout << "Comparison is  " << comp << endl;
    cout << "Compare Method : " << a.compare(b) << endl; // = 0 if equal, < 0 is a is smaller, > 0 if a is larger
    
    // Substring extraction
    cout << "Subtring extraction method is : " << s.substr(1, 4) << endl; //ello, first argument is starting index and second is length
    
    // Substring search
    cout << "Subtring search method is : " << s.find("orl")  << endl; // First index where "orl" is present in string. If not found returns string::npos
    
    // Replacing substring
    cout << "Replace subtring method is : " << s.replace(0, 3, "Hi")  << endl;// Replaces 3 characters from index 0 with "Hi"
    
    // Inserting substring
    cout << "Inserting subtring method is : " << s.insert(6, "new ") << endl; // Hello new World, Inserts the substring at index 6
    
    // Iterators
    cout << "Iterator method from start is : " << *s.begin() << endl;
    cout << "Iterator method from end is : " << *s.end() << endl;
    
    // Erase
    s.erase(2, 3); // Erases 3 characters starting from index 2
    cout << s << endl;
    s.erase(s.begin() + 1, s.begin() + 5); // Erases all characters in between indices [1, 5)
    cout << s << endl;
}
