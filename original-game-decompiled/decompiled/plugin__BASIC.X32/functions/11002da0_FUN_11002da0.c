
/* ==== FUN_11002da0 @ 11002da0 ==== 
 * signature: undefined __cdecl FUN_11002da0(undefined4 * param_1, int param_2, short * param_3)
 * body: 11002da0-11002eb4
 */

void __cdecl FUN_11002da0(undefined4 *param_1,int param_2,short *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  code **ppcVar5;
  short *local_438;
  undefined1 *local_434;
  code *local_430 [6];
  short **local_416;
  undefined4 local_412;
  undefined1 local_400 [1024];
  
  if (*param_3 != 0xd) {
    if (param_1[2] != 0) {
      puVar4 = param_1;
      ppcVar5 = local_430;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppcVar5 = (code *)*puVar4;
        puVar4 = puVar4 + 1;
        ppcVar5 = ppcVar5 + 1;
      }
      *(undefined2 *)ppcVar5 = *(undefined2 *)puVar4;
      local_434 = local_400;
      local_416 = &local_438;
      local_438 = param_3;
      local_400[0] = 0;
      local_430[1] = (code *)0x2c1;
      local_412 = 8;
      (*local_430[2])(local_430);
      if (*(int *)(param_2 + 0x10) != 0) {
        FUN_11002530(param_1,*(int *)(param_2 + 0x10));
      }
      uVar2 = FUN_110024d0(param_1,local_400);
      *(undefined4 *)(param_2 + 0x10) = uVar2;
    }
    return;
  }
  local_400[0] = 0;
  puVar1 = *(undefined1 **)(param_2 + 0x10);
  if (*(int *)(param_3 + 2) == 0) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    uVar2 = FUN_110024d0(param_1,local_400);
    *(undefined4 *)(param_2 + 0x10) = uVar2;
    return;
  }
  if (puVar1 != (undefined1 *)0x0) {
    FUN_11002530(param_1,puVar1);
  }
  uVar2 = FUN_110024d0(param_1,*(undefined4 *)(param_3 + 2));
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  return;
}


