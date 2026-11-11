
/* ==== switchD_11010c88::caseD_2 @ 11010c8f ==== 
 * signature: undefined __fastcall caseD_2(undefined4 param_1, undefined4 * param_2)
 * body: 11010c8f-11010ca4
 */

void __fastcall switchD_11010c88::caseD_2(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_stack_00000014;
  
  puVar2 = param_2;
  puVar3 = in_stack_00000014;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(ushort *)in_stack_00000014 =
       CONCAT11((char)*(undefined2 *)param_2,(char)((ushort)*(undefined2 *)param_2 >> 8));
  return;
}


