s=tf('s')%Se define s como variable para funciones de transferencia
P=5e4;%Ganancia proporcional
m=0.5;%Valor de la masa
G=1/(m*s^2);%Función de transferencia del sistema
Td=3.0303e-3;%Constantes del controlador
Tt=0.30303e-3;
Df=(1+Td*s)/(1+Tt*s);%Función de transferencia del controlador
Gla=G*Df*P;%Sistema en lazo abierto
bode(Gla)%Diagrama de bode del sistema en Lazo abierto
[mg, mf, wf, wg]= margin(Gla)%Valores más importantes del sistema en LA
