print("This is a finance calculator!");
income = input("What is your monthly income?: ");
utilities = input("How much are your utilities?: ");
groceries = input("How much are your groceries?: ");
transport = input("How much are your transportation costs?: ");
rent = input("How much is your rent?: ");
expenses = int(utilities)+int(groceries)+int(transport)+int(rent);
savings = int(income)*.1;
spend = int(income)-int(expenses)-int(savings)
print("You make $", income);
print("Your expenses are $", expenses);
print("Your savings are $", savings);
print("Your spending money is $", spend);
prent = int(rent)/int(income)*100;
putilities = int(utilities)/int(income)*100;
pgroceries = int(groceries)/int(income)*100;
ptransport = int(transport)/int(income)*100;
psavings = int(savings)/int(income)*100;
pexpenses = int(expenses)/int(income)*100;
print(putilities, "percent of your income is utilities");
print(pgroceries, "percent of your income is groceries");
print(ptransport, "percent of your income is transportation");
print(psavings, "percent of your income is savings");
print(pexpenses, "percent of your income is expenses");
print(prent, "percent of your income is rent");