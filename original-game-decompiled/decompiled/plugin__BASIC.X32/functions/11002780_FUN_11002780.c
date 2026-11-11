
/* ==== FUN_11002780 @ 11002780 ==== 
 * signature: undefined __cdecl FUN_11002780(undefined4 * param_1, undefined4 * param_2, undefined4 param_3)
 * body: 11002780-110027dd
 */

void __cdecl FUN_11002780(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  code **ppcVar2;
  undefined4 local_44 [2];
  undefined4 local_3c;
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
    local_30[1] = (code *)0x452;
    local_3c = *param_2;
    local_44[0] = param_3;
    local_16 = local_44;
    local_12 = 0x14;
    (*local_30[2])(local_30);
    *param_2 = local_3c;
  }
  return;
}


