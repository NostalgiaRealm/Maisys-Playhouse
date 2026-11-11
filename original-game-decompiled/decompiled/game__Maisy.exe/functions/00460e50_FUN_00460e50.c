
/* ==== FUN_00460e50 @ 00460e50 ==== 
 * signature: undefined __thiscall FUN_00460e50(void * this, undefined1 param_1)
 * body: 00460e50-00460e99
 */

void __thiscall FUN_00460e50(void *this,undefined1 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_c [8];
  
  if ((*(int *)((int)this + 0x3a) != 0) && (*(char *)((int)this + 0x146) != '\0')) {
    uVar2 = FUN_00460d70(this);
    if ((char)uVar2 == '\0') {
      iVar1 = *(int *)this;
      (**(code **)(iVar1 + 0x38c))(local_c,1);
      (**(code **)(iVar1 + 0x428))(local_c,param_1);
    }
  }
  return;
}


