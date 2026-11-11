
/* ==== FUN_00479b50 @ 00479b50 ==== 
 * signature: undefined1 __thiscall FUN_00479b50(void * this, undefined4 param_1)
 * body: 00479b50-00479b84
 */

undefined1 __thiscall FUN_00479b50(void *this,undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 local_18 [20];
  
  uVar2 = 0;
  if (*(int **)((int)this + 0x32) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)((int)this + 0x32) + 0x124))(0,param_1,local_18,1,0);
    if (cVar1 != '\0') {
      uVar2 = 1;
    }
  }
  return uVar2;
}


