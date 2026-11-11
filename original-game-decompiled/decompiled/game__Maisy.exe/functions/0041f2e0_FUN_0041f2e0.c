
/* ==== FUN_0041f2e0 @ 0041f2e0 ==== 
 * signature: undefined4 __thiscall FUN_0041f2e0(void * this, undefined4 param_1, int param_2, int param_3)
 * body: 0041f2e0-0041f351
 */

undefined4 __thiscall FUN_0041f2e0(void *this,undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  undefined2 extraout_var;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_22;
  int local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  
  sVar1 = FUN_0041f380(this,param_2);
  uVar2 = CONCAT22(extraout_var,sVar1);
  if (((sVar1 != -1) && (param_3 != 0)) && (sVar1 < *(short *)((int)this + 0x32))) {
    local_30 = 8;
    local_1a = 0;
    local_16 = 0;
    local_2c = *(undefined4 *)((int)this + 0x2a);
    iVar3 = sVar1 * 0x18 + *(int *)((int)this + 0x26);
    local_22 = *(undefined4 *)(iVar3 + 0x10);
    local_1e = param_3;
    local_12 = DAT_004da398;
    uVar2 = (**(code **)(iVar3 + 0xc))(local_34);
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


