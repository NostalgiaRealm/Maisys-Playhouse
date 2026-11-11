
/* ==== switchD_11010c88::caseD_1 @ 11010ca5 ==== 
 * signature: undefined __fastcall caseD_1(undefined4 param_1, undefined2 * param_2)
 * body: 11010ca5-11010cd6
 */

void __fastcall switchD_11010c88::caseD_1(undefined4 param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined2 *in_stack_00000014;
  
  uVar1 = *(uint *)(param_2 + 1);
  *(uint *)(in_stack_00000014 + 1) =
       (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
  *in_stack_00000014 = CONCAT11((char)*param_2,(char)((ushort)*param_2 >> 8));
  return;
}


