
/* ==== FUN_00436c80 @ 00436c80 ==== 
 * signature: int __thiscall FUN_00436c80(void * this, int * param_1)
 * body: 00436c80-00436cfe
 */

int __thiscall FUN_00436c80(void *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_10;
  
  local_10 = 0;
  if (0 < *(int *)((int)this + 0x7236)) {
    piVar4 = (int *)((int)this + 0x138);
    do {
      iVar3 = 0;
      if (0 < *piVar4) {
        iVar5 = 0;
        do {
          iVar1 = piVar4[1];
          bVar2 = FUN_00437430((int *)(iVar1 + iVar5 + 0x14),param_1);
          if (CONCAT31(extraout_var,bVar2) != 0) {
            return iVar1 + iVar5;
          }
          iVar5 = iVar5 + 0x80;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar4);
      }
      piVar4 = piVar4 + 0x49;
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)((int)this + 0x7236));
  }
  return 0;
}


