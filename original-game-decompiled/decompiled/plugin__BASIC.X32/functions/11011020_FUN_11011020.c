
/* ==== FUN_11011020 @ 11011020 ==== 
 * signature: undefined __cdecl FUN_11011020(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 11011020-1101107d
 */

void __cdecl
FUN_11011020(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code **ppcVar2;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30 [6];
  undefined1 *local_16;
  undefined4 local_12;
  
  if (param_1[2] != 0) {
    ppcVar2 = local_30;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar2 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar2 = ppcVar2 + 1;
    }
    *(undefined2 *)ppcVar2 = *(undefined2 *)param_1;
    local_3c = param_2;
    local_16 = local_40;
    local_38 = param_3;
    local_34 = param_4;
    local_30[1] = (code *)0x1c8;
    local_12 = 0x10;
    (*local_30[2])(local_30);
  }
  return;
}


