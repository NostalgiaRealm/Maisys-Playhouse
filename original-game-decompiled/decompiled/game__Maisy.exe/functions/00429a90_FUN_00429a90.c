
/* ==== FUN_00429a90 @ 00429a90 ==== 
 * signature: undefined __thiscall FUN_00429a90(void * this, int param_1)
 * body: 00429a90-00429af4
 */

void __thiscall FUN_00429a90(void *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int local_8;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x21) & 0x20) != 0)) {
    pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0x22,&local_8);
    iVar2 = FUN_0048b500(0,*(int *)(param_1 + 0x50),0x22);
    DAT_004e34cc = (*pcVar1)(local_8,iVar2);
    if (*(int **)((int)this + 0x3a) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x3a) + 0x2c8))();
    }
  }
  return;
}


