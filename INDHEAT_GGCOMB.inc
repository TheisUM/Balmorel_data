SET INDHEAT_GGCOMB(INDHEAT_GGG,INDHEAT_IGGGALIAS) 'Pair of combination technologies'
/                                                                                   
IDVHG_GB_2010_OFH . IDVHG_GB_2010_OFH_BGAS_UP                                       
IDVHG_GB_2020_OFH . IDVHG_GB_2020_OFH_BGAS_UP                                       
IDVHG_GB_2030_OFH . IDVHG_GB_2030_OFH_BGAS_UP                                       
IDVHG_GB_2050_OFH . IDVHG_GB_2050_OFH_BGAS_UP                                       
IDVHG_GB_2010_APART . IDVHG_GB_2010_APART_BGAS_UP                                   
IDVHG_GB_2020_APART . IDVHG_GB_2020_APART_BGAS_UP                                   
IDVHG_GB_2030_APART . IDVHG_GB_2030_APART_BGAS_UP                                   
IDVHG_GB_2050_APART . IDVHG_GB_2050_APART_BGAS_UP                                   
$ifi not %HYDROGEN%==yes $goto endhydrogen                                          
IDVHG_GB_2010_OFH . IDVHG_GB_2010_OFH_BGAS_H2                                       
IDVHG_GB_2020_OFH . IDVHG_GB_2020_OFH_BGAS_H2                                       
IDVHG_GB_2030_OFH . IDVHG_GB_2030_OFH_BGAS_H2                                       
IDVHG_GB_2050_OFH . IDVHG_GB_2050_OFH_BGAS_H2                                       
IDVHG_GB_2010_APART . IDVHG_GB_2010_APART_BGAS_H2                                   
IDVHG_GB_2020_APART . IDVHG_GB_2020_APART_BGAS_H2                                   
IDVHG_GB_2030_APART . IDVHG_GB_2030_APART_BGAS_H2                                   
IDVHG_GB_2050_APART . IDVHG_GB_2050_APART_BGAS_H2                                   
$label endhydrogen                                                                  
/;                                                                                  