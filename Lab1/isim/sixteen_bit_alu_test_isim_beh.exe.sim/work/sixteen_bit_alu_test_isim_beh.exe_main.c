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
    work_m_17947269621761808155_1694758078_init();
    work_m_08397335293482216111_0836956740_init();
    work_m_15102096197446522744_0527624678_init();
    work_m_17168789687870121584_2762932987_init();
    work_m_11771766177527008502_0476971808_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_11771766177527008502_0476971808");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
