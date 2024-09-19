#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <string>

class Schedule {
private:
    std::string day;
    std::string startTime;
    std::string endTime;

public:
    Schedule();
    Schedule(const std::string& day, const std::string& startTime, const std::string& endTime);
    ~Schedule();

    std::string getDay() const;
    std::string getStartTime() const;
    std::string getEndTime() const;

    void setDay(const std::string& day);
    void setStartTime(const std::string& startTime);
    void setEndTime(const std::string& endTime);
};

#endif
