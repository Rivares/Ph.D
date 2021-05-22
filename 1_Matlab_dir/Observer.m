x0 = []

% u0 = 120.3710
u0 = 160

y0 = []

ix = []

iu = [1]

iy = []

% [x,u,y,dx] = trim('RC_buttom_Evaporator_4', x0, u0, y0, ix, iu, iy)
% 
% [num, den] = linmod('RC_buttom_Evaporator_4', x, u)
% 
% [A,B,C,D] = linmod('RC_buttom_Evaporator_4', x, u)

[x,u,y,dx] = trim('Desorbtion_mt_4', x0, u0, y0, ix, iu, iy)

[num, den] = linmod('Desorbtion_mt_4', x, u)

[A,B,C,D] = linmod('Desorbtion_mt_4', x, u)

sys = ss(A , B, C , D)

W = tf(sys)

[num_new, den_new] = tfdata(W)

[A_new, B_new, C_new, D_new] = tf2ss(num_new{1, 1}, den_new{1, 1})

sys_new = ss(A_new, B_new, C_new, D_new)

step(sys_new)
% impulse(sys_new)
% bode(sys_new)
% nyquist(sys_new)

U_new = ctrb(A_new,B_new)

V_new = obsv(A_new,C_new)

rank(U_new)
rank(V_new)



size_A = size(A_new);
n = size_A(1);
% tgel = 0.3;
tgel = 1000;
Batherwort_polinom_coefficients
K = place(A_new,B_new,p)

tgel = tgel/5;
Batherwort_polinom_coefficients
l = place(A_new',C_new', p)
L=l'


















