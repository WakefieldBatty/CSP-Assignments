def input_a(type):

    return int(input(f"Monthly {type}:"))


def percent(type, amount):
    per = int(amount)/int(income)*100;
    return f"Your {type} is {per} percent of your income.";


print("This is a finance calculator!");
income = input_a("income");
rent = input_a("rent");
utilities = input_a("utilities");
groceries = input_a("groceries");
transport = input_a("transport");
expenses = int(utilities)+int(groceries)+int(transport)+int(rent);
savings = int(income)*.1;
spend = int(income)-int(expenses)-int(savings);
print("You make $", income);
print("Your expenses are $", expenses);
print("Your savings are $", savings);
print("Your spending money is $", spend);
print(percent("rent", rent));
print(percent("utitlities", utilities));
print(percent("groceries", groceries));
print(percent("transport", transport));