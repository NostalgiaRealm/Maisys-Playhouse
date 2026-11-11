
/* ==== FUN_11010af0 @ 11010af0 ==== 
 * signature: uint __cdecl FUN_11010af0(undefined4 * param_1, int param_2)
 * body: 11010af0-11010bad
 */

uint __cdecl FUN_11010af0(undefined4 *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  uint in_EAX;
  DWORD DVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((*(byte *)(param_2 + 0x54) & 1) != 0) {
    DVar3 = timeGetTime();
    in_EAX = (DVar3 * 6) / 100;
    if (*(uint *)(param_2 + 0x40) <= in_EAX) {
      DVar3 = timeGetTime();
      sVar2 = (short)((int)(((DVar3 * 6) / 100 - *(int *)(param_2 + 0x44)) *
                           (int)*(short *)(param_2 + 0x24)) / *(int *)(param_2 + 0x2a)) + 1;
      sVar1 = *(short *)(param_2 + 0x24);
      if ((sVar1 < sVar2) || (sVar2 <= *(short *)(param_2 + 0x3e))) {
        sVar2 = *(short *)(param_2 + 0x3e) + 1;
      }
      if (sVar1 <= sVar2) {
        uVar4 = FUN_11010a40(param_1,param_2);
        return uVar4 & 0xffffff00;
      }
      *(short *)(param_2 + 0x3e) = sVar2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      *(int *)(param_2 + 0x40) =
           *(int *)(param_2 + 0x44) + ((int)sVar2 * *(int *)(param_2 + 0x2a)) / (int)sVar1;
      uVar7 = 0;
      uVar6 = 6;
      uVar5 = FUN_1100fc30((int)param_1);
      in_EAX = FUN_1101db80(param_1,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
    }
  }
  return in_EAX & 0xffffff00;
}


