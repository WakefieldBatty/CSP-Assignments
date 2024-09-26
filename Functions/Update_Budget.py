def input_a(type, var):

    var = input("Monthly :", type);
    return f"{var}";

# I'm really sorry, I tried really hard on this and couldn't figure it out the percent function part of the assignment.

def percent(type, amount):
    per = int(amount)/int(income)*100;
    return f"Your {type} is {per} percent of your income.";


print("This is a finance calculator!");
income = input("How much is your monthly income?: ");
rent = input("How much is your rent?: ");
utilities = input("How much are your utilities?: ");
groceries = input("How much are your groceries?: ");
transport = input("How much are your transportation costs?: ");
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