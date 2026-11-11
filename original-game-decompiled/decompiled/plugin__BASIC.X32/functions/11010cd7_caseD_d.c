
/* ==== switchD_11010c88::caseD_d @ 11010cd7 ==== 
 * signature: undefined __fastcall caseD_d(undefined4 param_1, undefined2 * param_2)
 * body: 11010cd7-11010cf4
 */

void __fastcall switchD_11010c88::caseD_d(undefined4 param_1,undefined2 *param_2)

{
  undefined2 *in_stack_00000014;
  
  in_stack_00000014[1] = CONCAT11((char)param_2[1],(char)((ushort)param_2[1] >> 8));
  *(undefined4 *)(in_stack_00000014 + 2) = *(undefined4 *)(param_2 + 2);
  *in_stack_00000014 = CONCAT11((char)*param_2,(char)((ushort)*param_2 >> 8));
  return;
}


