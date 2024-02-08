#include <iostream>
const int CHECK_BALANCE = 1;
const int WITHDRAW = 2;
const int DEPOSIT = 3;
const int EXIT = 4;

class BankAccount
{
private:
    double balance_;
    double credit_limit_;
    double interest_rate_;

public:
    BankAccount(double balance = 100, double credit_limit = 500, double interest_rate = 0.05)
    {
        balance_ = balance;
        credit_limit_ = credit_limit;
        interest_rate_ = interest_rate;
    }

    void check_balance()
    {
        std::cout << "Balance: " << balance_ << " Euro" << std::endl;
    }

    void make_withdrawal(double wd_amount)
    {
        if ((balance_ - wd_amount) >= -credit_limit_)
        {
            balance_ -= wd_amount;
            if (balance_ < 0)
            {
                balance_ += balance_ * interest_rate_;
            }
        }
        else
        {
            std::cout << "Not enough balance or credit" << std::endl;
        }
    }

    void make_deposit(double deposit_amount)
    {
        balance_ += deposit_amount;
    }

    double get_credit_limit()
    {
        return credit_limit_;
    }
};

int main()
{
    BankAccount account1(100, 500);

    int option = CHECK_BALANCE;
    double wd_amount = 0;
    double deposit_amount = 0;
    while (option < EXIT)
    {
        std::cout << "Choose an option: 1:Check balance, 2: Withdrawal, 3: Deposit, 4: Quit" << std::endl;
        std::cin >> option;
        if (option == CHECK_BALANCE)
        {
            account1.check_balance();
        }
        else if (option == WITHDRAW)
        {
            std::cout << "Enter amount to withdraw:" << std::endl;
            std::cin >> wd_amount;
            account1.make_withdrawal(wd_amount);
            account1.check_balance();
        }
        else if (option == DEPOSIT)
        {
            std::cout << "Enter amount for deposit:" << std::endl;
            std::cin >> deposit_amount;
            account1.make_deposit(deposit_amount);
            account1.check_balance();
        }
    }

    return 0;
}
