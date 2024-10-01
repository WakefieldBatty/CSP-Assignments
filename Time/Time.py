time = input("What time is it right now in military time?: ")
int(time)
if int(time) <= 12:
    print("Good morning!")
elif int(time) <= 17:
    print("Good afternoon!")
elif int(time) <= 21:
    print("Good evening!")
elif int(time) <= 24:
    print("why are you up this late using this code?")

#(*-*)