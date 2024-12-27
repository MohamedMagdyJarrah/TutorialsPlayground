#include "Movies_ptr.h"
const int MOVIE_NOT_FOUND = -1;

Movies::Movies(){
    m_vMovies = new std::vector<Movie>;
}

Movies::Movies(std::vector<Movie> &moviesList)
{
    m_vMovies = new std::vector<Movie>;
    *m_vMovies = moviesList; 
}

Movies::Movies(const Movies& source)
    : Movies{*source.m_vMovies}
{}

Movies::Movies(Movies&& source) noexcept : m_vMovies{source.m_vMovies}
{
    source.m_vMovies = nullptr;
}

Movies::~Movies(){
    delete m_vMovies;
}

int Movies::isMovieInTheList(std::string movieName){
    int movieFound = MOVIE_NOT_FOUND;

    for(int i=0 ; i < m_vMovies->size() ; i++){
        if((*m_vMovies)[i].getMovieName() == movieName){
            movieFound = i;
            break;
        }
    }

    return movieFound;
}


void Movies::addMovie(std::string movieName, std::string movieRate, int watchedTimes){
    if(isMovieInTheList(movieName) == MOVIE_NOT_FOUND){
        m_vMovies->push_back(Movie{movieName,movieRate,watchedTimes});
        std::cout << movieName << " is added." << std::endl;
    } else {
        std::cout << "Sorry this movie in the list you can't add it again." << std::endl;
    }
}

void Movies::displayMovies(){
    if(m_vMovies->empty()){
        std::cout << "There are no movies in the list." << std::endl;
    } else {
        std::cout << "====================== Movies in the List =======================" << std::endl;
        for(const auto& movie : *m_vMovies)   
        {
            movie.displayMovie();
        }
        std::cout << "=================================================================" << std::endl;
    }

}

void Movies::incrementWatchedMovie(std::string movieName){
    int movieIndex = isMovieInTheList(movieName);
    if(movieIndex == MOVIE_NOT_FOUND){
        std::cout << movieName << " not in the list." << std::endl;
    } else {
        (*m_vMovies)[movieIndex].incrementWatchedMovie();
        std::cout << movieName << " watched times inctremented." << std::endl;
    }
}