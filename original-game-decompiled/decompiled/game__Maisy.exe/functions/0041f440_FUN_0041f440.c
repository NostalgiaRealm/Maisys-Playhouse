
/* ==== FUN_0041f440 @ 0041f440 ==== 
 * signature: undefined4 __thiscall FUN_0041f440(void * this, short param_1)
 * body: 0041f440-0041f4af
 */

undefined4 __thiscall FUN_0041f440(void *this,short param_1)

{
  int iVar1;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 *local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_8;
  
  local_8 = 0;
  if ((param_1 != -1) && (param_1 < *(short *)((int)this + 0x32))) {
    local_34 = 0x12;
    local_30 = 0;
    local_1a = 4;
    local_1e = &local_8;
    iVar1 = param_1 * 0x18 + *(int *)((int)this + 0x26);
    local_26 = *(undefined4 *)(iVar1 + 0x10);
    local_22 = 0;
    local_16 = DAT_004da398;
    (**(code **)(iVar1 + 0xc))(local_38);
  }
  return local_8;
}


