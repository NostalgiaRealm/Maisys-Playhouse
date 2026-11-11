
/* ==== FUN_1101c340 @ 1101c340 ==== 
 * signature: uint __cdecl FUN_1101c340(undefined4 * param_1, undefined2 * param_2, short * param_3, short * param_4)
 * body: 1101c340-1101c39a
 */

uint __cdecl FUN_1101c340(undefined4 *param_1,undefined2 *param_2,short *param_3,short *param_4)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = FUN_11019b70(param_3);
  if ((short)uVar2 == 0) {
    uVar2 = FUN_11019b70(param_4);
    if ((short)uVar2 == 0) {
      *param_2 = 0x15;
      sVar1 = FUN_11011210(param_1,param_3 + 1,param_4 + 1,param_2 + 1);
      uVar2 = (sVar1 == 0) - 1 & 0xffffffe6;
    }
  }
  return uVar2;
}


