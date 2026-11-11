
/* ==== FUN_1101bd70 @ 1101bd70 ==== 
 * signature: undefined4 __cdecl FUN_1101bd70(undefined4 * param_1, undefined2 * param_2, short * param_3)
 * body: 1101bd70-1101bda0
 */

undefined4 __cdecl FUN_1101bd70(undefined4 *param_1,undefined2 *param_2,short *param_3)

{
  undefined4 in_EAX;
  uint uVar1;
  
  if (*param_3 != 0xd) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),0xffec);
  }
  *param_2 = 0x15;
  uVar1 = FUN_11013c40(param_1,*(undefined4 *)(param_3 + 2),param_2 + 1);
  return uVar1 & 0xffff0000;
}


