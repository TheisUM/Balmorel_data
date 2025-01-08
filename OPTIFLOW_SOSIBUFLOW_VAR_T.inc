PARAMETER SOSIBUFLOW_VAR_T(AAA,PROC,FLOW,SSS,TTT) "Variation in some Source, Sink or Buffer Flows over the year"
/                                                                                                               
                                                                                                                
/;                                                                                                              
                                                                                                                
SOSIBUFLOW_VAR_T(IA,'WOOD_GEN','WOOD_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;                 
SOSIBUFLOW_VAR_T(IA,'STRAW_GEN','STRAW_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;               
SOSIBUFLOW_VAR_T(IA,'WOOD_PELLETS_GEN','WOOD_PELLETS_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1; 
SOSIBUFLOW_VAR_T(IA,'MANURE_GEN','MANURE_GEN_FLOW',S,T)$(AAAOPTIFLOW(IA)AND(not AAATRANSIT(IA)))=1;             
