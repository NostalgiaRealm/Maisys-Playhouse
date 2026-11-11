
/* ==== FUN_00455230 @ 00455230 ==== 
 * signature: undefined4 __cdecl FUN_00455230(short * param_1, short * param_2, int param_3)
 * body: 00455230-004552d1
 */

undefined4 __cdecl FUN_00455230(short *param_1,short *param_2,int param_3)

{
  int *piVar1;
  char local_404 [1024];
  
  if ((*param_2 == 0x6a) || (*param_2 == 0)) {
    *param_2 = 0x66;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[1] = -1;
    param_2[2] = -1;
    param_2[7] = 0;
    param_2[8] = 0;
  }
  if ((*param_1 == 0x66) && (*(int *)(param_1 + 5) != 0)) {
    FUN_0048b5f0(param_3,param_2,param_1);
    return 0;
  }
  piVar1 = (int *)0x0;
  local_404[0] = '\0';
  if (param_3 != 0) {
    piVar1 = (int *)FUN_0048b550(param_3);
  }
  FUN_00456560(param_1,local_404,0x3ff,piVar1);
  FUN_00455210(param_3,param_2,local_404);
  return 0;
}


