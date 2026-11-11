
/* ==== FUN_004632e0 @ 004632e0 ==== 
 * signature: undefined4 __cdecl FUN_004632e0(undefined4 param_1, short * param_2, undefined4 param_3, short * param_4)
 * body: 004632e0-0046332c
 */

undefined4 __cdecl FUN_004632e0(undefined4 param_1,short *param_2,undefined4 param_3,short *param_4)

{
  undefined3 uVar1;
  
  uVar1 = (undefined3)((uint)param_2 >> 8);
  if ((((param_2 != (short *)0x0) && (*param_2 == 1)) && (param_4 != (short *)0x0)) &&
     (*param_4 == 1)) {
    return CONCAT31(uVar1,1);
  }
  if ((((param_2 != (short *)0x0) && (*param_2 == 2)) &&
      (((char)param_2[1] != '\0' && ((param_4 != (short *)0x0 && (*param_4 == 2)))))) &&
     ((char)param_4[1] != '\0')) {
    return CONCAT31(uVar1,1);
  }
  return CONCAT31(uVar1,1);
}


