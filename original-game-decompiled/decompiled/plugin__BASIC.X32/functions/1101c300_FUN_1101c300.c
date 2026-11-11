
/* ==== FUN_1101c300 @ 1101c300 ==== 
 * signature: uint __cdecl FUN_1101c300(undefined4 * param_1, undefined2 * param_2, short * param_3)
 * body: 1101c300-1101c33c
 */

uint __cdecl FUN_1101c300(undefined4 *param_1,undefined2 *param_2,short *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_11019ca0(param_1,param_3);
  if ((short)uVar1 == 0) {
    if (*param_3 == 0x1a) {
      *param_2 = 0x1a;
      *(bool *)(param_2 + 1) = (char)param_3[1] == '\0';
      return (uint)param_2 & 0xffff0000;
    }
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),0xffe7);
  }
  return uVar1;
}


