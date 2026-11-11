
/* ==== switchD_11010c88::caseD_10 @ 11010d27 ==== 
 * signature: undefined __fastcall caseD_10(undefined4 param_1, undefined2 * param_2)
 * body: 11010d27-11010d4d
 */

void __fastcall switchD_11010c88::caseD_10(undefined4 param_1,undefined2 *param_2)

{
  undefined2 *in_stack_00000014;
  
  in_stack_00000014[1] = CONCAT11((char)param_2[2],(char)((ushort)param_2[2] >> 8));
  in_stack_00000014[2] = CONCAT11((char)param_2[1],(char)((ushort)param_2[1] >> 8));
  *in_stack_00000014 = CONCAT11((char)*param_2,(char)((ushort)*param_2 >> 8));
  return;
}


