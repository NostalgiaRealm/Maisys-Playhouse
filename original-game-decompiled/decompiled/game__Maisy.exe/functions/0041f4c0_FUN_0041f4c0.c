
/* ==== FUN_0041f4c0 @ 0041f4c0 ==== 
 * signature: undefined4 __thiscall FUN_0041f4c0(void * this, undefined4 param_1, short param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * body: 0041f4c0-0041f51d
 */

undefined4 __thiscall
FUN_0041f4c0(void *this,undefined4 param_1,short param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  int iVar2;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  if ((param_2 != -1) && (param_2 < *(short *)((int)this + 0x32))) {
    local_30 = param_4;
    iVar2 = param_2 * 0x18 + *(int *)((int)this + 0x26);
    local_2c = *(undefined4 *)((int)this + 0x2a);
    local_1a = param_5;
    local_16 = param_6;
    local_22 = *(undefined4 *)(iVar2 + 0x10);
    local_1e = param_3;
    local_12 = DAT_004da398;
    uVar1 = (**(code **)(iVar2 + 0xc))(local_34);
  }
  return uVar1;
}


