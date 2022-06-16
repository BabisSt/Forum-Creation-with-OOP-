class Forum
{
	private:
		char* title;
		int number_of_threads;

	public:
		Forum(const char*);
		~Forum();

		void set_title(const char*);

		char* get_title();
};

class Thread
{
	private:
		char* subject;
		char* creator;
		char* date_of_creation;
		int number_of_posts;

	public:
		Thread (const char*,const char*,const char*);
		~Thread();

		void set_subject(const char*);
		void set_creator(const char*);
		void set_date_of_creation(const char*);

		char* get_subject();
		char* get_creator();
		char* get_date_of_creation();
};

class Post
{

	private:
		char* id;
		char* title;
		char* creator;
		char* date_of_creation;
		char* text;

	public:
		Post(const char*,const char*,const char*,const char*,const char*);
		~Post();

		void set_id(const char*);
		void set_title(const char*);
		void set_creator(const char*);
		void set_date_of_creation(const char*);
		void set_text(const char*);

		char* get_id();
		char* get_title();
		char* get_creator();
		char* get_date_of_creation();
		char* get_text();
};


class Date
{
        private:
                int day;
                int month;
                int year;
        public:
                void set_date_day(int);
		void set_date_month(int);
		void set_date_year(int);

                int get_date_day();
		int get_date_month();
		int get_date_year();
};

