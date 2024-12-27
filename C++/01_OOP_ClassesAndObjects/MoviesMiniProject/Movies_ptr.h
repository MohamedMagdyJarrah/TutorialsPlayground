#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <iostream>
#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private:
    std::vector<Movie> *m_vMovies;
    int isMovieInTheList(std::string movieName);

public:
    Movies();
    Movies(std::vector<Movie> &moviesList);
    Movies(const Movies& source);
    Movies(Movies&& source) noexcept;
    ~Movies();
    void addMovie(std::string movieName, std::string movieRate, int watchedTimes);
    void displayMovies();
    void incrementWatchedMovie(std::string movieName);
};

#endif // !_MOVIES_H_