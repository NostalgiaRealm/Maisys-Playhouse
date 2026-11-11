
/* ==== FUN_11021470 @ 11021470 ==== 
 * signature: undefined4 __cdecl FUN_11021470(undefined4 * param_1, int param_2, uint param_3)
 * body: 11021470-110214ec
 */

undefined4 __cdecl FUN_11021470(undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    uVar1 = FUN_110026d0(param_1,param_3);
    puVar2 = (undefined4 *)FUN_11002840(param_1,uVar1);
    puVar3 = (undefined4 *)FUN_11002840(param_1,param_2);
    for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    FUN_110028a0(param_1,uVar1);
    FUN_110028a0(param_1,param_2);
    return uVar1;
  }
  return 0;
}


