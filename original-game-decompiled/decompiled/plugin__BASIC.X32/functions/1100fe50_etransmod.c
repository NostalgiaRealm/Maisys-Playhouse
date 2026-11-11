
/* ==== etransmod @ 1100fe50 ==== 
 * signature: uint __cdecl etransmod(undefined4 * param_1)
 * body: 1100fe50-11010002
 */

uint __cdecl etransmod(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  undefined4 in_EAX;
  undefined3 uVar8;
  HGLOBAL pvVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined3 extraout_var;
  
                    /* 0xfe50  11  etransmod */
  bVar4 = true;
  iVar1 = *(int *)((int)param_1 + 0x16);
  puVar2 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar3 = param_1[1];
  if (iVar3 < 0x1d) {
    if (iVar3 == 0x1c) {
      uVar6 = FUN_11010050(param_1,iVar1,(uint)puVar2);
      return uVar6;
    }
    uVar8 = 0;
    switch(iVar3) {
    case 0:
      param_1[3] = 0x276;
      *(undefined2 *)(param_1 + 4) = 6;
      return 0;
    case 1:
      uVar6 = FUN_11010510(param_1);
      return uVar6 & 0xffffff00;
    case 4:
      uVar6 = FUN_110103b0(param_1,iVar1,*puVar2);
      return uVar6 & 0xffffff00;
    case 5:
      uVar6 = FUN_11010450(iVar1,(int)puVar2);
      return uVar6 & 0xffffff00;
    case 8:
      return 0;
    case 0xe:
      FUN_11004840(param_1,10,0);
      if (*(LPVOID *)(iVar1 + 0x48) != (LPVOID)0x0) {
        FUN_11029180(*(LPVOID *)(iVar1 + 0x48));
        *(undefined4 *)(iVar1 + 0x48) = 0;
      }
      pvVar5 = (HGLOBAL)0x0;
      if (*(HGLOBAL *)(iVar1 + 0x4c) != (HGLOBAL)0x0) {
        pvVar5 = GlobalFree(*(HGLOBAL *)(iVar1 + 0x4c));
        *(undefined4 *)(iVar1 + 0x4c) = 0;
        *(undefined4 *)(iVar1 + 0x50) = 0;
      }
      return (uint)pvVar5 & 0xffffff00;
    case 0x10:
      uVar6 = FUN_11010af0(param_1,iVar1);
      return uVar6;
    case 0x12:
      *puVar2 = 0x14;
      return 1;
    case 0x14:
      uVar6 = FUN_11010870(param_1,iVar1,(int)puVar2);
      return uVar6;
    }
  }
  else {
    uVar8 = (undefined3)((uint)in_EAX >> 8);
    if (iVar3 < 0x27) {
      if (iVar3 == 0x26) {
        uVar6 = FUN_11010850(param_1,iVar1);
        return uVar6;
      }
      if (iVar3 != 0x1d) {
        if (iVar3 != 0x1e) {
          return CONCAT31(uVar8,1);
        }
        uVar6 = FUN_11010220(param_1,iVar1,puVar2);
        return uVar6 & 0xffffff00;
      }
      uVar6 = FUN_11010070(param_1,iVar1,puVar2);
      return uVar6 & 0xffffff00;
    }
    if (iVar3 == 0x19d) {
      uVar7 = FUN_110104c0(param_1,iVar1);
      *(char *)puVar2 = (char)uVar7;
      return CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
    if (iVar3 != 0x1b2) {
      return CONCAT31(uVar8,1);
    }
    bVar4 = FUN_11010640(param_1,iVar1);
    uVar8 = extraout_var;
  }
  return CONCAT31(uVar8,bVar4);
}


