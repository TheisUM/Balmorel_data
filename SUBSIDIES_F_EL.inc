PARAMETER SUBSIDIES_F_EL(YYY,CCC,GGG) 'fuel subsidy for electricity generation Money/GJ';                                                                                                                                                                                                                                        
*Multiplying factor: EUR2012/DKK2015                                                                                                                                                                           0.131383523935156                                                                                                 
* March 2019: Lise Skovsgaard                                                                                                                                                                                                                                                                                                    
*LISE: I DON'T THINK THIS IS RELEVANT - HOWEVER IF IT IS RELEVANT - I WOULD ASSUME THE UNIT SHOULD BE MONEY/GJ, BECAUSE SUPPORT RELATE TO INPUT FUEL NOT ELECTRICITY OUTPUT                                                                                                                                                      
*** Main input format: per country and per fuel                                                                                                                                                                                                                                                                                  
TABLE SUBSIDIES_F_EL_IN(YYY,CCC,FFF) 'fuel subsidy for electricity generation'                                                                                                                                                                                                                                                   
$ontext                                                                                                                                                                     BIOGAS BIOMETHANE_UP BIOMETHANE_H2 HYDROGEN          NUCLEAR NATGAS COAL      LIGNITE FUELOIL LIGHTOIL SHALE PEAT LNG  ELECTRIC WIND                 
2015.NORWAY                                                                                                                                                                                                                                                                                                                      
2015.DENMARK                                                                                                                                                                0      0             0             0                 0       0      0         0       0       0        0     0    0    0        0                    
2015.FINLAND                                                                                                                                                                                                                                                                                                                     
2015.GERMANY                                                                                                                                                                x      y             y             y                                                                                                                 
2015.SWEDEN                                                                                                                                                                                                                                                                                                                      
2015.ESTONIA                                                                                                                                                                                                                                                                                                                     
2015.LATVIA                                                                                                                                                                                                                                                                                                                      
2015.LITHUANIA                                                                                                                                                                                                                                                                                                                   
$offtext                                                                                                                                                                                                                                                                                                                         
;                                                                                                                                                                                                                                                                                                                                
* Apply 2015 numbers to all years:                                                                                                                                                                                                                                                                                               
SUBSIDIES_F_EL_IN(Y,C,FFF)$(YVALUE(Y) NE 2015) = SUBSIDIES_F_EL_IN('2015',C,FFF);                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                 
* Assign values onto SUBSIDIES_F_EL                                                                                                                                                                                                                                                                                              
SUBSIDIES_F_EL(Y,C,G)$((SUM(IA$ICA(C,IA), GKFX(Y,IA,G)) > 0) OR SUM(IA$ICA(C,IA), AGKN(IA,G)))  = SUM(FFF$IGF(G,FFF), SUBSIDIES_F_EL_IN(Y,C,FFF));                                                                                                                                                                               
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
* Notice: It would be nice with a table, where "end of support" could be registed                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
$ontext                                                                                                                                                                                                                                                                                                                          
Discarded options:                                                                                                                                                                                                                                                                                                               
TABLE TAX_F_CO2(YYY,CCC) 'Additional CO2 tax on electricity generation (�/t)'                                                                                                                                                                                                                                                    
                                                                                                                                                                            NORWAY DENMARK       FINLAND       SWEDEN            ESTONIA LATVIA LITHUANIA GERMANY                                                                
2015                                                                                                                                                                                                                             2                                                                                               
                                                                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                                                                 
TABLE TAX_F_CO2(YYY,CCC) 'Additional CO2 tax on heat generation (�/t)'                                                                                                                                                                                                                                                           
                                                                                                                                                                            NORWAY DENMARK       FINLAND       SWEDEN            ESTONIA LATVIA LITHUANIA GERMANY                                                                
2015                                                                                                                                                                                                                                                                                                                             
$offtext                                                                                                                                                                                                                                                                                                                         