#include "Schedule.h"

Schedule::Schedule() : day(""), startTime(""), endTime("") {}
Schedule::Schedule(const std::string& day, const std::string& startTime, const std::string& endTime)
    : day(day), startTime(startTime), endTime(endTime) {}
Schedule::~Schedule() {}

std::string Schedule::getDay() const { return day; }
std::string Schedule::getStartTime() const { return startTime; }
std::string Schedule::getEndTime() const { return endTime; }

void Schedule::setDay(const std::string& day) { this->day = day; }
void Schedule::setStartTime(const std::string& startTime) { this->startTime = startTime; }
void Schedule::setEndTime(const std::string& endTime) { this->endTime = endTime; }
