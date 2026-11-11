
/* ==== FUN_00478b00 @ 00478b00 ==== 
 * signature: undefined __thiscall FUN_00478b00(void * this, int * param_1)
 * body: 00478b00-00478b67
 */

void __thiscall FUN_00478b00(void *this,int *param_1)

{
  undefined1 local_20 [16];
  int *local_10;
  
  if (*(int *)((int)*(void **)((int)this + 0x54) + 0x26) != 0) {
    FUN_00430370(*(void **)((int)this + 0x54),1,local_20);
    if ((local_10 != (int *)0x0) && (local_10 != param_1)) {
      (**(code **)(*local_10 + 0x150))();
      (**(code **)(*local_10 + 4))();
    }
    local_10 = param_1;
    FUN_0042ff10(*(void **)((int)this + 0x54),1,local_20);
  }
  FUN_0047d9b0();
  return;
}


