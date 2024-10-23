** Separate the digits of a decimal number using the mod operation :
.....................................................................

- prottek ta number er last digit bade baki gula 10 dara divisibile.
- 123 % 10  korle last digit hisebe 3 ber kore at the same time
- 123 / 10 korle 12 hobe, agian 12 % 10 korle 2 ber kore
- 12 / 10 korle 1 hobe, agian 1 % 10 korle 1 ber kore, 
- eivabe e process continue hobe jabtak number 0 na hoiya jay.
- and then print the number as reverse order, exam: 123 = 321


# to find last digit of a number: number % 10
# to remove last digit of a number: number / 10

#SUPPOSE: number = 65634

# 65634 % 10 = 4        ARRAY = 4
# 65634 / 10 = 6563 
# 6563 % 10 = 3         ARRAY = 4, 3
# 6563 / 10 = 656
# 656 % 10 = 6          ARRAY = 4, 3, 6
# 656 / 10 = 65
# 65 % 10 = 5           ARRAY = 4, 3, 6, 5
# 65 / 10 = 6
# 6 % 10 = 6            ARRAY = 4, 3, 6, 5, 6
