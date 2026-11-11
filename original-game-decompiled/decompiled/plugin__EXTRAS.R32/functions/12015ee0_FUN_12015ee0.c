
/* ==== FUN_12015ee0 @ 12015ee0 ==== 
 * signature: int __cdecl FUN_12015ee0(int param_1)
 * body: 12015ee0-12015f2c
 */

int __cdecl FUN_12015ee0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar1 = FUN_12015f30(param_1);
  iVar2 = FUN_12015e60(uVar1);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_12015f80(param_1);
    puVar4 = (undefined4 *)FUN_12015f80(iVar2);
    for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return iVar2;
}


