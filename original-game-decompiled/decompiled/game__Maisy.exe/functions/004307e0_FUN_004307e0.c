
/* ==== FUN_004307e0 @ 004307e0 ==== 
 * signature: undefined __thiscall FUN_004307e0(void * this, int * param_1, char param_2)
 * body: 004307e0-0043085a
 */

void __thiscall FUN_004307e0(void *this,int *param_1,char param_2)

{
  short sVar1;
  LPVOID pvVar2;
  int *piVar3;
  
  if (*(short *)((int)this + 0xc) != 0) {
    do {
      sVar1 = FUN_00430860(this,(int)param_1);
      if (sVar1 == -1) break;
      pvVar2 = LocalLock(*(HLOCAL *)((int)this + 8));
      *(undefined4 *)((int)pvVar2 + sVar1 * 4) = 0;
      LocalUnlock(*(HLOCAL *)((int)this + 8));
      FUN_004309d0((int)this);
    } while (param_2 != '\0');
    for (piVar3 = (int *)(**(code **)(*param_1 + 0x184))(); piVar3 != (int *)0x0;
        piVar3 = (int *)(**(code **)(*piVar3 + 0x17c))()) {
      FUN_004307e0(this,piVar3,'\0');
    }
  }
  return;
}


