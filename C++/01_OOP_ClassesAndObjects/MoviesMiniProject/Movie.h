#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <iostream>
#include <string>

class Movie
{
private:
    std::string m_movieName;
    std::string m_movieRate;
    int m_watchingTimes;

public:
    Movie(std::string movieName = "None", std::string movieRate = "None", int watchingTimes = 0);
    Movie(const Movie& source);
    ~Movie();
    void setMovieName(std::string name) {this->m_movieName = name;}
    std::string getMovieName() {return m_movieName;}
    void setMovieRate(std::string rate) {this->m_movieRate = rate;}
    std::string getMovieRate() {return m_movieRate;}
    void setWatchedTimes(int watched) {this->m_watchingTimes = watched;}
    int getWatchedTimes() {return m_watchingTimes;}
    void incrementWatchedMovie() {m_watchingTimes++;}
    void displayMovie();
};

#endif // !_MOVIE_H
