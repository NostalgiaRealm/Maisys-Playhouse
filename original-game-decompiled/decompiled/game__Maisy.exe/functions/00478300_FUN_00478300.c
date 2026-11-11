
/* ==== FUN_00478300 @ 00478300 ==== 
 * signature: uint __cdecl FUN_00478300(int param_1)
 * body: 00478300-00478347
 */

uint __cdecl FUN_00478300(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  HDC pHVar8;
  
  uVar3 = *(uint *)(param_1 + 0x16);
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  if (*(int **)(uVar3 + 4) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(uVar3 + 4) + 0x10))();
    uVar3 = 0;
    if (iVar2 != 0) {
      pHVar8 = (HDC)puVar1[4];
      iVar7 = puVar1[3];
      iVar6 = puVar1[2];
      psVar5 = (short *)puVar1[1];
      psVar4 = (short *)*puVar1;
      this = (void *)FUN_004084c0(*(int *)(iVar2 + 0x82));
      uVar3 = FUN_0047b210(this,psVar4,psVar5,iVar6,iVar7,pHVar8);
    }
  }
  return uVar3 & 0xffffff00;
}


