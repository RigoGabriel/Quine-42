#premier commentaire
def fct(a):
    print(a.format('    ', 10, 34, a))
if __name__ == '__main__':
    #commentaire interne
    a = "#premier commentaire{1:c}def fct(a):{1:c}{0}print(a.format('    ', 10, 34, a)){1:c}if __name__ == '__main__':{1:c}{0}#commentaire interne{1:c}{0}a = {2:c}{3}{2:c}{1:c}{0}fct(a)"
    fct(a)
