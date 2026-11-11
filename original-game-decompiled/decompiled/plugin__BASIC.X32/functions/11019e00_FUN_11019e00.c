
/* ==== FUN_11019e00 @ 11019e00 ==== 
 * signature: undefined4 __cdecl FUN_11019e00(int param_1, short * param_2, undefined4 * param_3)
 * body: 11019e00-11019e39
 */

undefined4 __cdecl FUN_11019e00(int param_1,short *param_2,undefined4 *param_3)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  if (0x13 < *param_2) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),0xfffe);
  }
  puVar2 = (undefined4 *)(*param_2 * 0x30 + param_1);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  *param_2 = *param_2 + 1;
  return param_1 & 0xffff0000;
}


