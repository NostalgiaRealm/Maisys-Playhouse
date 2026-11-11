
/* ==== FUN_00475dc0 @ 00475dc0 ==== 
 * signature: uint __cdecl FUN_00475dc0(uint param_1)
 * body: 00475dc0-00475e84
 */

uint __cdecl FUN_00475dc0(uint param_1)

{
  short *psVar1;
  short sVar2;
  void *this;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  psVar1 = *(short **)(param_1 + 0x1a);
  piVar3 = *(int **)(*(int *)(param_1 + 0x16) + 4);
  psVar1[6] = 0;
  psVar1[7] = 0;
  if (piVar3 != (int *)0x0) {
    param_1 = (uint)*psVar1;
    switch(param_1) {
    case 0:
      iVar5 = FUN_0040c620(piVar3);
      param_1 = 0;
      if (iVar5 != 0) {
        iVar5 = FUN_0040c620(piVar3);
        uVar4 = FUN_004053e0(iVar5);
        *(uint *)(psVar1 + 6) = uVar4;
        return uVar4 & 0xffffff00;
      }
      break;
    case 1:
      uVar4 = FUN_0046ca10((int)piVar3);
      *(uint *)(psVar1 + 6) = uVar4;
      return uVar4 & 0xffffff00;
    case 2:
      iVar5 = *piVar3;
      sVar2 = (**(code **)(iVar5 + 0x274))();
      this = (void *)(**(code **)(iVar5 + 0x10))();
      piVar3 = FUN_0045a920(this,sVar2);
      *(int **)(psVar1 + 6) = piVar3;
      return (uint)piVar3 & 0xffffff00;
    case 3:
      iVar5 = (**(code **)(*piVar3 + 0x10))();
      uVar4 = FUN_00458a00(iVar5);
      *(uint *)(psVar1 + 6) = uVar4;
      return uVar4 & 0xffffff00;
    case 4:
      iVar5 = FUN_0040c620(piVar3);
      param_1 = 0;
      if (iVar5 != 0) {
        iVar5 = FUN_0040c620(piVar3);
        param_1 = FUN_004053f0(iVar5);
        *(uint *)(psVar1 + 6) = param_1;
      }
    }
  }
  return param_1 & 0xffffff00;
}


