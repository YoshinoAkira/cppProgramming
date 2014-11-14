#ifndef EMPLOY1_H
#define EMPLOY1_H

class Employee{
	public:
		Employee(const char *,const char *);
		~Employee();
		const char* getFirstName() const;
		const char* getLastName() const;
		static int getCount();
		static int getNumber(){return number;}
		void setFirstName(const char*);
	private:
		char* FirstName;
		char* LastName;
		static int count;
		static int number;
};


#endif
