
/* ==== FUN_004328e0 @ 004328e0 ==== 
 * signature: int __cdecl FUN_004328e0(short param_1, short * param_2, short * param_3)
 * body: 004328e0-0043293d
 */

int __cdecl FUN_004328e0(short param_1,short *param_2,short *param_3)

{
  int iVar1;
  short local_14;
  int local_12;
  undefined4 local_e;
  int local_8;
  
  if (param_1 != 3) {
    return 0x10000;
  }
  iVar1 = FUN_00455c10(param_2 + 0x2c,&local_8,(int *)0x0);
  if (iVar1 == 0) {
    local_12 = local_8;
    local_e = 0;
    local_14 = 0xb;
    iVar1 = FUN_004326a0(&local_14,param_2 + 0x16,param_2,param_3);
  }
  return iVar1;
}


