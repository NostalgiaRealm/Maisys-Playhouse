
/* ==== FUN_110024d0 @ 110024d0 ==== 
 * signature: undefined4 __cdecl FUN_110024d0(undefined4 * param_1, undefined4 param_2)
 * body: 110024d0-11002521
 */

undefined4 __cdecl FUN_110024d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  code **ppcVar2;
  code *local_30 [6];
  undefined4 local_16;
  undefined4 local_12;
  
  if (param_1[2] != 0) {
    ppcVar2 = local_30;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar2 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar2 = ppcVar2 + 1;
    }
    *(undefined2 *)ppcVar2 = *(undefined2 *)param_1;
    local_16 = param_2;
    local_30[1] = (code *)0x453;
    local_12 = 4;
    (*local_30[2])(local_30);
    return local_16;
  }
  return 0;
}


