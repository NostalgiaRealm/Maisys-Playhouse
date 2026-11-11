
/* ==== FUN_1101de30 @ 1101de30 ==== 
 * signature: uint __cdecl FUN_1101de30(undefined4 param_1, int param_2, uint param_3)
 * body: 1101de30-1101de63
 */

uint __cdecl FUN_1101de30(undefined4 param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = 0;
  if (*(short *)(param_2 + 0x1e) == 0x1c) {
    uVar3 = 0xffffffff;
    pcVar4 = *(char **)(param_2 + 0x28);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = ~uVar3 - 1;
  }
  *(undefined2 *)(param_3 + 0xc) = 1;
  *(int *)(param_3 + 8) = iVar2 + 0x42;
  return param_3 & 0xffffff00;
}


