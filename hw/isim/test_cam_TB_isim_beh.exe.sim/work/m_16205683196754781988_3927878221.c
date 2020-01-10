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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/jhonathann/Escritorio/Digital 2/Proyecto digital 2/work02-simulation-grupo_1/hw/src/cam_read.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {7, 0};
static int ng4[] = {6, 0};
static int ng5[] = {5, 0};
static int ng6[] = {4, 0};
static int ng7[] = {3, 0};
static int ng8[] = {2, 0};



static void Initial_37_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 32, t1, 32);
    t2 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 15, 0LL);

LAB1:    return;
}

static void Always_42_1(char *t0)
{
    char t4[8];
    char t19[8];
    char t45[8];
    char t69[8];
    char t78[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    int t85;

LAB0:    t1 = (t0 + 3864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4184);
    *((int *)t2) = 1;
    t3 = (t0 + 3896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t5 = (t0 + 1344U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t20 = (t0 + 1504U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t20) == 0)
        goto LAB14;

LAB16:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;

LAB17:    t28 = (t19 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t19);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(66, ng0);

LAB59:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 15, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB20:    goto LAB12;

LAB14:    *((unsigned int *)t19) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(44, ng0);

LAB21:    xsi_set_current_line(45, ng0);
    t34 = (t0 + 1664U);
    t35 = *((char **)t34);
    t34 = (t35 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (~(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(63, ng0);

LAB58:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB24:    goto LAB20;

LAB22:    xsi_set_current_line(45, ng0);

LAB25:    xsi_set_current_line(46, ng0);
    t41 = (t0 + 2704);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = ((char*)((ng1)));
    memset(t45, 0, 8);
    t46 = (t43 + 4);
    t47 = (t44 + 4);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t46);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t47);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB29;

LAB26:    if (t57 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t45) = 1;

LAB29:    t61 = (t45 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t45);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB49;

LAB46:    if (t18 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t4) = 1;

LAB49:    t21 = (t4 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t29 = (t26 & t25);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB50;

LAB51:
LAB52:    goto LAB24;

LAB28:    t60 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(46, ng0);

LAB33:    xsi_set_current_line(47, ng0);
    t67 = (t0 + 1824U);
    t68 = *((char **)t67);
    memset(t69, 0, 8);
    t67 = (t69 + 4);
    t70 = (t68 + 4);
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 7);
    t73 = (t72 & 1);
    *((unsigned int *)t69) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 >> 7);
    t76 = (t75 & 1);
    *((unsigned int *)t67) = t76;
    t77 = (t0 + 2384);
    t79 = (t0 + 2384);
    t80 = (t79 + 72U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t78, t81, 2, t82, 32, 1);
    t83 = (t78 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (!(t84));
    if (t85 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 6);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 6);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 2384);
    t12 = (t0 + 2384);
    t13 = (t12 + 72U);
    t20 = *((char **)t13);
    t21 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t19, t20, 2, t21, 32, 1);
    t27 = (t19 + 4);
    t15 = *((unsigned int *)t27);
    t85 = (!(t15));
    if (t85 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 5);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 5);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 2384);
    t12 = (t0 + 2384);
    t13 = (t12 + 72U);
    t20 = *((char **)t13);
    t21 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t19, t20, 2, t21, 32, 1);
    t27 = (t19 + 4);
    t15 = *((unsigned int *)t27);
    t85 = (!(t15));
    if (t85 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 2);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 2384);
    t12 = (t0 + 2384);
    t13 = (t12 + 72U);
    t20 = *((char **)t13);
    t21 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t19, t20, 2, t21, 32, 1);
    t27 = (t19 + 4);
    t15 = *((unsigned int *)t27);
    t85 = (!(t15));
    if (t85 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 2384);
    t12 = (t0 + 2384);
    t13 = (t12 + 72U);
    t20 = *((char **)t13);
    t21 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t19, t20, 2, t21, 32, 1);
    t27 = (t19 + 4);
    t15 = *((unsigned int *)t27);
    t85 = (!(t15));
    if (t85 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 2384);
    t12 = (t0 + 2384);
    t13 = (t12 + 72U);
    t20 = *((char **)t13);
    t21 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t19, t20, 2, t21, 32, 1);
    t27 = (t19 + 4);
    t15 = *((unsigned int *)t27);
    t85 = (!(t15));
    if (t85 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB32;

LAB34:    xsi_vlogvar_wait_assign_value(t77, t69, 0, *((unsigned int *)t78), 1, 0LL);
    goto LAB35;

LAB36:    xsi_vlogvar_wait_assign_value(t6, t4, 0, *((unsigned int *)t19), 1, 0LL);
    goto LAB37;

LAB38:    xsi_vlogvar_wait_assign_value(t6, t4, 0, *((unsigned int *)t19), 1, 0LL);
    goto LAB39;

LAB40:    xsi_vlogvar_wait_assign_value(t6, t4, 0, *((unsigned int *)t19), 1, 0LL);
    goto LAB41;

LAB42:    xsi_vlogvar_wait_assign_value(t6, t4, 0, *((unsigned int *)t19), 1, 0LL);
    goto LAB43;

LAB44:    xsi_vlogvar_wait_assign_value(t6, t4, 0, *((unsigned int *)t19), 1, 0LL);
    goto LAB45;

LAB48:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(56, ng0);

LAB53:    xsi_set_current_line(57, ng0);
    t27 = (t0 + 1824U);
    t28 = *((char **)t27);
    memset(t19, 0, 8);
    t27 = (t19 + 4);
    t34 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 4);
    t33 = (t32 & 1);
    *((unsigned int *)t19) = t33;
    t36 = *((unsigned int *)t34);
    t37 = (t36 >> 4);
    t38 = (t37 & 1);
    *((unsigned int *)t27) = t38;
    t35 = (t0 + 2384);
    t41 = (t0 + 2384);
    t42 = (t41 + 72U);
    t43 = *((char **)t42);
    t44 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t45, t43, 2, t44, 32, 1);
    t46 = (t45 + 4);
    t39 = *((unsigned int *)t46);
    t85 = (!(t39));
    if (t85 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 3);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 2384);
    t12 = (t0 + 2384);
    t13 = (t12 + 72U);
    t20 = *((char **)t13);
    t21 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t19, t20, 2, t21, 32, 1);
    t27 = (t19 + 4);
    t15 = *((unsigned int *)t27);
    t85 = (!(t15));
    if (t85 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 15, t6, 32);
    t12 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 15, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB52;

LAB54:    xsi_vlogvar_wait_assign_value(t35, t19, 0, *((unsigned int *)t45), 1, 0LL);
    goto LAB55;

LAB56:    xsi_vlogvar_wait_assign_value(t6, t4, 0, *((unsigned int *)t19), 1, 0LL);
    goto LAB57;

}


extern void work_m_16205683196754781988_3927878221_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Always_42_1};
	xsi_register_didat("work_m_16205683196754781988_3927878221", "isim/test_cam_TB_isim_beh.exe.sim/work/m_16205683196754781988_3927878221.didat");
	xsi_register_executes(pe);
}
