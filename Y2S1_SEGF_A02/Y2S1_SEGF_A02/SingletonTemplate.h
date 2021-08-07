#pragma once

template <typename T>
class SingletonTemplate
{
public:
	
	static T* GetInstance(void)
	{
		if (instance == nullptr)
			instance = new T();
		return instance;
	}

protected:
	SingletonTemplate(void) {};
	~SingletonTemplate(void) {};


private:
	static T* instance;
};

//Supposedly CPP Code
template <typename T>

//Initialise singleton variable
T* SingletonTemplate<T>::instance = nullptr;
