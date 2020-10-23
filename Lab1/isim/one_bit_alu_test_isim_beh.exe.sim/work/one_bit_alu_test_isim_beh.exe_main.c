/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_12936874907158457099_3082161898_init();
    work_m_17947269621761808155_1694758078_init();
    work_m_17983573433731320311_3647534140_init();
    work_m_04288528480882294364_3104681554_init();
    work_m_07727338601086360085_0758945814_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_07727338601086360085_0758945814");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
