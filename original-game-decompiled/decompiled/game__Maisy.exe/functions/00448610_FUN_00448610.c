
/* ==== FUN_00448610 @ 00448610 ==== 
 * signature: int __thiscall FUN_00448610(void * this, int param_1)
 * body: 00448610-0044869d
 */

int __thiscall FUN_00448610(void *this,int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  undefined4 uStack00000008;
  
  uStack00000008 = DAT_004db9a4;
  sVar5 = 0;
  iVar6 = 0;
  if (*(char *)((int)this + 0x3b) == '\0') {
    *(undefined1 *)((int)this + 0x3b) = 1;
    iVar3 = FUN_00430190(*(int *)((int)this + 0x2a));
    sVar1 = *(short *)(*(int *)((int)this + 0x2a) + 0x26);
    if (0 < sVar1) {
      do {
        piVar2 = *(int **)(iVar3 + sVar5 * 0xc);
        if (piVar2 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar2 + 0x80))(param_1 - iVar6,uStack00000008);
          iVar6 = iVar6 + iVar4;
        }
      } while ((iVar6 < param_1) && (sVar5 = sVar5 + 1, sVar5 < sVar1));
    }
    FUN_004301f0(*(int *)((int)this + 0x2a));
    *(undefined1 *)((int)this + 0x3b) = 0;
    return iVar6;
  }
  return 0;
}


