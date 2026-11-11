
/* ==== FUN_1101ae10 @ 1101ae10 ==== 
 * signature: undefined4 __cdecl FUN_1101ae10(undefined4 * param_1, undefined4 param_2, undefined4 param_3, double param_4, double * param_5, double * param_6)
 * body: 1101ae10-1101ae7d
 */

undefined4 __cdecl
FUN_1101ae10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,double param_4,
            double *param_5,double *param_6)

{
  short sVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  double local_10;
  double local_8;
  
  sVar1 = FUN_11011110(param_1,&param_2,&local_8);
  if (sVar1 != 0) {
    return CONCAT22(extraout_var,0xfff3);
  }
  sVar1 = FUN_11011150(param_1,&param_2,&local_10);
  if (sVar1 != 0) {
    return CONCAT22(extraout_var_00,0xfff3);
  }
  *param_5 = local_10 * param_4;
  *param_6 = local_8 * param_4;
  return (uint)param_5 & 0xffff0000;
}


