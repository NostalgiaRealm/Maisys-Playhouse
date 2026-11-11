
/* ==== FUN_00432f80 @ 00432f80 ==== 
 * signature: int __cdecl FUN_00432f80(short param_1, short * param_2, short * param_3)
 * body: 00432f80-00432fcd
 */

int __cdecl FUN_00432f80(short param_1,short *param_2,short *param_3)

{
  int iVar1;
  int local_c;
  char local_6 [2];
  
  if (param_1 != 1) {
    return 0x10000;
  }
  local_c = 0;
  iVar1 = FUN_00455c10(param_2,&local_c,(int *)0x0);
  if (iVar1 == 0) {
    local_6[1] = 0;
    local_6[0] = (char)local_c;
    iVar1 = FUN_00454fa0(param_3,local_6);
  }
  return iVar1;
}


