
/* ==== FUN_11010bb0 @ 11010bb0 ==== 
 * signature: undefined __cdecl FUN_11010bb0(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, char param_5)
 * body: 11010bb0-11010c07
 */

void __cdecl
FUN_11010bb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char param_5)

{
  undefined4 uVar1;
  undefined4 local_54 [5];
  undefined2 local_40;
  int local_3e;
  
  uVar1 = FUN_1100fc40((int)param_1);
  FUN_11011900(local_54,param_3,param_4,uVar1,0);
  local_40 = 5;
  local_3e = (-(uint)(param_5 == '\0') & 7) + 0xc9;
  FUN_11017cc0(param_1,local_54);
  return;
}


