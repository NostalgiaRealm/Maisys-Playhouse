
/* ==== FUN_00473510 @ 00473510 ==== 
 * signature: undefined __thiscall FUN_00473510(void * this, char param_1)
 * body: 00473510-0047354f
 */

void __thiscall FUN_00473510(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0xa2) = *(uint *)((int)this + 0xa2) | 0x40000000;
    (**(code **)(**(int **)((int)this + 0x5a) + 0x148))(1);
    return;
  }
  *(uint *)((int)this + 0xa2) = *(uint *)((int)this + 0xa2) & 0xbfffffff;
  (**(code **)(**(int **)((int)this + 0x5a) + 0x148))(0);
  return;
}


