
/* ==== FUN_00410250 @ 00410250 ==== 
 * signature: undefined4 __thiscall FUN_00410250(void * this, short param_1)
 * body: 00410250-004102b5
 */

undefined4 __thiscall FUN_00410250(void *this,short param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  
  uVar2 = FUN_00410240((int)this);
  if ((short)uVar2 != 0) {
    iVar3 = FUN_00430190(*(int *)((int)this + 0x3a));
    iVar1 = *(int *)((int)this + 0x3a);
    sVar4 = 0;
    if (0 < *(short *)(iVar1 + 0x26)) {
      do {
        if (*(short *)(iVar3 + 4 + sVar4 * 6) == param_1) {
          uVar2 = *(undefined4 *)(iVar3 + sVar4 * 6);
          FUN_004301f0(iVar1);
          return uVar2;
        }
        sVar4 = sVar4 + 1;
      } while (sVar4 < *(short *)(iVar1 + 0x26));
    }
    FUN_004301f0(iVar1);
  }
  return 0;
}


