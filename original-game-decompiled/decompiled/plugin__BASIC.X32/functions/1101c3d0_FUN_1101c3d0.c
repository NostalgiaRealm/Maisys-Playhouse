
/* ==== FUN_1101c3d0 @ 1101c3d0 ==== 
 * signature: undefined4 __cdecl FUN_1101c3d0(undefined4 * param_1, int param_2, short * param_3, int param_4, int param_5)
 * body: 1101c3d0-1101c5d7
 */

undefined4 __cdecl
FUN_1101c3d0(undefined4 *param_1,int param_2,short *param_3,int param_4,int param_5)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined1 *puVar4;
  DWORD DVar5;
  undefined4 uVar6;
  short *psVar7;
  short *psVar8;
  undefined2 uVar9;
  byte bVar10;
  short local_30;
  undefined4 local_2e;
  undefined2 local_2a;
  undefined2 uStack_28;
  
  uVar1 = *(ushort *)(param_4 + 2);
  bVar10 = (byte)uVar1 & 1;
  local_30 = 0;
  psVar7 = (short *)(param_5 + 0x24);
  iVar3 = *(int *)(param_4 + 6) + -1;
  switch(iVar3) {
  case 0:
    uVar6 = FUN_1100fc30((int)param_1);
    goto LAB_1101c5ac;
  case 1:
    uVar6 = FUN_1100fc40((int)param_1);
    FUN_1101c610(param_1,&local_30,uVar6,bVar10);
    goto LAB_1101c5b8;
  case 2:
    FUN_1101c610(param_1,&local_30,*(undefined4 *)(param_5 + 8),bVar10);
    goto LAB_1101c5b8;
  case 3:
    sVar2 = *psVar7;
    if (sVar2 != 0x1c) {
      if (sVar2 == 0x19) {
        if ((uVar1 & 1) == 0) {
          psVar8 = &local_30;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)psVar8 = *(undefined4 *)psVar7;
            psVar7 = psVar7 + 2;
            psVar8 = psVar8 + 2;
          }
        }
        else {
          local_30 = 0x1fc;
          local_2e = 0;
          local_2a = (undefined2)*(undefined4 *)(param_5 + 0x26);
          uStack_28 = (undefined2)((uint)*(undefined4 *)(param_5 + 0x26) >> 0x10);
        }
      }
      else if (sVar2 == 3) {
        if ((uVar1 & 1) == 0) {
          psVar8 = &local_30;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)psVar8 = *(undefined4 *)psVar7;
            psVar7 = psVar7 + 2;
            psVar8 = psVar8 + 2;
          }
        }
        else {
          local_30 = 0x1fb;
          local_2e = 0;
          local_2a = (undefined2)*(undefined4 *)(param_5 + 0x26);
          uStack_28 = (undefined2)((uint)*(undefined4 *)(param_5 + 0x26) >> 0x10);
        }
      }
      else if (sVar2 == 7) {
        local_30 = 0x10;
        local_2e = *(uint *)(param_5 + 0x28);
      }
      else if (sVar2 == 6) {
        puVar4 = (undefined1 *)FUN_11002580(param_1,1);
        *puVar4 = *(undefined1 *)(param_5 + 0x28);
        puVar4[1] = 0;
        local_30 = 0xd;
        local_2e._2_2_ = SUB42(puVar4,0);
        local_2e = CONCAT22(local_2e._2_2_,2);
        local_2a = (undefined2)((uint)puVar4 >> 0x10);
      }
      else {
        psVar8 = &local_30;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)psVar8 = *(undefined4 *)psVar7;
          psVar7 = psVar7 + 2;
          psVar8 = psVar8 + 2;
        }
        FUN_110213f0(param_1,&local_30);
      }
      goto LAB_1101c5bb;
    }
    FUN_1101c610(param_1,&local_30,*(undefined4 *)(param_5 + 0x26),bVar10);
    goto LAB_1101c5b8;
  case 4:
    local_30 = 0x10;
    FUN_110185b0(param_1,&local_2e);
    goto LAB_1101c5bb;
  case 5:
    local_30 = 1;
    DVar5 = timeGetTime();
    local_2e = (DVar5 * 6) / 100;
    goto LAB_1101c5bb;
  case 6:
    uVar9 = 1;
    break;
  case 7:
    uVar9 = 4;
    break;
  case 8:
    uVar9 = 2;
    break;
  case 9:
    uVar9 = 3;
    break;
  case 10:
    uVar9 = 0;
    break;
  default:
    return CONCAT22((short)((uint)iVar3 >> 0x10),0xffff);
  }
  uVar6 = FUN_11006330(param_1,uVar9);
LAB_1101c5ac:
  FUN_1101c3a0(param_1,&local_30,uVar6,bVar10);
LAB_1101c5b8:
LAB_1101c5bb:
  uVar6 = FUN_11019e00(param_2,param_3,(undefined4 *)&local_30);
  return uVar6;
}


