
/* ==== FUN_00448710 @ 00448710 ==== 
 * signature: undefined __thiscall FUN_00448710(void * this, short param_1)
 * body: 00448710-00448798
 */

void __thiscall FUN_00448710(void *this,short param_1)

{
  short sVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  short sVar5;
  
  if (*(char *)((int)this + 0x3b) == '\0') {
    *(undefined1 *)((int)this + 0x3b) = 1;
    pvVar3 = (void *)FUN_00466a70(*(int *)((int)this + 4));
    FUN_0044d6d0(pvVar3);
    sVar5 = 0;
    iVar4 = FUN_00430190(*(int *)((int)this + 0x2a));
    sVar1 = *(short *)(*(int *)((int)this + 0x2a) + 0x26);
    if (0 < sVar1) {
      do {
        piVar2 = *(int **)(iVar4 + sVar5 * 0xc);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x80))(0x7fffffff,(int)param_1);
        }
        sVar5 = sVar5 + 1;
      } while (sVar5 < sVar1);
    }
    FUN_004301f0(*(int *)((int)this + 0x2a));
    FUN_004487a0((int)this);
    FUN_0047dc10();
    *(undefined1 *)((int)this + 0x3b) = 0;
  }
  return;
}


