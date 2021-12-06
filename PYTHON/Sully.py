def loop():
    i = 5
    while (i > 0):
        i -= 1
        a = "def loop():{1:c}{0}i = {3}{1:c}{0}while (i > 0):{1:c}{0}{0}i -= 1{1:c}{0}{0}a = {2:c}{4}{2:c}{1:c}{0}{0}file_name = {2:c}Sully_{2:c} + str(i) + {2:c}.py{2:c}{1:c}{0}{0}file = open(file_name, {2:c}w{2:c}){1:c}{0}{0}file.write(a.format('    ', 10, 34, i, a)){1:c}loop(){1:c}"
        file_name = "Sully_" + str(i) + ".py"
        file = open(file_name, "w")
        file.write(a.format('    ', 10, 34, i, a))
loop()
