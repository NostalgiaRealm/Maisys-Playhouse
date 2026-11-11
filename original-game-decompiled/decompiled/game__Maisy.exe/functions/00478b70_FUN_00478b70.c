
/* ==== FUN_00478b70 @ 00478b70 ==== 
 * signature: undefined __thiscall FUN_00478b70(void * this, int * param_1)
 * body: 00478b70-00478bec
 */

void __thiscall FUN_00478b70(void *this,int *param_1)

{
  undefined1 local_20 [20];
  int *local_c;
  
  if (*(int *)(*(int *)((int)this + 0x54) + 0x26) == 0) {
    (**(code **)(*(int *)this + 0x15c))();
  }
  if (*(int *)((int)*(void **)((int)this + 0x54) + 0x26) != 0) {
    FUN_00430370(*(void **)((int)this + 0x54),1,local_20);
    if (((param_1 != (int *)0x0) && (local_c != (int *)0x0)) && (local_c != param_1)) {
      (**(code **)(*local_c + 0x150))();
      (**(code **)(*local_c + 4))();
    }
    local_c = param_1;
    FUN_0042ff10(*(void **)((int)this + 0x54),1,local_20);
  }
  FUN_0047d9c0();
  return;
}


