
/* ==== FUN_1100fa80 @ 1100fa80 ==== 
 * signature: undefined4 __cdecl FUN_1100fa80(undefined4 * param_1, undefined4 param_2)
 * body: 1100fa80-1100faeb
 */

undefined4 __cdecl FUN_1100fa80(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  code **ppcVar2;
  code *local_d0 [6];
  undefined4 *local_b6;
  undefined4 local_b2;
  undefined4 local_a0 [38];
  undefined4 local_8;
  
  if (param_1[2] != 0) {
    ppcVar2 = local_d0;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar2 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar2 = ppcVar2 + 1;
    }
    *(undefined2 *)ppcVar2 = *(undefined2 *)param_1;
    local_b6 = local_a0;
    local_8 = param_2;
    local_d0[1] = (code *)0x1c7;
    local_b2 = 0xa0;
    (*local_d0[2])(local_d0);
    return local_a0[0];
  }
  return 0;
}


