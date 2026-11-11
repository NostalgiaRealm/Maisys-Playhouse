
/* ==== FUN_110048a0 @ 110048a0 ==== 
 * signature: undefined __cdecl FUN_110048a0(undefined4 * param_1, undefined2 param_2, undefined1 param_3, undefined4 param_4)
 * body: 110048a0-110048ff
 */

void __cdecl
FUN_110048a0(undefined4 *param_1,undefined2 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  code **ppcVar2;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
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
    local_34 = param_4;
    local_30[1] = (code *)0x1ba;
    local_12 = 8;
    (*local_30[2])(local_30);
  }
  return;
}


