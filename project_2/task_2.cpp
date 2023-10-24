#include <iostream>
#include <string>
#define say std::cout<<"Input month - > ";

enum  month{
  january = 1,
  february,
  march,
  april,
  may,
  june,
  july,
  august,
  september,
  october,
  november,
  december
};

void play_task_one()
{
  int guess;
  say;
  std::cin>>guess;
  while(guess){
  if(guess == 0){
  break;
  }else{
  switch(guess){
    case month::january: std::cout<<"january\n";      say; std::cin>>guess; break;
    case month::february: std::cout<<"february\n";    say; std::cin>>guess; break;
    case month::march: std::cout<<"march\n";          say; std::cin>>guess; break;
    case month::april: std::cout<<"april\n";          say; std::cin>>guess; break;
    case month::may: std::cout<<"may\n";              say; std::cin>>guess; break;
    case month::june: std::cout<<"june\n";            say; std::cin>>guess; break;
    case month::july: std::cout<<"july\n";            say; std::cin>>guess; break;
    case month::august: std::cout<<"august\n";        say; std::cin>>guess; break;
    case month::september: std::cout<<"september\n";  say; std::cin>>guess; break;
    case month::october: std::cout<<"october\n";      say; std::cin>>guess; break;
    case month::november: std::cout<<"november\n";    say; std::cin>>guess; break;
    case month::december: std::cout<<"december\n";    say; std::cin>>guess; break;
    default: std::cout<<"Error this month doesnt exist...\n"; say; std::cin>>guess;
  }
  }
  } // вау
  std::cout<<"EXIT";
}

struct bank_account{
  int number;
  std::string name;
  float balance;
};

void change_salary(bank_account* a, float new_salary){
a->balance = new_salary;
}

void play_task_two(){
std::cout<<"\nLets create your bank account -> ";
bank_account* MaxAcc = new bank_account;
std::cout<<"\nYour name -> ";
std::cin>>MaxAcc->name;
std::cout<<"\nInput your number of account -> ";
std::cin>>MaxAcc->number;
std::cout<<"\nInput your balance like a.a -> ";
std::cin>>MaxAcc->balance;
std::cout<<"\nYou account\n";
std::cout<<MaxAcc->number<<" "<<MaxAcc->name<<" "<<MaxAcc->balance;
change_salary(MaxAcc, 300.0);
std::cout<<"\nYou account\n";
std::cout<<MaxAcc->number<<" "<<MaxAcc->name<<" "<<MaxAcc->balance;
delete MaxAcc;
}

struct addres{
  std::string city;
  std::string addressss;
  std::string home_number;
  std::string home_number_shit;
  std::string index;
};

void addres_out(addres* a)
{
  std::cout<<a->city<<std::endl;
  std::cout<<a->addressss<<std::endl;
  std::cout<<a->home_number<<std::endl;
  std::cout<<a->home_number_shit<<std::endl;
  std::cout<<a->index<<std::endl;
}

void play_task_three()
{
  addres* cringe = new addres;
  cringe->city = "CRINGE_CITY";
  cringe->addressss = "UGANDA";
  cringe->home_number = "228";
  cringe->home_number_shit = "1312";
  cringe->index = "1000 - 7";
  addres_out(cringe);
  delete cringe;
}

int main(){
  play_task_one();
  play_task_two();
  play_task_three();
}
