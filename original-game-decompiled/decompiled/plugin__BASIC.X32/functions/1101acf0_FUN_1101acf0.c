
/* ==== FUN_1101acf0 @ 1101acf0 ==== 
 * signature: uint __cdecl FUN_1101acf0(undefined4 * param_1, double param_2, int param_3, uint param_4, undefined4 * param_5, double * param_6)
 * body: 1101acf0-1101ae0e
 */

uint __cdecl
FUN_1101acf0(undefined4 *param_1,double param_2,int param_3,uint param_4,undefined4 *param_5,
            double *param_6)

{
  short sVar1;
  undefined2 extraout_var;
  
  if ((param_4 & 0x7fffffff) == 0 && param_3 == 0) {
    if (param_2 < 0.0) {
      *param_5 = 0x54442d18;
      param_5[1] = 0x400921fb;
      *param_6 = -param_2;
      return (uint)param_5 & 0xffff0000;
    }
    *param_5 = 0;
    param_5[1] = 0;
    *param_6 = param_2;
    return param_2._0_4_ & 0xffff0000;
  }
  if (((ulonglong)param_2 & 0x7fffffff00000000) != 0 || param_2._0_4_ != 0) {
    sVar1 = FUN_11011450(param_1,&param_3,&param_2,param_5);
    if (sVar1 != 0) {
      return CONCAT22(extraout_var,0xfff4);
    }
    param_2 = param_2 * param_2 +
              (double)CONCAT44(param_4,param_3) * (double)CONCAT44(param_4,param_3);
    sVar1 = FUN_11011250(param_1,&param_2,param_6);
    return (sVar1 == 0) - 1 & 0xfffffff4;
  }
  *param_5 = 0x54442d18;
  if ((double)CONCAT44(param_4,param_3) < 0.0) {
    param_5[1] = 0xbff921fb;
    *param_6 = -(double)CONCAT44(param_4,param_3);
    return (uint)param_5 & 0xffff0000;
  }
  param_5[1] = 0x3ff921fb;
  *(uint *)((int)param_6 + 4) = param_4;
  *(int *)param_6 = param_3;
  return param_3 & 0xffff0000;
}


