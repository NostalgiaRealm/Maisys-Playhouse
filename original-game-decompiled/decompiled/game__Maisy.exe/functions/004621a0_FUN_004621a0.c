
/* ==== FUN_004621a0 @ 004621a0 ==== 
 * signature: undefined2 __fastcall FUN_004621a0(int param_1)
 * body: 004621a0-004621b1
 */

undefined2 __fastcall FUN_004621a0(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0xec) + -1;
  return CONCAT11((char)((ushort)sVar1 >> 8),sVar1 == 0);
}


