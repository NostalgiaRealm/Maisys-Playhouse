
/* ==== FUN_110066d0 @ 110066d0 ==== 
 * signature: uint __cdecl FUN_110066d0(undefined4 param_1, int param_2, uint param_3)
 * body: 110066d0-11006723
 */

uint __cdecl FUN_110066d0(undefined4 param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if (*(short *)(param_2 + 0x38) == 0x1c) {
    uVar2 = 0xffffffff;
    pcVar5 = *(char **)(param_2 + 0x42);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = ~uVar2 - 1;
  }
  else {
    iVar4 = 0;
  }
  iVar3 = 0;
  if (*(short *)(param_2 + 0x38) == 0xd) {
    uVar2 = 0xffffffff;
    pcVar5 = *(char **)(param_2 + 0x3c);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar3 = ~uVar2 - 1;
  }
  *(int *)(param_3 + 8) = iVar3 + iVar4 + 0x72;
  *(undefined2 *)(param_3 + 0xc) = 2;
  return param_3 & 0xffffff00;
}


