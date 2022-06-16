#include <iostream>
#include <cstring>
#include "classes.h"

using namespace std;


Forum::Forum(const char* def_title)
{
	title = new char[strlen(def_title)+1];
	strcpy(title,def_title);
	cout << "Forum with title: " << title << " has been created!" << endl<< endl;
}

Forum::~Forum()
{
	cout <<"Forum with title: " << title << " is about to be destroyed" << endl << endl;
	delete [] title;
}


void Forum::set_title(const char* def_title)
{
	delete[] title;
	title = new char[strlen(def_title)+1];
	strcpy(title,def_title);
}



char* Forum::get_title()
{
	return title;
}


/////////////////////////////////////////////////////////////////////////////////////////////////


Thread::Thread(const char* def_subject,const char* def_creator,const char* def_date_of_creation)
{

	subject = new char[strlen(def_subject)+1];
        strcpy(subject,def_subject);

	creator = new char[strlen(def_creator)+1];
        strcpy(creator,def_creator);

	date_of_creation = new char[strlen(def_date_of_creation)+1];
        strcpy(date_of_creation,def_date_of_creation);

        cout << "Thread with subject: " << subject << " has been created!" << endl<< endl;
}

Thread::~Thread()
{
	cout <<"Thread with subject: " << subject << " is about to be destroyed" << endl<< endl;
	delete [] subject;
}


void Thread::set_subject(const char* def_subject)
{
	delete[] subject;
	subject = new char[strlen(def_subject)+1];
	strcpy(subject,def_subject);
}

void Thread::set_creator(const char* def_creator)
{
	delete[] creator;
	creator = new char[strlen(def_creator)+1];
	strcpy(creator,def_creator);
}

void Thread::set_date_of_creation(const char* def_date_of_creation)
{
	delete[] date_of_creation;
	date_of_creation = new char[strlen(def_date_of_creation)+1];
	strcpy(date_of_creation,def_date_of_creation);
}


char* Thread::get_subject()
{
	return subject;
}

char* Thread::get_creator()
{
	return creator;
}

char* Thread::get_date_of_creation()
{
	return date_of_creation;
}


////////////////////////////////////////////////////////////////////////////////////////


Post::Post( const char* def_id, const char* def_title, const char* def_creator, const char* def_date_of_creation, const char* def_text)
{
	id = new char[strlen(def_id)+1];
	strcpy(id,def_id);

	title = new char[strlen(def_title)+1];
        strcpy(title,def_title);

	creator = new char[strlen(def_creator)+1];
        strcpy(creator,def_creator);

        date_of_creation = new char[strlen(def_date_of_creation)+1];
        strcpy(date_of_creation,def_date_of_creation);

	text = new char[strlen(def_text)+1];
	strcpy(text,def_text);

	cout <<"Post with id number: " << id << " has been created" << endl<< endl;
	cout <<"Title: " << title << endl<< endl;
	cout <<"Creator: " << creator << endl<< endl;
	cout <<"Date of creation: " << date_of_creation << endl<< endl;
	cout <<"Text: " << endl << text << endl<< endl;
}

Post::~Post()
{
	cout <<"Post number: "<< id << " is about to be destroyed" << endl<< endl;
	delete[] id;
}

void Post::set_id(const char* def_id)
{
	delete[] id;
	id = new char[strlen(def_id)+1];
	strcpy(id,def_id);
}

void Post::set_title(const char* def_title)
{
        delete[] title;
        title = new char[strlen(def_title)+1];
        strcpy(title,def_title);
}

void Post::set_creator(const char* def_creator)
{
        delete[] creator;
        creator = new char[strlen(def_creator)+1];
        strcpy(creator,def_creator);
}

void Post::set_date_of_creation(const char* def_date_of_creation)
{
        delete[] date_of_creation;
        date_of_creation = new char[strlen(def_date_of_creation)+1];
        strcpy(date_of_creation,def_date_of_creation);
}

void Post::set_text(const char* def_text)
{
        delete[] text;
        text = new char[strlen(def_text)+1];
        strcpy(text,def_text);
}


char* Post::get_id()
{
	return id;
}

char* Post::get_title()
{
	return title;
}

char* Post::get_creator()
{
	return creator;
}

char* Post::get_date_of_creation()
{
	return date_of_creation;
}

char* Post::get_text()
{
	return text;
}
/////////////////////////////////////////////////////////////////////////////////////////////////

void Date::set_date_day(int i)
{
        day=i;
}

void Date::set_date_month(int j)
{
        month=j;
}

void Date::set_date_year(int k)
{
        year=k;
}


int Date::get_date_day()
{
        return day;
}

int Date::get_date_month()
{
        return month;
}

int Date::get_date_year()
{
        return year;
}

