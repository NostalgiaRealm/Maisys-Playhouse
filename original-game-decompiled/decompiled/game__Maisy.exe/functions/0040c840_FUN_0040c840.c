
/* ==== FUN_0040c840 @ 0040c840 ==== 
 * signature: undefined __thiscall FUN_0040c840(void * this, int * param_1)
 * body: 0040c840-0040c963
 */

void __thiscall FUN_0040c840(void *this,int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int local_34 [8];
  int local_14;
  void *local_10;
  undefined4 local_c;
  byte local_8;
  
  uVar2 = (**(code **)(*param_1 + 0x128))(1);
  (**(code **)(*(int *)this + 0x124))(uVar2);
  *(undefined4 *)((int)this + 0x2a) = *(undefined4 *)((int)param_1 + 0x2a);
  *(undefined2 *)((int)this + 0x36) = *(undefined2 *)((int)param_1 + 0x36);
  *(int *)((int)this + 8) = param_1[2];
  if (DAT_004d95bc != (int *)0x0) {
    FUN_0043e610(param_1,8,local_34,&local_14,DAT_004d95c0);
    uVar1 = *(uint *)((int)param_1 + 0x1e);
    local_8 = local_8 ^ ((byte)((uVar1 & 0x10) >> 4) ^ local_8) & 1;
    local_8 = local_8 ^ (((uVar1 & 0x20000000) == 0) * -2 + 2U ^ local_8) & 2;
    local_8 = local_8 ^ ((char)((uVar1 & 2) >> 1) << 2 ^ local_8) & 4;
    if (((((local_8 & 4) == 0) || ((short)param_1[0x18] != 0)) || ((uVar1 & 0x40000000) != 0)) ||
       (*(short *)((int)param_1 + 0x22) == 0x43)) {
      local_8 = local_8 & 0xf7;
    }
    else {
      local_8 = local_8 | 8;
    }
    local_c = *(undefined4 *)((int)this + 0xc);
    local_10 = this;
    (**(code **)(*DAT_004d95bc + 0xe8))(local_34);
    if ((DAT_004d95c8 != 0) && (*(int *)(DAT_004d95c8 + 0x2a) == *(int *)((int)param_1 + 0x2a))) {
      local_14 = *(int *)(DAT_004d95c8 + 0xc);
      (**(code **)(*DAT_004d95bc + 0xe8))(local_34);
      DAT_004d95c8 = 0;
    }
  }
  return;
}


