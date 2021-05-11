x0 = []

u0 = 120.3700

y0 = []

ix = []

iu = [1]

iy = []

[x,u,y,dx] = trim('RC_buttom_Evaporator_4', x0, u0, y0, ix, iu, iy)

[num, den] = linmod('RC_buttom_Evaporator_4', x, u)

[A,B,C,D] = linmod('RC_buttom_Evaporator_4', x, u)

sys = ss(A , B, C , D)

W = tf(sys)

[num_new, den_new] = tfdata(W)

[A_new, B_new, C_new, D_new] = tf2ss(num_new{1, 1}, den_new{1, 1})

sys_new = ss(A_new, B_new, C_new, D_new)

step(sys_new)
% impulse(sys_new)
% bode(sys_new)
% nyquist(sys_new)

U_new = ctrb(A_new,B_new);

V_new = obsv(A_new,C_new);

rank(U_new)
rank(V_new)
























syms s t;






size_A = size(A_new);

% fprintf('\t—обственные числа: \n')

my_num = eig(A_new);



% ѕриведение системы к минимальной реализации:
% M Ц матрица преобразовани€ координат, sysmin Ц минимальна€ реализаци€ системы sys
[sysmin, M] = minreal(sys_new)

Ar = M * A_new * inv(M);
Br = M * B_new;
Cr = C_new * inv(M);


% __________________________________________________________________________________



E = eye(size(Ar)); % ≈динична€ матрица
sE_Ar = (s * E) - Ar;

Exp_x_nu = zeros(size_A(1),1,'double');
Exp_x_nu(size_A(1)) = 1;

G_s_nu = vpa(expand(det([[sE_Ar , Exp_x_nu]; [-(s * Cr) , 0]])), 2) % matRezenbroga
D_s_nu = vpa((expand(det(sE_Ar))), 2)
W_nu = G_s_nu / D_s_nu

W_s_nu_new = vpa(simplify(expand((s * Cr * inv(sE_Ar) * Exp_x_nu))), 2) % Alternative


% __________________________________________________________________________________



E = eye(size(sysmin.A)); % ≈динична€ матрица
sE_A_min = (s * E) - sysmin.A;

G_s_min = vpa(expand(det([[sE_A_min , sysmin.B]; [-sysmin.C , sysmin.D]])), 2) % matRezenbroga
D_s_min = vpa(expand(det(sE_A_min)), 2)
W_min = G_s_min / D_s_min

W_s_min_new = vpa(simplify(expand((sysmin.C * inv(sE_A_min) * sysmin.B))), 2) % Alternative

% __________________________________________________________________________________


U_nu = -(W_nu / W_min) % matRezenbroga
% U_nu = vpa((simplify(-1 * ((G_s_nu * D_s_min) / ((D_s_nu * G_s_min))))), 2) % vpa(-1 * (-((1.1*s^2 - 2.5*s + 4.4))/0.9994), 2) % vpa((simplify(-1 * ((G_s_nu * D_s_min) / ((D_s_nu * G_s_min))))), 2)

U_nu_new =  vpa((simplify(-1 * ((W_s_nu_new) / ((W_s_min_new))))), 2) % Alternative


K_nu = zeros(1,size_A(1),'double');
K_nu(size_A(1)) = subs(int(simplify(ilaplace(U_nu, s, t))), t, 1)


% __________________________________________________________________________________


U_c = vpa(K_nu * M, 2)



