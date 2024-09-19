#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie {
private:
    std::string title;
    int year;
    int duration;
    std::string country;
    std::string review;

public:

    Movie();
    Movie(const std::string& title, int year, int duration, const std::string& country, const std::string& review);
    ~Movie();

    std::string getTitle() const;
    int getYear() const;
    int getDuration() const;
    std::string getCountry() const;
    std::string getReview() const;

    void setTitle(const std::string& title);
    void setYear(int year);
    void setDuration(int duration);
    void setCountry(const std::string& country);
    void setReview(const std::string& review);
};

#endif
