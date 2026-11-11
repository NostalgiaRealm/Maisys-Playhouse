
/* ==== FUN_11020e00 @ 11020e00 ==== 
 * signature: uint __cdecl FUN_11020e00(undefined4 * param_1, short * param_2)
 * body: 11020e00-11020e4b
 */

uint __cdecl FUN_11020e00(undefined4 *param_1,short *param_2)

{
  short sVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  
  if (*param_2 == 0x1fd) {
    uVar2 = FUN_11020d90(param_1,param_2,FUN_11020e50);
    sVar1 = (short)uVar2;
    if (sVar1 == 0) {
      uVar2 = FUN_11002730(param_1,*(undefined4 *)(param_2 + 8));
      param_2[8] = 0;
      param_2[9] = 0;
    }
    return CONCAT22((short)((uint)uVar2 >> 0x10),sVar1);
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),0xffff);
}


