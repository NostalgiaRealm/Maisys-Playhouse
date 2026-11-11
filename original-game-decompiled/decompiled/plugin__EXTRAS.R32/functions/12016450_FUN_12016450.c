
/* ==== FUN_12016450 @ 12016450 ==== 
 * signature: undefined __thiscall FUN_12016450(void * this, short param_1, ushort param_2, undefined4 param_3)
 * body: 12016450-1201649e
 */

void __thiscall FUN_12016450(void *this,short param_1,ushort param_2,undefined4 param_3)

{
  byte *pbVar1;
  char local_2;
  byte local_1;
  
  pbVar1 = (byte *)(param_1 + 4 + (int)this);
  if (*pbVar1 != param_2) {
    local_2 = (char)param_1 + -0x40;
    local_1 = (byte)param_2;
    *pbVar1 = local_1;
    if (*(int **)this != (int *)0x0) {
      (**(code **)(**(int **)this + 4))(&local_2,2,param_3);
    }
  }
  return;
}


