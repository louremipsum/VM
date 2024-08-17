enum
{
    FL_POS = 1 << 0, /*positive*/
    /* 1 = 0000 0001 with 0 shift is 1*/

    FL_ZRO = 1 << 1, /*zero*/
    /* 1 = 0000 0001 with 1 shift to left = 0000 0010 = 2 */

    FL_NEF = 1 << 2, /*negative*/
    /* 1= 0000 0001 with 2 shift to left = 0000 0100 = 4 */
};

/*
flags store the info about most recent calc
*/

/*
<< means bitwise left shift operator
it all happens in binary so basically
a << b means that write 'a' in binary and then shift a by 'b' bits to
left
ex. 4 << 1
4 = 0000 0100
shift each bit by 1 to the left
    0000 1000 = 8
so basically 4 << 1 = 8

for a testing calc: circuitdigest.com/calculators/bit-shift-calculator
*/