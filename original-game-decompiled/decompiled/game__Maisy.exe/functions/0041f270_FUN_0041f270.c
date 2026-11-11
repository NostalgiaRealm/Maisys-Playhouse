
/* ==== FUN_0041f270 @ 0041f270 ==== 
 * signature: undefined4 __thiscall FUN_0041f270(void * this, undefined4 param_1, int param_2, undefined4 * param_3)
 * body: 0041f270-0041f2dc
 */

undefined4 __thiscall FUN_0041f270(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  short sVar1;
  undefined2 extraout_var;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  
  sVar1 = FUN_0041f380(this,param_2);
  puVar2 = (undefined4 *)CONCAT22(extraout_var,sVar1);
  if ((sVar1 != -1) && (sVar1 < *(short *)((int)this + 0x32))) {
    local_30 = 1;
    local_2c = *(undefined4 *)((int)this + 0x2a);
    iVar3 = sVar1 * 0x18 + *(int *)((int)this + 0x26);
    local_1a = 0;
    local_16 = 0;
    local_22 = *(undefined4 *)(iVar3 + 0x10);
    local_1e = 0;
    local_12 = DAT_004da398;
    (**(code **)(iVar3 + 0xc))(local_34);
    *param_3 = local_1e;
    puVar2 = param_3;
  }
  return CONCAT31((int3)((uint)puVar2 >> 8),1);
}


