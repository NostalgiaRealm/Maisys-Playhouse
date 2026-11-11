
/* ==== motionmod @ 11002f10 ==== 
 * signature: uint __cdecl motionmod(undefined4 * param_1)
 * body: 11002f10-11003026
 */

uint __cdecl motionmod(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  uint3 uVar7;
  uint uVar4;
  undefined4 uVar5;
  undefined3 extraout_var;
  int iVar6;
  
                    /* 0x2f10  22  motionmod */
  bVar3 = true;
  puVar1 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar6 = param_1[1];
  uVar7 = (uint3)((uint)iVar6 >> 8);
  if (iVar6 < 0x1f) {
    if (iVar6 == 0x1e) {
      uVar4 = FUN_11003120(param_1,iVar2,puVar1);
      return uVar4 & 0xffffff00;
    }
    switch(iVar6) {
    case 0:
      param_1[3] = 0x1fe;
      *(undefined2 *)(param_1 + 4) = 6;
      return (uint)uVar7 << 8;
    case 1:
      uVar4 = FUN_11003630(param_1);
      return uVar4 & 0xffffff00;
    case 3:
      uVar4 = FUN_110032a0(param_1,iVar2,puVar1);
      return uVar4 & 0xffffff00;
    case 4:
      uVar4 = FUN_11003060(param_1,iVar2,*puVar1);
      return uVar4 & 0xffffff00;
    case 5:
      uVar4 = FUN_110030d0(iVar2,(int)puVar1);
      return uVar4 & 0xffffff00;
    case 8:
      return (uint)uVar7 << 8;
    case 0xe:
      uVar4 = FUN_11004840(param_1,10,0);
      return uVar4 & 0xffffff00;
    case 0x10:
      uVar4 = FUN_11003680(param_1,iVar2);
      return uVar4;
    }
  }
  else {
    if (iVar6 == 0x19d) {
      uVar5 = FUN_110035e0(param_1,iVar2);
      *(char *)puVar1 = (char)uVar5;
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    if (iVar6 != 0x1b2) {
      return CONCAT31(uVar7,1);
    }
    bVar3 = FUN_110039e0(param_1,iVar2);
    iVar6 = CONCAT31(extraout_var,bVar3);
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),bVar3);
}


