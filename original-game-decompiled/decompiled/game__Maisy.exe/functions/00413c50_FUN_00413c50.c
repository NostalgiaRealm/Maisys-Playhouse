
/* ==== FUN_00413c50 @ 00413c50 ==== 
 * signature: undefined __thiscall FUN_00413c50(void * this, short param_1)
 * body: 00413c50-00413ccc
 */

void __thiscall FUN_00413c50(void *this,short param_1)

{
  int iVar1;
  int iVar2;
  int *local_c;
  undefined2 local_6;
  
  iVar2 = 1;
  iVar1 = FUN_00414260((int)this);
  if (0 < iVar1) {
    do {
      FUN_00430370(*(void **)((int)this + 4),iVar2,&local_c);
      if (*(short *)*local_c == param_1) {
        local_6 = 0xffff;
        FUN_0042ff10(*(void **)((int)this + 8),iVar2,&local_6);
        *(undefined2 *)*local_c = 0xffff;
        *(undefined4 *)(*local_c + 10) = 0xffffffff;
        *(undefined4 *)((int)this + 0x14) = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= iVar1);
  }
  FUN_004140a0((int)this);
  return;
}


