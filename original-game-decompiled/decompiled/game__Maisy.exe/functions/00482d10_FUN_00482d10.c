
/* ==== FUN_00482d10 @ 00482d10 ==== 
 * signature: undefined4 __cdecl FUN_00482d10(undefined4 param_1, short * param_2, short * param_3)
 * body: 00482d10-00482dde
 */

undefined4 __cdecl FUN_00482d10(undefined4 param_1,short *param_2,short *param_3)

{
  short sVar1;
  char *pcVar2;
  
  if (*param_3 != *param_2) {
    if (*param_2 != 0) {
      return 0x60002;
    }
    FUN_00482c60(param_1,(undefined4 *)param_2,*param_3);
  }
  sVar1 = *param_3;
  switch(sVar1) {
  case 0:
    *param_2 = 0;
    return 0;
  default:
    return 0x60002;
  case 100:
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
    param_2[4] = param_3[4];
    return 0;
  case 0x69:
    FUN_0048b6e0(param_2,param_3);
    return 0;
  case 0x6d:
    FUN_0048b8d0(param_2,(int)param_3);
    return 0;
  case 0x6f:
    FUN_0048b5f0(0xffffffff,param_2,param_3);
    return 0;
  case 0x73:
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = sVar1;
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 3);
    pcVar2 = FUN_0043b970(*(char **)(param_3 + 5));
    *(char **)(param_2 + 5) = pcVar2;
    return 0;
  }
}


