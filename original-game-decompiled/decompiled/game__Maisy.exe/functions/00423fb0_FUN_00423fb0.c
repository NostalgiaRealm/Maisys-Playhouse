
/* ==== FUN_00423fb0 @ 00423fb0 ==== 
 * signature: undefined __thiscall FUN_00423fb0(void * this, int param_1)
 * body: 00423fb0-00424019
 */

void __thiscall FUN_00423fb0(void *this,int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  for (piVar2 = (int *)FUN_004246a0(param_1); piVar2 != (int *)0x0;
      piVar2 = *(int **)((int)piVar2 + 0x3e)) {
    cVar1 = FUN_0040af70();
    if ((cVar1 == '\0') || (piVar3 = FUN_0042c350(piVar2), piVar3 == (int *)0x0)) {
      uVar5 = *(undefined4 *)((int)this + 4);
      iVar4 = *piVar2;
    }
    else {
      if (DAT_004d95c8 == (int *)0x0) {
        DAT_004d95c8 = piVar2;
      }
      uVar5 = *(undefined4 *)((int)this + 4);
      iVar4 = *piVar3;
    }
    piVar3 = (int *)(**(code **)(iVar4 + 0xec))(uVar5);
    FUN_00424600(this,piVar3,'\x01');
  }
  return;
}


