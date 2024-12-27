#include "Movie.h"

Movie::Movie(std::string movieName, std::string movieRate, int watchingTimes)
    : m_movieName{movieName} , m_movieRate{movieRate}, m_watchingTimes{watchingTimes}
{}

Movie::Movie(const Movie& source) : Movie{source.m_movieName, source.m_movieRate,source.m_watchingTimes}
{}

Movie::~Movie(){}

void Movie::displayMovie(){
    std::cout << m_movieName << " with Rate: " << m_movieRate << " and watched " << m_watchingTimes << "time." << std::endl;
}
