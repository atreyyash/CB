#include <iostream>
using namespace std;

char keys[][10] = {
    "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

string contacts[100] = {
    "VARUN",
    "NOBITA",
    "GIAN",
    "DOREMON",
    "HIMANI"
};

void PhoneKeypad(char *in, int i, char *out, int j)
{
    // Base Case
    if (in[i] == '\0')  // 82786: VARUN aaega iss par
    {
        out[j] = '\0';
        string x(out);  // x ek string ban gai jiski value is same as out
        for (int i = 0; i < 5; i++)
        {
            if (x == contacts[i])
            {
                cout << out << endl;
            }
        }
        return;
    }
    // Recursive Case
    // jo bhi digit hai uske corresponding letters pe traverse karne ke liye keys ka index chahiye isiliye char 2 ko int 2 me kiya
    int d = in[i] - '0'; // To convert the digit of a string to int
    for (int k = 0; keys[d][k] != '\0'; k++)
    {
        out[j] = keys[d][k];                // out[j] par keys me se character daalo aur
        PhoneKeypad(in, i + 1, out, j + 1); // recursion se bolo aage ka karke de
    }
}

int main()
{
    char out[100], in[100];
    cin >> in;
    PhoneKeypad(in, 0, out, 0);

    return 0;
}