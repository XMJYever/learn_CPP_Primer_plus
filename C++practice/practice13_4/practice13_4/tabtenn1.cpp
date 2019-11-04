#include <iostream>
#include "tabtenn1.h"

TableTennisPlayer::TableTennisPlayer(const string &fn,
	const string &ln, bool ht) : firstname(fn),lastname(ln),hasTable(ht){ }

void TableTennisPlayer::Name() const
{
	std::cout << firstname << ", " << lastname;
}

// RatedPlayer methods
RatingPlayer::RatingPlayer(unsigned int r, const string &fn,
	const string &ln, bool ht) :TableTennisPlayer(fn, ln, ht)
{
	rating = r;
}

RatingPlayer::RatingPlayer(unsigned int r, TableTennisPlayer & tp):TableTennisPlayer(tp), rating(r){ }

