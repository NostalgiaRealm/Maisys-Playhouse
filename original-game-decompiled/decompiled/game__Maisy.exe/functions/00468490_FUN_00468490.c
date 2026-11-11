
/* ==== FUN_00468490 @ 00468490 ==== 
 * signature: undefined __thiscall FUN_00468490(void * this, undefined4 param_1)
 * body: 00468490-004684fc
 */

void __thiscall FUN_00468490(void *this,undefined4 param_1)

{
  undefined4 local_58 [21];
  
  if (*(int *)((int)this + 0x3a) != 0) {
    FUN_004142c0(local_58,0x5dc,0,*(undefined4 *)((int)this + 0x3e),0);
    FUN_0046b770(*(void **)((int)this + 0x3e),(int)local_58);
    FUN_004142c0(local_58,0x5dc,param_1,*(undefined4 *)((int)this + 0x3e),0);
    FUN_0046b770(*(void **)((int)this + 0x3e),(int)local_58);
    *(undefined4 *)((int)this + 0x50) = param_1;
    (**(code **)(**(int **)((int)this + 0x3a) + 0x1dc))(param_1);
  }
  return;
}


