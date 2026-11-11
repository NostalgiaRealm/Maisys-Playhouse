
/* ==== FUN_11017f00 @ 11017f00 ==== 
 * signature: undefined __cdecl FUN_11017f00(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 11017f00-11017f65
 */

void __cdecl
FUN_11017f00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  code **ppcVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30 [6];
  undefined4 *local_16;
  undefined4 local_12;
  
  if (param_1[2] != 0) {
    ppcVar2 = local_30;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar2 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar2 = ppcVar2 + 1;
    }
    *(undefined2 *)ppcVar2 = *(undefined2 *)param_1;
    local_40 = param_2;
    local_3c = param_3;
    local_16 = &local_40;
    local_38 = param_4;
    local_34 = param_5;
    local_30[1] = (code *)0x193;
    local_12 = 0x10;
    (*local_30[2])(local_30);
  }
  return;
}


