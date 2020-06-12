// Old Schem#1
72.6847 | 71.5488 | 80.7783 | 4.54514 | 2.76504 | 0.95936 |

// New Schem#2
70.4736 | 73.1137 | 75.8969 | 4.66661 | 2.8475 | 1.09653 | 

/////////////////

155.16449029122845 | 152.50465828758893849 | 145.72887962092872272
123.58054551102020469 | 126.85211284461115611 | 129.89484455074043012
70.47568855075274996 | 73.11830901943687877 | 75.90607261544103324
5.24713636304225073 | 4.24958318048252792 | 3.32621346495621095

155.16449029121063 | 152.50465828757523923 | 145.72887962089978942
123.58054551101886886 | 126.85211284460983450 | 129.89484455073917957
70.47568855075270733 | 73.11830901943683614 | 75.90607261544150219
5.24713636304224806 | 4.24958318048252437 | 3.32621346495620873 

155.16449029111638 | 152.50465828749665320 | 145.72887962062512202
123.58054551052349268 | 126.85211284416160993 | 129.89484455030472532
70.47568855075355998 | 73.11830901943800143 | 75.90607261544445805
5.24713636304222941 | 4.24958318048251638 | 3.32621346495620429

155.16449029111638 | 152.50465828749665320 | 145.72887962062512202
123.58054551052349268 | 126.85211284416160993 | 129.89484455030472532
70.47568855074899830 | 73.11830901943126548 | 75.90607261543470941
5.24713636306240883 | 4.24958318047605310 | 3.32621346494583303 


           TV[i][j] = (dt * RvT * TF[i-1][(selectZ-1)-j])
                    + (PTV * TV[i-1][j-1])
                    + TV[i-1][j] * (-(dt * RvT) - PTV)
                    + TV[i-1][j]
                    + P_TV;
           
           TF[i][j] = (dt * RfT * TV[i-1][(selectZ-1)-j])
                    + (PTF * TF[i-1][j-1])
                    + TF[i-1][j] * (-PTF - (dt * RfT))
                    + TF[i-1][j]
                    + P_TF;

// Before:
155.89056182951151 | 151.92065936516576130 | 148.06538173346996246
123.71808717810333178 | 126.84828079335429152 | 129.93426795802278662

// Now:
155.89056182946106 | 151.92065936506858748 | 148.06538173332586439
123.71808717761069829 | 126.84828079290701908 | 129.93426795758401227 




// New Schem Steady-state values:
156.89979777 | 154.05553178 | 150.35154065 | 
124.47274733 | 128.51386183 | 132.39013275 | 
69.86682764 | 71.85718500 | 73.92266185 | 
4.71574671 | 2.92787497 | 1.19186228 |

// Old Schem Steady-state values:
156.89979777 | 154.05553178 | 150.35154065 | 
124.47274733 | 128.51386183 | 132.39013275 | 
71.20996914 | 70.89539185 | 76.89866536 | 
4.64168514 | 2.87779397 | 1.10854941 | 