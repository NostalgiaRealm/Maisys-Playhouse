
/* ==== FUN_11011580 @ 11011580 ==== 
 * signature: undefined __cdecl FUN_11011580(undefined4 * param_1)
 * body: 11011580-110115b5
 */

void __cdecl FUN_11011580(undefined4 *param_1)

{
  int iVar1;
  code **ppcVar2;
  code *local_30 [12];
  
  if (param_1[2] != 0) {
    ppcVar2 = local_30;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar2 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar2 = ppcVar2 + 1;
    }
    *(undefined2 *)ppcVar2 = *(undefined2 *)param_1;
    local_30[1] = (code *)0x1cc;
    (*local_30[2])(local_30);
  }
  return;
}


