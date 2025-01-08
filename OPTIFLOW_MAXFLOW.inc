PARAMETER MAXFLOW(YYY,CCCRRRAAA,PROC,FLOW) "Constraint about fuel use limitations (U/year)"                                                                                          
/                                                                                                                                                                                    
                                                                                                                                                                                     
2020                                                                                                          .    AUSTRIA        .    Manure_Gen .    MANURE_GEN_FLOW 8996043       
2020                                                                                                          .    BELGIUM        .    Manure_Gen .    MANURE_GEN_FLOW 58144790      
2020                                                                                                          .    BULGARIA       .    Manure_Gen .    MANURE_GEN_FLOW 5669904       
2020                                                                                                          .    CROATIA        .    Manure_Gen .    MANURE_GEN_FLOW 3304726       
2020                                                                                                          .    CZECH_REPUBLIC .    Manure_Gen .    MANURE_GEN_FLOW 42830000      
2020                                                                                                          .    DENMARK        .    Manure_Gen .    MANURE_GEN_FLOW 43645140      
2020                                                                                                          .    ESTONIA        .    Manure_Gen .    MANURE_GEN_FLOW 8320000       
2020                                                                                                          .    FINLAND        .    Manure_Gen .    MANURE_GEN_FLOW 8072318       
2020                                                                                                          .    FRANCE         .    Manure_Gen .    MANURE_GEN_FLOW 258410158     
2020                                                                                                          .    GERMANY        .    Manure_Gen .    MANURE_GEN_FLOW 116850000     
2020                                                                                                          .    GREECE         .    Manure_Gen .    MANURE_GEN_FLOW 8371501       
2020                                                                                                          .    HUNGARY        .    Manure_Gen .    MANURE_GEN_FLOW 64079863      
2020                                                                                                          .    IRELAND        .    Manure_Gen .    MANURE_GEN_FLOW 18353940      
2020                                                                                                          .    ITALY          .    Manure_Gen .    MANURE_GEN_FLOW 115954430     
2020                                                                                                          .    LATVIA         .    Manure_Gen .    MANURE_GEN_FLOW 8477504       
2020                                                                                                          .    LUXEMBOURG     .    Manure_Gen .    MANURE_GEN_FLOW 1520000       
2020                                                                                                          .    LITHUANIA      .    Manure_Gen .    MANURE_GEN_FLOW 16890000      
2020                                                                                                          .    NETHERLANDS    .    Manure_Gen .    MANURE_GEN_FLOW 49366734      
2020                                                                                                          .    NORWAY         .    Manure_Gen .    MANURE_GEN_FLOW 5970000       
2020                                                                                                          .    POLAND         .    Manure_Gen .    MANURE_GEN_FLOW 95730716      
2020                                                                                                          .    PORTUGAL       .    Manure_Gen .    MANURE_GEN_FLOW 24466982      
2020                                                                                                          .    ROMANIA        .    Manure_Gen .    MANURE_GEN_FLOW 21148698      
2020                                                                                                          .    SLOVAKIA       .    Manure_Gen .    MANURE_GEN_FLOW 12407252      
2020                                                                                                          .    SLOVENIA       .    Manure_Gen .    MANURE_GEN_FLOW 1580000       
2020                                                                                                          .    SPAIN          .    Manure_Gen .    MANURE_GEN_FLOW 111740000     
2020                                                                                                          .    SWEDEN         .    Manure_Gen .    MANURE_GEN_FLOW 19942503      
2020                                                                                                          .    SWITZERLAND    .    Manure_Gen .    MANURE_GEN_FLOW 6690000       
2020                                                                                                          .    UNITED_KINGDOM .    Manure_Gen .    MANURE_GEN_FLOW 162030561     
/;                                                                                                                                                                                   
                                                                                                                                                                                     
*Equation to ensure that in those areas where there is written no potential, there is no consumption of reGen                                                                        
                                                                                                                                                                                     
                                                                                                                                                                                     
MAXFLOW(YYY,CCCRRRAAA,PROC,FLOW)=MAXFLOW('2020',CCCRRRAAA,PROC,FLOW);                                                                                                                
                                                                                                                                                                                     
*$ifi %baloptfuelbridge%==yes MAXFLOW(YYY,CCCRRRAAA,PROC,FLOW)=0;                                                                                                                    
* No fossil CO2 after 2040                                                                                                                                                           
MAXFLOW(Y,AAA,'CO2_Source_Fossil','CO2_SOURCE_FLOW_FOSSIL')$(AAAOPTIFLOW(AAA) AND YVALUE(Y) GE 2040) = EPS;                                                                          
