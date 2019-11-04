// tabtenn0.h -- a table-tennis base class
using std::string;
// simple base class
class TableTennisPlayer
{
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string & fn = "none",
		const string & ln = "none", bool ht = false);
	void name() const;
	bool Hastable() const {return hasTable;};
	void ResetTable(bool v) {hasTable = v;}
	~TableTennisPlayer();
};

TableTennisPlayer::TableTennisPlayer(const string & fn, 
	const string & ln, bool ht):firstname(fn),lastname(ln),hasTable(ht)
	{}

void TableTennisPlayer::name() const
{
	std::cout<<lastname<<", "<<firstname;
}