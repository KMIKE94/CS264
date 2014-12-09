
class Singleton
{
private:
	Singleton(){}
	~Singleton(){}
	Singleton(const Singleton &);

	Singleton & operator=(const Singleton &);

public:
	static Singleton &getInstance();
	void write(const std::string &message);

};
