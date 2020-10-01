#A program that converts a decimal number to binary, octal or hexadecimal.

keepGoing = 1
while(keepGoing): #enter the loop while keepGoing = true (1);
    num = int(input("Type a decimal number: "))
    print('''Choose the base to which you wish to convert:
    [   2  ] Binary
    [   8  ] Octal
    [  16  ] Hexadecimal
    ''')
    base = int(input("Base:  "))

    while base != 2 and base != 8 and base != 16:
            print("\nYou choosed an invalid option!!!")
            base = int(input("Choose between base 2, base 8 or base 16: "))

    number = num  # store the number to be printed

    i = 0
    rest = []
    if base == 2:
        while (num >= 2):
            rest.append(num % 2)
            num = num // 2
            i += 1

        print(f"The {number} in binary is represented by: ", end='')
        binary = str(num)
        k = len(rest)
        while (k != 0):
            binary += str(rest[k-1])
            k = k-1

        print(binary)
        print("\n")

    i = 0
    rest = []
    if base == 8:
        while (num >= 8):
            rest.append(num % 8)
            num = num // 8
            i += 1

        print(f"The {number} in octal is represented by: ", end='')
        octal = str(num)
        k = len(rest)
        while (k != 0):
            octal += str(rest[k-1])
            k = k-1

        print(octal)
        print("\n")

    i = 0
    rest = []
    if base == 16:
        while (num >= 16):
            rest.append(num % 16)
            num = num // 16
            i += 1

        print(f"The {number} in hexadecimal is represented by: ", end='')
        hexa = str(num)
        k = len(rest)
        while (k != 0):
            hexa += str(rest[k-1])
            k = k-1

        hexa = hexa.replace('10', 'A')
        hexa = hexa.replace('11', 'B')
        hexa = hexa.replace('12', 'C')
        hexa = hexa.replace('13', 'D')
        hexa = hexa.replace('14', 'E')
        hexa = hexa.replace('15', 'F')

        print(hexa)
        print("\n")

    keepGoing = input('Do you wanna convert another number?[y/n] ')
    if keepGoing == ('y' or 'Y'):
        print("\n")
        continue
    elif keepGoing == ('n' or 'N'):
        keepGoing = 0
