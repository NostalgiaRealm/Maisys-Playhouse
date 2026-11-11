
/* ==== FUN_5f002da0 @ 5f002da0 ==== 
 * signature: undefined4 __cdecl FUN_5f002da0(undefined4 param_1, uint param_2, ushort param_3)
 * body: 5f002da0-5f002dee
 */

undefined4 __cdecl FUN_5f002da0(undefined4 param_1,uint param_2,ushort param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x1f;
  if ((uVar1 != 3) &&
     ((((param_3 & 0x10) != 0 && ((uVar1 < 3 || (uVar1 == 0xc)))) ||
      (((param_3 & 0x20) != 0 &&
       (((3 < uVar1 && (uVar1 < 10)) ||
        ((DAT_5f005150 < 0x35f && ((0xf < uVar1 && (uVar1 < 0x13)))))))))))) {
    return 1;
  }
  return 0;
}


