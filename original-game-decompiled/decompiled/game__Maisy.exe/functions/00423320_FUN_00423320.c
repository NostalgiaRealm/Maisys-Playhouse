
/* ==== FUN_00423320 @ 00423320 ==== 
 * signature: undefined __thiscall FUN_00423320(void * this, undefined * param_1, undefined4 param_2, int param_3)
 * body: 00423320-0042337e
 */

void __thiscall FUN_00423320(void *this,undefined *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00430190((int)this);
  iVar3 = 1;
  iVar1 = FUN_004182f0(this,param_3);
  if (0 < *(int *)((int)this + 0x26)) {
    do {
      iVar2 = FUN_00418370(iVar3,iVar1);
      iVar3 = iVar3 + 1;
      iVar2 = FUN_004301c0(this,iVar2);
      (*(code *)param_1)(iVar2,param_2);
    } while (iVar3 <= *(int *)((int)this + 0x26));
  }
  FUN_00418330(this,param_3);
  FUN_004301f0((int)this);
  return;
}


