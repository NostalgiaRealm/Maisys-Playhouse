
/* ==== FUN_00453ed0 @ 00453ed0 ==== 
 * signature: undefined4 __cdecl FUN_00453ed0(int * param_1, undefined4 param_2)
 * body: 00453ed0-00453f00
 */

undefined4 __cdecl FUN_00453ed0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 local_30 [22];
  
  uVar1 = 0x10000;
  local_30[0] = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x98))(s_value_004d9864,local_30,param_2);
  }
  return uVar1;
}


