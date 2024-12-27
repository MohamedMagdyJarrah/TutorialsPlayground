#include "Movies.h"

Movies::Movies(){}

Movies::~Movies(){}

void Movies::addMovie(std::string movieName, std::string movieRate, int watchedTimes){
    bool movieInTheList = false;
    for(auto movie : m_vMovies)
    {
        if(movie.getMovieName() == movieName){
            movieInTheList = true;
            break;
        }
    }

    if(movieInTheList){
        std::cout << "Sorry this movie in the list you can't add it again." << std::endl;
    } else {
        m_vMovies.push_back(Movie{movieName,movieRate,watchedTimes});
        std::cout << movieName << " is added." << std::endl;
    }
}

void Movies::displayMovies(){
    if(m_vMovies.empty()){
        std::cout << "There are no movies in the list." << std::endl;
    } else {
        std::cout << "====================== Movies in the List =======================" << std::endl;
        for(auto movie : m_vMovies)   
        {
            std::cout << movie.getMovieName() << ", " << movie.getMovieRate() << ", " << movie.getWatchedTimes() << std::endl;
        }
        std::cout << "=================================================================" << std::endl;
    }

}