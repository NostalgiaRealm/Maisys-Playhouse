
/* ==== FUN_1100dca0 @ 1100dca0 ==== 
 * signature: uint __cdecl FUN_1100dca0(undefined4 * param_1, int param_2)
 * body: 1100dca0-1100dd60
 */

uint __cdecl FUN_1100dca0(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint in_EAX;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  
  if ((*(byte *)(param_2 + 0x44) & 1) != 0) {
    DVar2 = timeGetTime();
    in_EAX = (DVar2 * 6) / 100;
    if (*(uint *)(param_2 + 0x40) <= in_EAX) {
      DVar2 = timeGetTime();
      iVar3 = (DVar2 * 6) / 100 - *(int *)(param_2 + 0x3c);
      iVar1 = *(int *)(param_2 + 0x26);
      if ((iVar3 < iVar1) && (iVar1 != 0)) {
        sVar5 = *(short *)(param_2 + 0x38) +
                (short)((((int)*(short *)(param_2 + 0x20) - (int)*(short *)(param_2 + 0x38)) * iVar3
                        ) / iVar1);
        if (*(short *)(param_2 + 0x3a) != sVar5) {
          FUN_1100dd70(param_1,sVar5);
          *(short *)(param_2 + 0x3a) = sVar5;
        }
        DVar2 = timeGetTime();
        uVar4 = (DVar2 * 6) / 100 + 1;
        *(uint *)(param_2 + 0x40) = uVar4;
        return uVar4 & 0xffffff00;
      }
      FUN_1100dd70(param_1,*(short *)(param_2 + 0x20));
      *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xfe;
      in_EAX = FUN_1100ddd0(param_1);
    }
  }
  return in_EAX & 0xffffff00;
}


