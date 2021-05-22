
% Fadeev - Leverie algorithm 
% to find modal controller coefficients
Lab1;
% first determine characteristic polinomial of open-loop system coefficiants
n = length(Ad)
Q = eye(n)
S = Q*Bd
for i = 1:n
    R = Ad*Q
    f(i) = -trace(R)/i
    Q = R + f(i)*eye(n)
    S = [S Q*Bd]
end
F = [1 f(1) f(2) f(3)]

% check eigen values of Ad matrix and obtained Ch polynom
FRoots = roots(F)
AdRoots = eig(Ad)

e = p(2:end) - F(2:end)
Rfb = e*inv(S(:,1:n))
Adk_fadeev = Ad - Bd*Rfb
CL_fadeev_eig = eig(Adk_fadeev)