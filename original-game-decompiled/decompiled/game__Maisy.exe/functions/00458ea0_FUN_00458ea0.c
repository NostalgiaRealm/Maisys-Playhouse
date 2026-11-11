
/* ==== FUN_00458ea0 @ 00458ea0 ==== 
 * signature: undefined __thiscall FUN_00458ea0(void * this, short param_1, int param_2, int param_3)
 * body: 00458ea0-00458f19
 */

void __thiscall FUN_00458ea0(void *this,short param_1,int param_2,int param_3)

{
  int iVar1;
  short sVar2;
  char *local_c;
  char *local_8;
  
  if ((*(int *)((int)this + 0xbe) != 0) && (*(int *)(*(int *)((int)this + 0xbe) + 0x26) != 0)) {
    FUN_00458f20((int)this);
  }
  sVar2 = 0;
  if (0 < param_1) {
    do {
      iVar1 = (int)sVar2;
      sVar2 = sVar2 + 1;
      local_c = FUN_0043b970(*(char **)(param_2 + iVar1 * 4));
      local_8 = FUN_0043b970(*(char **)(iVar1 * 4 + param_3));
      (**(code **)(**(int **)((int)this + 0xbe) + 0xe8))(&local_c);
    } while (sVar2 < param_1);
  }
  return;
}


