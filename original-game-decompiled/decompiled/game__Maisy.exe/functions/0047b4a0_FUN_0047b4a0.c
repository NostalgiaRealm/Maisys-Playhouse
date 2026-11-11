
/* ==== FUN_0047b4a0 @ 0047b4a0 ==== 
 * signature: undefined __thiscall FUN_0047b4a0(void * this, short * param_1, short * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int * param_6, int * param_7)
 * body: 0047b4a0-0047b617
 */

void __thiscall
FUN_0047b4a0(void *this,short *param_1,short *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int *param_6,int *param_7)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  HDC *ppHVar7;
  HDC local_48 [5];
  short *local_34;
  undefined4 local_30;
  short *local_2c;
  byte local_28;
  undefined4 local_26;
  undefined4 local_22;
  int local_1e;
  undefined4 local_16;
  undefined2 local_a;
  char local_5;
  
  bVar1 = false;
  iVar6 = 0;
  local_5 = '\0';
  if (*(int *)((int)this + 0x26) != 0) {
    iVar6 = *(int *)(*(int *)((int)this + 0x26) + 0x82);
  }
  cVar3 = (**(code **)(*(int *)this + 0x68))(7);
  if (((cVar3 != '\0') && (iVar6 != 0)) && (*(short *)(iVar6 + 0x40) == 2)) {
    bVar1 = true;
  }
  if ((param_6 == (int *)0x0) && (!bVar1)) {
    iVar6 = (uint)*(ushort *)((int)this + 0x47a) * *(int *)((int)this + 0x470);
    uVar4 = ((int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3) + 3U & 0xfffffffc;
    if (0 < *(int *)((int)this + 0x474)) {
      uVar4 = -uVar4;
    }
    if ((int)uVar4 < 0) {
      iVar6 = (1 - *(int *)((int)this + 0x474)) * uVar4 + *(int *)((int)this + 0x8a0);
    }
    else {
      iVar6 = *(int *)((int)this + 0x8a0);
    }
    FUN_0047b210(this,param_1,param_2,uVar4,iVar6,DAT_004da398);
    return;
  }
  ppHVar7 = local_48;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppHVar7 = (HDC)0x0;
    ppHVar7 = ppHVar7 + 1;
  }
  local_48[1] = (HDC)0x0;
  local_48[2] = *(HDC *)((int)this + 0xcdc);
  local_48[0] = DAT_004da398;
  local_48[4] = (HDC)param_3;
  local_48[3] = (HDC)0x0;
  local_1e = (int)this + 0x46c;
  local_34 = param_1;
  local_16 = *(undefined4 *)((int)this + 0x8a0);
  local_30 = 0;
  local_2c = param_2;
  bVar2 = local_28 | 1;
  if (param_7 != (int *)0x0) {
    local_28 = local_28 | 3;
    local_26 = (**(code **)(*param_7 + 0x150))();
    bVar2 = local_28;
  }
  local_28 = bVar2;
  local_22 = *(undefined4 *)((int)this + 0xce4);
  uVar5 = FUN_00470470(DAT_004dc564);
  local_a = (undefined2)uVar5;
  if (bVar1) {
    (**(code **)(*(int *)this + 0x48))(7,FUN_0047b620,local_48);
    local_5 = DAT_004e34cc == 0;
  }
  if ((param_6 != (int *)0x0) && (local_5 == '\0')) {
    (**(code **)(*param_6 + 600))(0x14,local_48,0x40);
  }
  return;
}


