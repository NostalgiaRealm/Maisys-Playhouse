
/* ==== FUN_11004840 @ 11004840 ==== 
 * signature: undefined __cdecl FUN_11004840(undefined4 * param_1, undefined2 param_2, undefined1 param_3)
 * body: 11004840-11004897
 */

void __cdecl FUN_11004840(undefined4 *param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  code **ppcVar2;
  undefined2 local_38;
  undefined1 local_36;
  code *local_30 [6];
  undefined2 *local_16;
  undefined4 local_12;
  
  if (param_1[2] != 0) {
    ppcVar2 = local_30;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar2 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar2 = ppcVar2 + 1;
    }
    *(undefined2 *)ppcVar2 = *(undefined2 *)param_1;
    local_38 = param_2;
    local_16 = &local_38;
    local_36 = param_3;
    local_30[1] = (code *)0x1ba;
    local_12 = 8;
    (*local_30[2])(local_30);
  }
  return;
}


