
/* ==== switchD_11010c88::caseD_1c @ 11010db8 ==== 
 * signature: undefined __fastcall caseD_1c(undefined4 param_1, undefined2 * param_2)
 * body: 11010db8-11010df6
 */

void __fastcall switchD_11010c88::caseD_1c(undefined4 param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined2 *in_stack_00000014;
  
  *(undefined4 *)(in_stack_00000014 + 1) = 0;
  uVar1 = *(uint *)(param_2 + 3);
  *(uint *)(in_stack_00000014 + 3) =
       (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
  *(undefined4 *)(in_stack_00000014 + 5) = *(undefined4 *)(param_2 + 5);
  *in_stack_00000014 = CONCAT11((char)*param_2,(char)((ushort)*param_2 >> 8));
  return;
}


