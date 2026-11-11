
/* ==== fadexmod @ 1100d910 ==== 
 * signature: uint __cdecl fadexmod(undefined4 * param_1)
 * body: 1100d910-1100da3b
 */

uint __cdecl fadexmod(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  uint3 uVar7;
  uint uVar4;
  undefined4 uVar5;
  undefined3 extraout_var;
  int iVar6;
  
                    /* 0xd910  12  fadexmod */
  uVar3 = 1;
  puVar1 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar6 = param_1[1];
  uVar7 = (uint3)((uint)iVar6 >> 8);
  if (iVar6 < 0x1d) {
    if (iVar6 == 0x1c) {
      uVar4 = FUN_1100db50(param_1,iVar2,(uint)puVar1);
      return uVar4;
    }
    switch(iVar6) {
    case 0:
      param_1[3] = 0x4ce;
      *(undefined2 *)(param_1 + 4) = 6;
      return (uint)uVar7 << 8;
    case 1:
      uVar4 = FUN_1100dc30(param_1);
      return uVar4 & 0xffffff00;
    case 4:
      uVar4 = FUN_1100da80(param_1,iVar2,*puVar1);
      return uVar4 & 0xffffff00;
    case 5:
      uVar4 = FUN_1100db00(iVar2,(int)puVar1);
      return uVar4 & 0xffffff00;
    case 8:
      return (uint)uVar7 << 8;
    case 0xe:
      uVar4 = FUN_11004840(param_1,10,0);
      return uVar4 & 0xffffff00;
    case 0x10:
      uVar4 = FUN_1100dca0(param_1,iVar2);
      return uVar4;
    case 0x12:
      *puVar1 = 0x14;
      return CONCAT31(uVar7,1);
    }
  }
  else {
    if (iVar6 == 0x1e) {
      uVar4 = FUN_1100db70(param_1,iVar2,puVar1);
      return uVar4 & 0xffffff00;
    }
    if (iVar6 == 0x19d) {
      uVar5 = FUN_1100dbe0(param_1,iVar2);
      *(char *)puVar1 = (char)uVar5;
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    if (iVar6 != 0x1b2) {
      return CONCAT31(uVar7,1);
    }
    uVar3 = FUN_1100ddf0(param_1,iVar2);
    iVar6 = CONCAT31(extraout_var,uVar3);
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),uVar3);
}


