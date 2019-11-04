// tabtenn1.h -- a table-tennis base class
#ifndef TABTENN1_H_
#define TABTENN1_H_
#include <string>
using std::string;

// base class
class TableTennisPlayer
{
private:
	string firstname;
	string lastname;
	bool hasTable;

public:
	TableTennisPlayer(const string & fn = "none",
		const string & ln = "none", bool ht = false);
	bool HasTable() const { return hasTable; }
	void Name() const;
	void ResetTable(bool v) { hasTable = v; }
};

// simple derived class
class RatingPlayer : public TableTennisPlayer
{
private:
	unsigned int rating;

public:
	RatingPlayer(unsigned int r = 0, const string &fn = "none", 
		const string &ln = "none", bool ht = false);
	RatingPlayer(unsigned int r, TableTennisPlayer & tp);
	unsigned int Rating() const { return rating; }
};

#endif