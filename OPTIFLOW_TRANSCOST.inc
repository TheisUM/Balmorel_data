TABLE TRANSCOST(TRANSCOSTDATASET,TRANSDISTWEIGHT,PROC,FLOWINDIC)  "Transport 'cost' in terms of INDICS"                                                             
                                                                                                                                                                    
                                                                                                              OPERATIONCOST       GHGEMISSION_nonbio GHGEMISSION_bio
*                                                                                                             Money               Ton                               
TCDMONEYDISTFLOW.ITRANSDWDISTWEIGHT.ProcEximTruck                                                             0.00387323943661972                                   
TCDMONEYDISTFLOW.ITRANSDWWEIGHT.ProcEximTruck                                                                 0.119718309859155                                     
TCDMONEYDISTFLOW.ITRANSDWDISTWEIGHT.ProcEximShip                                                              0.00522222222222222                                   
TCDMONEYDISTFLOW.ITRANSDWWEIGHT.ProcEximShip                                                                  0.0910098224639682                                    
;                                                                                                                                                                   
                                                                                                                                                                    
PARAMETER TRANSPORTFUEL(YYY,TRANSCOSTDATASET,PROC,FLOW)                                                                                                             
/                                                                                                                                                                   
/;                                                                                                                                                                  
