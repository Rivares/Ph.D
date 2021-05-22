[A,B,C,D]=linmod('Two_mass_stifness_system')
OB = obsv(A,C)
rank(OB)
CN=ctrb(A,B)
rank(CN)

n = 3;
tgel =0.3;
Batherwort_polinom_coefficients
K = place(A,B,p)

tgel =tgel/5;
Batherwort_polinom_coefficients
l = place(A',C', p)
L=l'