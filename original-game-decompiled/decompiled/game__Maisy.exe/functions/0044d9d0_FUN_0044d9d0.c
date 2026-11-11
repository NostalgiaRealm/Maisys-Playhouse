
/* ==== FUN_0044d9d0 @ 0044d9d0 ==== 
 * signature: undefined __thiscall FUN_0044d9d0(void * this, int param_1, byte param_2, char param_3)
 * body: 0044d9d0-0044da4d
 */

void __thiscall FUN_0044d9d0(void *this,int param_1,byte param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 local_20 [3];
  LPVOID local_14;
  undefined4 local_10;
  byte local_8;
  
  uVar1 = FUN_00430370(*(void **)((int)this + 0x30),param_1,local_20);
  if ((char)uVar1 != '\0') {
    if ((param_2 != 0) && (param_3 != '\0')) {
      FUN_0043ba20(local_14);
      local_20[0] = 0;
      local_10 = 0x68;
      local_14 = *(LPVOID *)((int)this + 0x42);
      *(int *)((int)this + 0x42) = param_1;
    }
    local_8 = local_8 ^ (param_2 ^ local_8) & 1;
    FUN_0042ff10(*(void **)((int)this + 0x30),param_1,local_20);
  }
  (**(code **)(*(int *)this + 0x1c))(1);
  return;
}


