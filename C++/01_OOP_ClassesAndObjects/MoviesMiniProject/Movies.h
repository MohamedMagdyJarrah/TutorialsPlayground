#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <iostream>
#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private:
    std::vector<Movie> m_vMovies;

public:
    Movies();
    ~Movies();
    void addMovie(std::string movieName, std::string movieRate, int watchedTimes);
    void displayMovies();
};

#endif // !_MOVIES_H_