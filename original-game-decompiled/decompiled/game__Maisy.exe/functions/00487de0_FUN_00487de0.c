
/* ==== FUN_00487de0 @ 00487de0 ==== 
 * signature: undefined __thiscall FUN_00487de0(void * this, int * param_1, uint param_2)
 * body: 00487de0-00488163
 */

void __thiscall FUN_00487de0(void *this,int *param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char local_170 [256];
  undefined4 local_70;
  undefined2 local_6c;
  int local_6a;
  int local_66;
  undefined4 local_62;
  ushort local_5e;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined2 local_38;
  uint local_36;
  uint local_32;
  uint local_2e;
  undefined2 local_2a;
  uint local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20 [4];
  undefined2 local_18 [4];
  uint local_10;
  uint local_c;
  ushort local_8;
  char local_5;
  
  uVar2 = 0;
  local_8 = 0;
  local_5 = (char)((param_2 & 0x40) >> 6);
  if (*(uint *)((int)this + 0x86) == 0) {
    local_8 = (*(int *)((int)this + 0x6e) == 0) - 1 & 4 | (ushort)(*(int *)((int)this + 0x4e) != 0);
  }
  else {
    if (*(int *)((int)this + 0x6e) != 0) {
      *(uint *)((int)this + 0x86) = *(uint *)((int)this + 0x86) | 0x20000000;
    }
    if (*(int *)((int)this + 0x4e) != 0) {
      *(uint *)((int)this + 0x86) = *(uint *)((int)this + 0x86) | 0x10000000;
    }
  }
  local_8 = local_8 | -(ushort)(*(int *)((int)this + 0x6a) == 0) & 8;
  cVar1 = (char)(param_2 >> 0x18);
  if (cVar1 == '\0') {
    if (*(char **)((int)this + 0x2e) != (char *)0x0) {
      uVar3 = 0xffffffff;
      pcVar6 = *(char **)((int)this + 0x2e);
      do {
        pcVar7 = pcVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar6 = pcVar7 + -uVar3;
      pcVar7 = local_170;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar3 = 0xffffffff;
      pcVar6 = local_170;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (~uVar3 < 0x100) {
        iVar5 = -1;
        pcVar6 = local_170;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar2 = ~(ushort)iVar5;
      }
      else {
        uVar2 = 0x100;
      }
    }
    local_62 = *(undefined4 *)((int)this + 0xc);
    local_5c = (**(code **)(*(int *)this + 0x128))();
    local_50 = *(undefined4 *)((int)this + 0xa6);
    local_54 = *(undefined4 *)((int)this + 0xa2);
    local_4c = *(undefined4 *)((int)this + 0xaa);
    local_48 = *(undefined4 *)((int)this + 0xae);
    if (((param_2 & 2) == 0) || (local_5e = uVar2, uVar2 == 0)) {
      local_5e = 0;
    }
    local_56 = *(undefined2 *)((int)this + 0x5e);
    local_58 = *(undefined2 *)((int)this + 0x60);
    local_40 = *(undefined4 *)((int)this + 0x8a);
    local_44 = *(undefined4 *)((int)this + 0x86);
    local_c = (uint)(short)uVar2;
    local_6c = 1;
    local_66 = local_c + 0x34;
    local_70 = 8;
    local_6a = (int)(short)local_8;
    (**(code **)(*param_1 + 0x158))(&local_70,0x34);
    uVar3 = local_c;
  }
  else {
    if ((cVar1 != '\x01') && (cVar1 != '\x02')) goto LAB_00488122;
    if ((*(char **)((int)this + 0x2e) == (char *)0x0) || ((param_2 & 2) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar3 = 0xffffffff;
      pcVar6 = *(char **)((int)this + 0x2e);
      do {
        pcVar7 = pcVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar6 = pcVar7 + -uVar3;
      pcVar7 = local_170;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar3 = 0xffffffff;
      pcVar6 = local_170;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (~uVar3 < 0x100) {
        iVar5 = -1;
        pcVar6 = local_170;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar2 = ~(ushort)iVar5;
      }
      else {
        uVar2 = 0x100;
      }
    }
    local_2e = FUN_0044ae60('\x01',*(uint *)((int)this + 0xc));
    uVar3 = (**(code **)(*(int *)this + 0x128))();
    local_28 = FUN_0044ae60('\x01',uVar3);
    FUN_0044aec0((undefined4 *)((int)this + 0xa2),local_20);
    FUN_0044aec0((undefined4 *)((int)this + 0xaa),local_18);
    local_2a = FUN_0044aea0('\x01',uVar2);
    local_22 = FUN_0044aea0('\x01',*(undefined2 *)((int)this + 0x5e));
    local_24 = FUN_0044aea0('\x01',*(undefined2 *)((int)this + 0x60));
    FUN_00481810(param_1,&local_10,*(uint *)((int)this + 0x86));
    FUN_00481810(param_1,&local_c,*(uint *)((int)this + 0x8a));
    local_32 = FUN_0044ae60('\x01',(int)(short)uVar2 + 0x34);
    local_38 = FUN_0044aea0('\x01',1);
    local_36 = FUN_0044ae60('\x01',(int)(short)local_8);
    local_3c = FUN_0044ae60('\x01',8);
    (**(code **)(*param_1 + 0x158))(&local_3c,0x34);
    uVar3 = (int)(short)uVar2;
  }
  if (((param_2 & 2) != 0) && (uVar2 != 0)) {
    FUN_00486d80(param_1,local_170,uVar3);
  }
LAB_00488122:
  if (*(int *)((int)this + 0x4e) != 0) {
    FUN_0046dce0(this,param_1,param_2);
  }
  if (*(int *)((int)this + 0x6e) != 0) {
    FUN_0046dd20(this,param_1,param_2);
  }
  if (local_5 == '\0') {
    (**(code **)(*(int *)this + 0x1c))(0);
  }
  return;
}


