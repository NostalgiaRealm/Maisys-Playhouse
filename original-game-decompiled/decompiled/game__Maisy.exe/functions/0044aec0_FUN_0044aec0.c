
/* ==== FUN_0044aec0 @ 0044aec0 ==== 
 * signature: undefined __cdecl FUN_0044aec0(undefined4 * param_1, undefined2 * param_2)
 * body: 0044aec0-0044af16
 */

void __cdecl FUN_0044aec0(undefined4 *param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_2 = CONCAT11((char)uVar1,(char)((uint)uVar1 >> 8));
  param_2[2] = CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8));
  param_2[1] = CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18));
  param_2[3] = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
  return;
}


