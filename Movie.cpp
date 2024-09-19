#include "Movie.h"


Movie::Movie() : title(""), year(0), duration(0), country(""), review("") {}


Movie::Movie(const std::string& title, int year, int duration, const std::string& country, const std::string& review)
    : title(title), year(year), duration(duration), country(country), review(review) {}


Movie::~Movie() {}


std::string Movie::getTitle() const { return title; }
int Movie::getYear() const { return year; }
int Movie::getDuration() const { return duration; }
std::string Movie::getCountry() const { return country; }
std::string Movie::getReview() const { return review; }


void Movie::setTitle(const std::string& title) { this->title = title; }
void Movie::setYear(int year) { this->year = year; }
void Movie::setDuration(int duration) { this->duration = duration; }
void Movie::setCountry(const std::string& country) { this->country = country; }
void Movie::setReview(const std::string& review) { this->review = review; }
