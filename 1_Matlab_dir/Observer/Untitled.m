[A,B,C,D]=linmod('Two_mass_stifness_system_modal_controller')
sys1=ss(A,B,C,D);
% step(sys1);

 [A2,B2,C2,D2]=linmod('Two_mass_stifness_system_modal_controller_observer')
sys2=ss(A2,B2,C2,D2);
step(sys1,sys2)
% hold on;
% step(sys2);