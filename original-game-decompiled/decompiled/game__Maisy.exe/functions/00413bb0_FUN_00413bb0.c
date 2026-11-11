
/* ==== FUN_00413bb0 @ 00413bb0 ==== 
 * signature: undefined __thiscall FUN_00413bb0(void * this, undefined2 * param_1)
 * body: 00413bb0-00413c24
 */

void __thiscall FUN_00413bb0(void *this,undefined2 *param_1)

{
  int iVar1;
  int *local_10;
  int local_c;
  undefined2 local_6;
  
  local_c = FUN_00414260((int)this);
  if (param_1 != (undefined2 *)0x0) {
    iVar1 = 1;
    if (0 < local_c) {
      do {
        FUN_00430370(*(void **)((int)this + 4),iVar1,&local_10);
        if ((undefined2 *)*local_10 == param_1) {
          local_6 = 0xffff;
          FUN_0042ff10(*(void **)((int)this + 8),iVar1,&local_6);
          *(undefined4 *)(param_1 + 5) = 0xffffffff;
          *param_1 = 0xffff;
          *(undefined4 *)((int)this + 0x14) = 1;
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 <= local_c);
    }
    FUN_004140a0((int)this);
  }
  return;
}


