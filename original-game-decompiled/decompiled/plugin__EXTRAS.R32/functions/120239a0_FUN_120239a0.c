
/* ==== FUN_120239a0 @ 120239a0 ==== 
 * signature: uint __cdecl FUN_120239a0(int param_1)
 * body: 120239a0-12023a77
 */

uint __cdecl FUN_120239a0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  uint local_c;
  int local_8;
  int local_4;
  
  if (param_1 == 0) {
    return 1;
  }
  local_c = 0;
  local_4 = 0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_8);
  sVar4 = 1;
  uVar2 = (*pcVar1)(local_8,param_1,&local_c);
  DAT_12039a9c = uVar2;
  if (1 < local_c) {
    do {
      iVar3 = (int)sVar4;
      sVar4 = sVar4 + 1;
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,2,&local_8);
      DAT_12039a9c = (*pcVar1)(local_8,iVar3,local_c,&local_4);
      FUN_12023ca0(iVar3 + -1,local_4 + -1,param_1);
      uVar2 = (uint)sVar4;
    } while (uVar2 < local_c);
  }
  return uVar2 & 0xffff0000;
}


