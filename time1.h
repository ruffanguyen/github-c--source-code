#ifndef TIME1_H
#define TIME1_H

class Time {
    private:
        int hour;
        int minute;
        int second;
    public:
        Time();
        void setTime(int, int, int);
        void printUniversal();
        void printStandard();
};
#endif