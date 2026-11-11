
/* ==== FUN_110161e0 @ 110161e0 ==== 
 * signature: undefined4 __cdecl FUN_110161e0(int param_1, byte * param_2)
 * body: 110161e0-1101629f
 */

undefined4 __cdecl FUN_110161e0(int param_1,byte *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  short local_10;
  short local_e;
  
  sVar8 = 0;
  local_e = 0;
  local_10 = 0x7fff;
  do {
    pbVar1 = (byte *)(param_1 + sVar8 * 4);
    uVar2 = (ushort)((int)((uint)param_2[2] - (uint)pbVar1[2]) >> 0x1f);
    sVar3 = ((ushort)((uint)param_2[2] - (uint)pbVar1[2]) ^ uVar2) - uVar2;
    uVar2 = (ushort)((int)((uint)param_2[1] - (uint)pbVar1[1]) >> 0x1f);
    sVar4 = ((ushort)((uint)param_2[1] - (uint)pbVar1[1]) ^ uVar2) - uVar2;
    uVar9 = (int)((uint)*param_2 - (uint)*pbVar1) >> 0x1f;
    iVar7 = ((uint)*param_2 - (uint)*pbVar1 ^ uVar9) - uVar9;
    sVar5 = (short)iVar7;
    if (sVar5 <= sVar4) {
      iVar7 = CONCAT22((short)((uint)iVar7 >> 0x10),sVar4);
    }
    if ((short)iVar7 <= sVar3) {
      iVar7 = CONCAT22((short)((uint)iVar7 >> 0x10),sVar3);
    }
    sVar6 = (short)iVar7 >> 1;
    sVar3 = (short)((int)sVar5 + (int)sVar4 + (int)sVar3 >> 1) + sVar6;
    if (sVar3 < local_10) {
      local_10 = sVar3;
      local_e = sVar8;
    }
    sVar8 = sVar8 + 1;
  } while (sVar8 < 0x100);
  return CONCAT31((int3)(CONCAT22((short)((uint)iVar7 >> 0x10),sVar6) >> 8),(undefined1)local_e);
}


