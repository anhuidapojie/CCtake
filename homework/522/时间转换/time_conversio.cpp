#include "time_conversio.h"

void time_conversio(int s)
{
    cout<< s/3600 <<"时:"<<(s%3600)/60<<"分:"<<s%3600<<"秒"<<endl;
}