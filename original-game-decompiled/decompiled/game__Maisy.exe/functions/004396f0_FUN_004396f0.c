
/* ==== FUN_004396f0 @ 004396f0 ==== 
 * signature: int * __thiscall FUN_004396f0(void * this, int param_1)
 * body: 004396f0-00439727
 */

int * __thiscall FUN_004396f0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = 0;
    piVar1 = this;
    do {
      if (*piVar1 == param_1) {
        return (int *)(iVar2 * 0x410 + (int)this);
      }
      piVar1 = piVar1 + 0x104;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
  }
  return (int *)0x0;
}


