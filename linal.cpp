//IT21374838

#include<iostream>
using namespace std;

class registered_user{
	
	protected:
		
		char first_name[10];
		char last_name[10];
		char email[10];
		char user_name[10];
		char NIC[15];
		char gender[5];
		char DOB[10];
		int tp_number;
		char address1[30];
		char address2[30];
		char city[8];
		char province[10];
		int p_code;
		char bio[40];
		char a_type[10];
		char password[15];
		char reg_date[10];
		char exp_date[10];
		
	
		public:
			registered_user();
			
			void borrow();
			void return_books();
			void search_books();
			void sort_books();
			void add_books_to_favourite();
			
};



            void registered_user:: borrow()
            {
            	
			}
		
			void registered_user::return_books(){
				
			}
			void registered_user::search_books()
			{
				
			}
			void registered_user::sort_books()
			{
				
			}
			void registered_user::add_books_to_favourite()
			{
				
			}

