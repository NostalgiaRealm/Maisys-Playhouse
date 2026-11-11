
/* ==== FUN_0042b590 @ 0042b590 ==== 
 * signature: undefined __thiscall FUN_0042b590(void * this, char param_1)
 * body: 0042b590-0042b5dc
 */

void __thiscall FUN_0042b590(void *this,char param_1)

{
  undefined4 local_58 [9];
  undefined2 local_34;
  
  (**(code **)(*(int *)this + 0x268))(0);
  if (param_1 != '\0') {
    *(undefined2 *)((int)this + 0x4c) = 0;
    *(undefined2 *)((int)this + 0x4e) = 0;
    FUN_004142c0(local_58,3,0,*(undefined4 *)((int)this + 0x3e),0);
    local_34 = 0;
    FUN_0046b770(*(void **)((int)this + 0x3e),(int)local_58);
  }
  return;
}


