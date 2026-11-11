
/* ==== FUN_1100fde0 @ 1100fde0 ==== 
 * signature: undefined4 __cdecl FUN_1100fde0(undefined4 * param_1, undefined4 param_2)
 * body: 1100fde0-1100fe42
 */

undefined4 __cdecl FUN_1100fde0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  code **ppcVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
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
    local_16 = &local_3c;
    local_3c = 0;
    local_38 = param_2;
    local_34 = 0;
    local_30[1] = (code *)0x1ce;
    local_12 = 10;
    (*local_30[2])(local_30);
    return local_3c;
  }
  return 0;
}


