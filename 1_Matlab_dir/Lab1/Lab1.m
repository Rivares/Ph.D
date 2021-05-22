W1 = tf(1,[0.1 1])
W2 = tf(1,[0.2 1])
W3 = tf(1,[10 1])
W  = 1.5*W1*W2*W3
% [num,den]=tfdata(W)
[A B C D] = ssdata(W)
SSsys = ss(A, B, C, D)

% plot(tout,yout);
% grid on;
% xlabel('t,s');
% ylabel('y(t)');

Td = 0.4;
Dsys = c2d(SSsys,Td)
[Ad Bd Cd Dd] = ssdata(Dsys)

p = [1 -2.3394 1.8794 -0.5134];



Rp = roots(p)

K = place(Ad,Bd,Rp)
Adk = Ad - Bd*K
CL_poly_eig = eig(Adk)
% Ystate = Cd*(eye(3)-Adk)*Rp+Dd
R = inv(Cd*inv((eye(3)-Adk))*Bd)*(1.5-Dd)
% R = 1.5/yD(end);
% [Amdl, Bmdl,Cmadl,Dmdl] = dlinmod('Lab1_mdl_diskr2',Td)

%digital observer
Ro = [0.05;0.01;0.005];
L = place(Ad',Cd',Ro);
Adl = Ad - L'*Cd
eig(Adl)
Ro = inv(Cd*inv((eye(3)-Adl))*Bd)*(1.5-Dd)