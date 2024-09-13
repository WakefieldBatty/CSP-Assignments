print("This is a finance calculator!");
income = input("What is your monthly income?: ");
print("You make $",income);
utilities = input("How much are your utilities?: ");
print("This is how much you can spend a month:")
spend = input(int(income) - int(utilities));