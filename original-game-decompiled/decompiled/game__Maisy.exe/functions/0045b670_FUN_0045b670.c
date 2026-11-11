
/* ==== FUN_0045b670 @ 0045b670 ==== 
 * signature: int __thiscall FUN_0045b670(void * this, int param_1, int param_2)
 * body: 0045b670-0045b6fe
 */

int __thiscall FUN_0045b670(void *this,int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  
  piVar2 = FUN_0045b5e0(this,param_1);
  if (piVar2 == (int *)0x0) {
    sVar4 = 0;
    sVar1 = *(short *)(*(int *)((int)this + 0x7e) + 0xc);
    if (0 < sVar1) {
      do {
        piVar2 = FUN_0045a920(this,sVar4);
        if (piVar2 != (int *)0x0) {
          for (iVar3 = FUN_00469fb0(piVar2); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x6a)) {
            if (*(int *)(iVar3 + 0xc) == param_2) {
              return iVar3;
            }
          }
        }
        sVar4 = sVar4 + 1;
      } while (sVar4 < sVar1);
      return 0;
    }
  }
  else {
    for (iVar3 = FUN_00469fb0(piVar2); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x6a)) {
      if (*(int *)(iVar3 + 0xc) == param_2) {
        return iVar3;
      }
      if (param_2 == -1) {
        return iVar3;
      }
    }
  }
  return 0;
}


