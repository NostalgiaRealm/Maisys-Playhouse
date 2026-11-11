
/* ==== switchD_11010c88::caseD_1a @ 11010da9 ==== 
 * signature: undefined __fastcall caseD_1a(undefined4 param_1, undefined2 * param_2)
 * body: 11010da9-11010db7
 */

void __fastcall switchD_11010c88::caseD_1a(undefined4 param_1,undefined2 *param_2)

{
  undefined2 *in_stack_00000014;
  
  *(undefined1 *)(in_stack_00000014 + 1) = *(undefined1 *)(param_2 + 1);
  *in_stack_00000014 = CONCAT11((char)*param_2,(char)((ushort)*param_2 >> 8));
  return;
}


