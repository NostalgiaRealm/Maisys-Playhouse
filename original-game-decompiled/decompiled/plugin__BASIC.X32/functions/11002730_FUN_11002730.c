
/* ==== FUN_11002730 @ 11002730 ==== 
 * signature: undefined __cdecl FUN_11002730(undefined4 * param_1, undefined4 param_2)
 * body: 11002730-1100277d
 */

void __cdecl FUN_11002730(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  code **ppcVar2;
  code *local_44 [6];
  undefined1 *local_2a;
  undefined4 local_26;
  undefined1 local_14 [8];
  undefined4 local_c;
  
  if (param_1[2] != 0) {
    ppcVar2 = local_44;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar2 = (code *)*param_1;
      param_1 = param_1 + 1;
      ppcVar2 = ppcVar2 + 1;
    }
    *(undefined2 *)ppcVar2 = *(undefined2 *)param_1;
    local_2a = local_14;
    local_c = param_2;
    local_44[1] = (code *)0x44e;
    local_26 = 0x14;
    (*local_44[2])(local_44);
  }
  return;
}


