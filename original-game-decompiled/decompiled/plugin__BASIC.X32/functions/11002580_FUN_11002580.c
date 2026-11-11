
/* ==== FUN_11002580 @ 11002580 ==== 
 * signature: undefined4 __cdecl FUN_11002580(undefined4 * param_1, undefined4 param_2)
 * body: 11002580-110025e1
 */

undefined4 __cdecl FUN_11002580(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  code **ppcVar2;
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
    local_34 = 0;
    local_38 = param_2;
    local_30[1] = (code *)0x455;
    local_12 = 8;
    local_16 = &local_38;
    (*local_30[2])(local_30);
    return local_34;
  }
  return 0;
}


