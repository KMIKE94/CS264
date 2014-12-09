
#include "singleton.h"

class Client{
public:
	Client(std::string count){
		name_ = "Client " + count;

		Singleton::getInstance().write("Contructing Client: " +name_);
	}
	~Client(){

		Singleton::getInstance().write("destructing Client: " + name_);
	}

protected:
	std::string name_;
};
