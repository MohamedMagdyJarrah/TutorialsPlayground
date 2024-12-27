#include "Movie.h"
#include "Movies_ptr.h"
#include <vector>

int main(){
    // std::vector<Movie> moviesList;
    Movies myMovies;
    // Movies myMovies{moviesList};

    myMovies.displayMovies();
    myMovies.addMovie("7areefa","PG", 1);
    myMovies.displayMovies();

    myMovies.addMovie("7areefa 2","PG", 0);
    myMovies.addMovie("Attack on titan","PG+18", 3);
    myMovies.displayMovies();
    
    myMovies.addMovie("Attack on titan","PG+18", 3);
    myMovies.displayMovies();

    myMovies.incrementWatchedMovie("7areefa 2");
    myMovies.displayMovies();

    myMovies.incrementWatchedMovie("XXXX");

    return 0;
}