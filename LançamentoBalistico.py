from math import *

# inputs = velocidade em m/s (V0)
#         angulo do lancamento em graus
# outputs = distancia percorrida (alcance)
#             altura maxima
#             duracao do lancamento

G = 9.8

def sorvete():
  S = S0 + A*T
  S0 = S - (A*T)
  A = (S - S0)/T
  T = (S - S0)/A
  

def sorvetão():
  S = S0 + V0*T + ((-G*(T**2))/2)
  S0=S-V0*T-(G*T*T/2)
  V0=(S-S0-(G*T*T/2))/T

def vovo():
  V0 = V - (A*T)
  A = (V - V0)/T
  V = V0 + A*T
  T = (V - V0)/A

def vovoateu():
  DS = S - S0
  V = sqrt((V0**2) + 2*A*DS)
  
def velx():
  V0x = float(input('V0x = '))
  V0 = float(input('V0 = '))
  A0 = int(input('A0 = '))
  A = (A0 * pi)/180
  
  if V0x == 0:
    V0x = V0 * cos(A)
  elif V0 == 0:
    V0 = V0x/cos(A)
  #elif cos(A0) is null:
  #  cos(A0) = V0x/V0

  print()
  print('VOx = %.3f' % V0x)
  print('VO = %.3f' % V0)
  print('cos(A0) = %.3f' %cos(A))
def vely():
  V0y = float(input('V0y = '))
  V0 = float(input('V0 = '))
  A0 = float(input('A0 = '))
  A = (A0 * pi)/180
  
  if V0y == 0:
    V0y = V0 * sin(A)
  elif V0 == 0:
    V0 = V0y/sin(A)
  #elif sen(A0) is null:
  #  sen(A0) = V0y/V0

  print()
  print('VOy = %.3f' % (V0y))
  print('VO = %.3f' % (V0))
  print('sen(A0) = %.3f' % (sin(A)))

def main():
  count = input('qual formula? ')

  if count == '1':
    sorvete()
  elif count == '2':
    sorvetão()
  elif count == '3':
    vovo()
  elif count == '4':
    vovoateu()
  elif count == '5':
    velx()
  elif count == '6':
    vely()

main()
