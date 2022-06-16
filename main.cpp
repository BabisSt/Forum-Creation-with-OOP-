#include <iostream>
#include <cstring>
#include <cstdlib>
#include <limits>
#include "classes.h"

using namespace std;
int main()
{
	int choice=100,i,id=0,k=0,x=0,z=0,l,n=0;	//metablites
	int flag=1,flag1=1;			//flags
	char ch;
	string thread_choice;


	/* Pinakes gia threads */
	char thread_subject_array[20][100];
	char thread_creator_array[20][100];
	int thread_date_day[20];
	int thread_date_month[20];
	int thread_date_year[20];

	/*Pinakes gia posts */
	char post_title_array[20][100];
	char post_creator_array[20][100];
	char post_text_array[20][1000];
	int post_date_day[20];
	int post_date_month[20];
	int post_date_year[20];

	/* Pinakes me tuxaious titlous,dhmioyrgous kai keimena */
	char titles[5][100]={"Welcome!","Happy birthday","Good Morning","Come for a walk","Inside the house"};
	char creators[5][100]={"Bob","Nick","Alice","Stella","Anonymous"};
	char texts[5][1000]= {"Lorem ipsum dolor sit amet, consectetur adipiscing elit","Ut enim ad minim veniam","Quis nostrud exercitation ullamco laboris nisi ut aliquip","Duis aute irure dolor in reprehenderit in voluptate velit esse","Excepteur sint occaecat cupidatat non proident"};

	/* Date */
	Date random_date;
	int d,m,y;
	int day,month,year;

	/* Constructors */
	cout<<endl;
	Forum f("ANTIKEIMENOSTRAFHS PROGRAMMATISMOS");
	Thread t("Default subject","Default creator", "Default date");
	Post p("id","Default title","Default creator","Default date","Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis con");
	cout<<endl;


	/* Epiloges */
	while(choice !=0)
	{
		cout << "Choose one from the following" << endl;
		cout <<"1 Create Kanones kai xrhsimes plhrofories" << endl;
		cout <<"2 Create a thread" << endl;
		cout <<"3 Create a post" << endl;
		cout <<"4 Print forum" << endl;
		cout <<"5 Pick thread with title" <<endl;
		cout <<"6 Pick post with id" << endl;
		cout <<"7 Pick 5 random posts and print them" <<endl;
		cout <<"0 to exit"<< endl;
		cin >> choice;
		cout << endl;

		flag=1;
		switch(choice)
		{

			/* Create Kanones kai xrhsimes plhrofories */
			 case 1:
			{
				if(flag1==1) //An einai h prwth fora pou thn kaloume
				{
					t.set_subject("Kanones kai xrhsimes plhrofories");	//Pare to thema
					cout <<"Thread Subject: "<<t.get_subject()<< endl;	//Ektupwse

					i= rand() % 5;						//Tuxaia epilogh arithmoy
                                	t.set_creator(creators[i]);				//Apo tous dhmioyrgous kane set
                                	cout <<"Thread Creator: "<<t.get_creator()<< endl;	//Ektupwsh
                                	strcpy(thread_creator_array[k],creators[i]);		//Antigrafh

												//Dhmioyrgia tuxaias hmeromenias kai ektupwsh
                                	d = rand() % 30 + 1;
                                	m = rand() % 12 + 1;
                                	y = rand() % 30 + 1990;
                                	random_date.set_date_day(d);
					random_date.set_date_month(m);
					random_date.set_date_year(y);
					day=thread_date_day[k]=random_date.get_date_day();
					month=thread_date_month[k]=random_date.get_date_month();
					year=thread_date_year[k]=random_date.get_date_year();

                                	cout <<"Date of creation: " <<day << "-"<<month<<"-"<<year << endl;
					flag1=0;
					k++;
 			//		Thread t("Kanones kai xrhsimes plhrofories","1","1");
				}
				else		//An exoume hdh kalesei authn thn epilogh
					cout<<"This thread is already made"<<endl;
				cout <<endl;
				break;
			}




		/* Create a THREAD */
			 case 2:
			{
				i= rand() % 5;						//Dhmiourgia kai ektupwsh subject opws parapanw
				t.set_subject(titles[i]);
				cout <<"Thread Subject: "<<t.get_subject()<< endl;
				strcpy(thread_subject_array[k],titles[i]);

			 	i= rand() % 5;						//Dhmioyrgia kai ektupwsh creator opws parapanw
                                t.set_creator(creators[i]);
                                cout <<"Thread Creator: "<<t.get_creator()<< endl;
				strcpy(thread_creator_array[k],creators[i]);

						//Dhmiourgia kai ektupwsh date opws parapanw

				d = rand() % 30 + 1;
                              	m = rand() % 12 + 1;
                                y = rand() % 30 + 1990;
                                random_date.set_date_day(d);
                               	random_date.set_date_month(m);
                               	random_date.set_date_year(y);

				day=thread_date_day[k]=random_date.get_date_day();
                                month=thread_date_month[k]=random_date.get_date_month();
                               	year=thread_date_year[k]=random_date.get_date_year();

                                cout <<"Date of creation: " <<day << "-"<<month<<"-"<<year << endl;


//				Thread t(thread_subject_array[k],thread_creator_array[k],"1");

				cout<<endl;
				k++;		//Metablith gia thn diaxeirhsh pinakwn thread
				break;
			}


		/* Create a POST */
		 	case 3:
			{
				++id;				//Xarakthristiko id
                                cout <<"Post Id: "<<id<< endl;
				i= rand()%5;						//Dhmioyrgia title kai ektupwsh opws parapanw
                                p.set_title(titles[i]);
                                cout <<"Post Title: "<<p.get_title()<< endl;
				strcpy(post_title_array[x],titles[i]);

				i= rand()%5;						//Dhmioyrgia kai ektupwsh creator opws parapanw
                                p.set_creator(creators[i]);
                                cout <<"Creators name: "<<p.get_creator()<< endl;
				strcpy(post_creator_array[x],creators[i]);

								//Dhmiourgia kai ektupwsh date opws parapanw
				d = rand() % 30 + 1;
                                m = rand() % 12 + 1;
                              	y = rand() % 30 + 1990;
                               	random_date.set_date_day(d);
                                random_date.set_date_month(m);
                               	random_date.set_date_year(y);
                                day=post_date_day[k]=random_date.get_date_day();
                                month=post_date_month[k]=random_date.get_date_month();
                               	year=post_date_year[k]=random_date.get_date_year();

                                cout <<"Date of creation: " <<day << "-"<<month<<"-"<<year << endl;



				i= rand()%5;						//Dhmiourgia kai ektupwsh text
                                p.set_text(texts[i]);
                                cout <<"Text: "<<p.get_text()<< endl;
                                strcpy(post_text_array[x],texts[i]);

				cout<<endl;
				x++;		//Metablhth gia thn diaxeirish pinakwn post
				break;
			}


		/* Print FORUM */
			case 4:
			{
				l=k;			//Arxikopoihsh metablhths gia thn diaxeirhsh pinakwn thread
				if (l!=0 || flag1==0)	//An uparxoun threads
				{
					if(flag1==0)	//An exei dhmiourghthei thread me auto to onoma ektupwse
                                        	cout<<"Kanones kai xrhsimes plhrofories" <<endl;

					while(l!=0)	//Oso o pinakas exei stoixeia
					{
						cout << thread_subject_array[l-1] << endl;	//phgaine sthn antistoixh thesh tou pinaka kai ektupwse to subject
						l--;						//phgaine sthn epomenh thesh
					}
				}
				else			//An den uparxoun threads
				{
					cout << "There are no threads yet!" << endl;
				}
				cout << endl;
				break;
			}


		/* Pick THREAD */
			case 5:
			{	cin.ignore();
				cout <<"Pick a thread: " ;
				getline(cin,thread_choice);
				n=k;
				while(flag)
				{
					if(thread_choice == thread_subject_array[n])		//An uparxei thread me auto to onoma
					{
						cout<<"Thread Subject: "<< thread_subject_array[n]<< endl;		//Phgaine sthn antistoixh thesh toy pinaka kai ektypwse
						cout<<"Thread Creator: "<< thread_creator_array[n]<< endl;	//Phgaine sth thesh toy pinaka kai ektypwse
						cout<<"Date: " << thread_date_day[n]<< "-" << thread_date_month[n]<<"-" << thread_date_year[n] <<endl;
						flag=0;			//allakse to flag
					}
					else if(thread_choice != thread_subject_array[n])	//An den yparxei thread me auto to onoma se aythn thn thesh
					{
						if(n==0)
							break;
						n--;			//phgaine sthn epomenh thesh
						continue;
					}
					else							//An den uparxei thread me auto to onoma genika
					{
						cout<<"There is no thread with this name "<< endl;
						flag=0;
						break;
					}
				}
				cout<<endl;
				break;
			}


		/* Pick POST */
			case 6:
			{
				cout <<"Give id: ";	//Epilogh id
				cin >> z;
				if(id==0)		//AN den uparxoun posts
				{
					cout<<"There are no posts yet"<< endl;
					break;
				}
				else if(z>x || z<0)		//An den uparxei post me to id pou dwsame
				{
					cout<<"There is no post with this id" << endl;
					break;
				}
				else				//An uparxei to post phgaine stous pinakes kai ektypwse to
				{
					cout <<"Post id: "<< z<<endl;
					cout <<"Post title: "<< post_title_array[z-1] << endl;
					cout <<"Post creator: "<< post_creator_array[z-1]<< endl;
					cout <<"Post date: " << post_date_day[z-1] <<"-"<<post_date_month[z-1]<<"-"<<post_date_year[z-1]<<endl;
					cout <<"Post text: "<< post_text_array[z-1]<< endl;
					cout << endl;
					break;
				}
				break;
			}


		/* Picking 5 posts */
			case 7:
			{
				if(x<5)				//An den upaxoun akoma 5 posts
				{
					cout<<"There are no 5 posts yet"<< endl;
				}
				else				//An uparxoun 5 posts
				{
					for(l=1;l<=5;l++)	//Gia 5 fores
					{
						i=rand() % id+1;					//Epelekse tuxaa arithmo apo to 1-id
						cout <<"Post id: "<< i<<endl;				//Phgaine stous pinakes kai ektypwse ta antistoixa pedia
        	                                cout <<"Post title: "<< post_title_array[i-1] << endl;
                	                        cout <<"Post creator: "<< post_creator_array[i-1]<< endl;
                        	                cout <<"Post text: "<< post_text_array[i-1]<< endl;
						cout << endl;
					}

				}
				cout <<endl;
				break;
			}

		/* Deletion */
		 	case 0:
			{
				return 0;
			}
		}
	}


return 0;
}
