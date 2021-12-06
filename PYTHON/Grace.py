#il est joli ce commentaire
a = "#il est joli ce commentaire{1:c}a = {2:c}{3}{2:c}{1:c}def fct(a):{1:c}{0}file = open({2:c}Grace_kid.py{2:c}, {2:c}w{2:c}){1:c}{0}file.write(a.format('    ', 10, 34, a)){1:c}{0}file.close(){1:c}fct(a){1:c}"
def fct(a):
    file = open("Grace_kid.py", "w")
    file.write(a.format('    ', 10, 34, a))
    file.close()
fct(a)
