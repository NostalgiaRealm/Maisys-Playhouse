
/* ==== FUN_004785d0 @ 004785d0 ==== 
 * signature: undefined __thiscall FUN_004785d0(void * this, undefined2 param_1)
 * body: 004785d0-0047865a
 */

void __thiscall FUN_004785d0(void *this,undefined2 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_24 [16];
  int *local_14;
  int *local_10;
  int local_8;
  
  iVar2 = 1;
  local_8 = *(int *)(*(int *)((int)this + 0x54) + 0x26);
  if (0 < local_8) {
    do {
      FUN_00430370(*(void **)((int)this + 0x54),iVar2,local_24);
      if ((local_10 != (int *)0x0) &&
         (cVar1 = (**(code **)(*local_10 + 0xe4))(param_1), cVar1 != '\0')) {
        (**(code **)(*local_10 + 0xf0))();
      }
      if ((local_14 != (int *)0x0) &&
         (cVar1 = (**(code **)(*local_14 + 0xe4))(param_1), cVar1 != '\0')) {
        (**(code **)(*local_14 + 0xf0))();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= local_8);
  }
  return;
}


