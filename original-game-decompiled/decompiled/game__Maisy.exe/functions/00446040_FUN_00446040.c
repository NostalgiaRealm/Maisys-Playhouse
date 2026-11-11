
/* ==== FUN_00446040 @ 00446040 ==== 
 * signature: undefined __thiscall FUN_00446040(void * this, byte param_1, char param_2)
 * body: 00446040-004460ae
 */

void __thiscall FUN_00446040(void *this,byte param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 == 0) && ((*(byte *)((int)this + 0x9c) & 2) != 0)) {
    iVar1 = FUN_0040c620(this);
    piVar2 = (int *)FUN_00409590(iVar1);
    (**(code **)(*piVar2 + 300))();
  }
  FUN_00462bf0(this,param_1,param_2);
  if ((*(byte *)((int)this + 0x9c) & 2) != 0) {
    iVar1 = FUN_0040c620(this);
    if ((iVar1 != 0) && ((*(byte *)((int)this + 0x154) & 1) != 0)) {
      piVar2 = (int *)FUN_0040c620(this);
      (**(code **)(*piVar2 + 0x78))(8,this,1);
    }
  }
  return;
}


