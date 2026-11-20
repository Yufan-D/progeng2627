#include <iostream>

bool leap_year(int year){
    bool ly;

    // TODO: check whether the year is a leap year or not
    // store result in variable ly
    if( (year % 4) == 0){ 
        // if multiple of 4

        if( (year % 100) == 0){ 
            // if (also) multiple of 100
            if( (year % 400) == 0){
                ly = true;
            }
            else{
                ly = false;
            }
            // ...
        }
        else{ 
            ly = true;
            // if not multiple of 100
            // (but still multiple of 4)

            // ...

        }
    }
    else{
        // if not multiple of 4
        ly = false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)
    int days_in_month;

    if (m1 == 2) {
        if (leap_year(y1)) {
            days_in_month = 29;
        }
        else {
            days_in_month = 28;
        }
    }
    else if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) {
        days_in_month = 30;
    }
    else {
        days_in_month = 31;
    }
    d2 = d1 + 1;
    m2 = m1;
    y2 = y1;
    if (d2 > days_in_month) {
        d2 = 1;
        m2 = m2 + 1;
    }
    if (m2 > 12) {
        m2 = 1;
        y2 = y2 + 1;
    }
}

int main(){
    // TODO: write a main to test the function
    int d1, m1, y1;
    int d2, m2, y2;

    std::cout << "Enter day, month and year: ";
    std::cin >> d1 >> m1 >> y1;

    next_date(d1, m1, y1, d2, m2, y2);

    std::cout << "Next date: "
              << d2 << "/" << m2 << "/" << y2 << std::endl;
}