
/* ==== FUN_00423380 @ 00423380 ==== 
 * signature: char __thiscall FUN_00423380(void * this, undefined * param_1, undefined4 param_2)
 * body: 00423380-004233c7
 */

char __thiscall FUN_00423380(void *this,undefined *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = '\0';
  iVar3 = 1;
  FUN_00430190((int)this);
  if (0 < *(int *)((int)this + 0x26)) {
    do {
      iVar2 = FUN_004301c0(this,iVar3);
      cVar1 = (*(code *)param_1)(iVar2,param_2);
      if (cVar1 != '\0') break;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)((int)this + 0x26));
  }
  FUN_004301f0((int)this);
  return cVar1;
}


