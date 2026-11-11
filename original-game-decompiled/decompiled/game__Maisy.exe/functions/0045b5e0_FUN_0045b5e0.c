
/* ==== FUN_0045b5e0 @ 0045b5e0 ==== 
 * signature: int * __thiscall FUN_0045b5e0(void * this, int param_1)
 * body: 0045b5e0-0045b626
 */

int * __thiscall FUN_0045b5e0(void *this,int param_1)

{
  short sVar1;
  int *piVar2;
  short sVar3;
  
  sVar1 = *(short *)(*(int *)((int)this + 0x7e) + 0xc);
  sVar3 = 0;
  if (0 < sVar1) {
    do {
      piVar2 = FUN_0045a920(this,sVar3);
      if (piVar2 != (int *)0x0) {
        if (piVar2[3] == param_1) {
          return piVar2;
        }
        if (param_1 == -1) {
          return piVar2;
        }
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 < sVar1);
  }
  return (int *)0x0;
}


