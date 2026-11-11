
/* ==== FUN_00482e70 @ 00482e70 ==== 
 * signature: undefined4 __cdecl FUN_00482e70(undefined4 param_1, short * param_2, short param_3)
 * body: 00482e70-00482eb2
 */

undefined4 __cdecl FUN_00482e70(undefined4 param_1,short *param_2,short param_3)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = param_2;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    psVar2[0] = 0;
    psVar2[1] = 0;
    psVar2 = psVar2 + 2;
  }
  *param_2 = param_3;
  if ((param_3 == 0x66) || (param_3 == 0x76)) {
    param_2[1] = -1;
    param_2[2] = -1;
  }
  else if (param_3 == 0x65) {
    param_2[1] = -1;
    param_2[2] = -1;
    return 0;
  }
  return 0;
}


