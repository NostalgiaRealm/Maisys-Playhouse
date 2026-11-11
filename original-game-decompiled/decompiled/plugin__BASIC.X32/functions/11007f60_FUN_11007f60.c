
/* ==== FUN_11007f60 @ 11007f60 ==== 
 * signature: undefined __cdecl FUN_11007f60(undefined4 * param_1, undefined4 param_2, char param_3)
 * body: 11007f60-11007fdc
 */

void __cdecl FUN_11007f60(undefined4 *param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 local_54 [5];
  undefined2 local_40;
  undefined4 local_3e;
  undefined2 local_30;
  undefined4 local_2e;
  
  uVar1 = FUN_1100fc40((int)param_1);
  FUN_11011900(local_54,0x4b0,8,uVar1,0);
  local_3e = 0xc9;
  local_40 = 5;
  if (param_3 == '\0') {
    local_30 = 0;
  }
  else {
    local_30 = 4;
    local_2e = uVar1;
  }
  FUN_11017cc0(param_1,local_54);
  FUN_1101db80(param_1,uVar1,4,0,0,0,0);
  return;
}


