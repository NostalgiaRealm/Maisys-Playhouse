
/* ==== FUN_0047aa10 @ 0047aa10 ==== 
 * signature: undefined __thiscall FUN_0047aa10(void * this, undefined4 * param_1, short param_2, int * param_3)
 * body: 0047aa10-0047abb7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047aa10(void *this,undefined4 *param_1,short param_2,int *param_3)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_0047a900((int)this);
  local_14 = *param_1;
  local_10 = param_1[1];
  if ((*(byte *)((int)this + 0x1134) & 4) != 0) {
    FUN_0047a920(this,&local_14,param_2);
  }
  if (*(int *)((int)this + 0x468) != 0) {
    FUN_0047a8f0((int)this);
    bVar1 = *(byte *)((int)this + 0x1134);
    *(byte *)((int)this + 0x1134) = bVar1 | 1;
    if ((bVar1 & 4) == 0) {
      bVar5 = false;
      iVar4 = 0;
      if (*(int *)((int)this + 0x26) != 0) {
        iVar4 = *(int *)(*(int *)((int)this + 0x26) + 0x82);
      }
      cVar3 = (**(code **)(*(int *)this + 0x68))(6);
      if (((cVar3 != '\0') && (iVar4 != 0)) && (*(short *)(iVar4 + 0x40) == 2)) {
        local_c = *(undefined4 *)((int)this + 0x468);
        local_8 = (int)this + 0x46c;
        (**(code **)(*(int *)this + 0x48))(6,FUN_0047abc0,&local_c);
        bVar5 = DAT_004e34cc == 0;
      }
      if ((param_3 != (int *)0x0) && (!bVar5)) {
        local_c = *(undefined4 *)((int)this + 0x468);
        local_8 = (int)this + 0x46c;
        (**(code **)(*param_3 + 600))(0x23,&local_c,8);
      }
    }
    DAT_004e1c40._0_2_ = 0;
    DAT_004e1c30 = 0;
    DAT_004e1c40._2_2_ = 0;
    DAT_004e1c34 = 0;
    _DAT_004e1c38 = 0;
    _DAT_004e1c3c = 0;
    DAT_004e1c44._0_2_ = (short)*(undefined4 *)((int)this + 0x470);
    uVar2 = (ushort)((int)*(undefined4 *)((int)this + 0x474) >> 0x1f);
    DAT_004e1c44._2_2_ = ((ushort)*(undefined4 *)((int)this + 0x474) ^ uVar2) - uVar2;
    _DAT_004e1c48 = *(short *)((int)this + 0x47a);
    iVar4 = (int)*(short *)((int)this + 0x47a) * *(int *)((int)this + 0x470);
    DAT_004e1c4a = (short)((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) + 3U & 0xfffc;
    if (0 < *(int *)((int)this + 0x474)) {
      DAT_004e1c4a = -DAT_004e1c4a;
    }
    _DAT_004e1c4c = *(undefined4 *)((int)this + 0x8a0);
    _DAT_004e1c50 = *(undefined4 *)((int)this + 0x468);
    return;
  }
  *(undefined4 *)((int)this + 0xcdc) = 0;
  *(undefined4 *)((int)this + 0xce0) = 0;
  return;
}


