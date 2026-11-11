
/* ==== FUN_11011530 @ 11011530 ==== 
 * signature: undefined1 __cdecl FUN_11011530(undefined4 * param_1)
 * body: 11011530-1101157e
 */

undefined1 __cdecl FUN_11011530(undefined4 *param_1)

{
  int iVar1;
  code **ppcVar2;
  undefined1 local_31;
  code *local_30 [6];
  undefined1 *local_16;
  undefined4 local_12;
  
  local_31 = 1;
  if (param_1[2] != 0) {
    ppcVar2 = local_30;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar2 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar2 = ppcVar2 + 1;
    }
    *(undefined2 *)ppcVar2 = *(undefined2 *)param_1;
    local_16 = &local_31;
    local_30[1] = (code *)0x325;
    local_12 = 1;
    (*local_30[2])(local_30);
  }
  return local_31;
}


