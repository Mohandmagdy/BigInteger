#ifndef BIGINT_H
#define BIGINT_H
using namespace std;
class BIGINT{
string digits;
public :
    string getter();

    BIGINT(string s);

    BIGINT(int decint);

     BIGINT operator+(BIGINT b);
     BIGINT operator-(BIGINT b);



    bool operator< (BIGINT b);

    bool operator> (BIGINT b);

    bool operator==(BIGINT b);

    int Length() {
        return digits.size();
    }

    void setter(string s){
    digits = s;
    }

    int sign() {
        //false for  negative true for positive
        if (digits[0] == '-')return 0;
        return true;
    }
};
#endif // bigint
