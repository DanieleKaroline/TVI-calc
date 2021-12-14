e = 2.718282

x, y = map(float(input("Digite os valores do intervalo: ")))

if (x > y):
    t = x
    x = y
    y = t

def raiz(res,y):
    if ((res>0 and y<0)or(res<0 or y>0)):
        return True
    else:
        return False

def teorema(x,e):

    resu = -e**(-x)+2(x**2)-4
    return resu

res = teorema(x,e)

solucao = raiz(res,y)

if solucao == True:
    print("A equacao tem pelo menos uma solucao neste intervalo: [{}, {}]\n", x, y)
else:
    print("Nao eh possivel afirmar que existe solucao neste intervalo, tente outros dois numeros")

