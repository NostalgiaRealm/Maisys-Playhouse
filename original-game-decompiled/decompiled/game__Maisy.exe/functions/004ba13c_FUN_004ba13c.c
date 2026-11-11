
/* ==== FUN_004ba13c @ 004ba13c ==== 
 * signature: undefined __stdcall FUN_004ba13c(int * param_1)
 * body: 004ba13c-004ba197
 */

void FUN_004ba13c(int *param_1)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = 1;
  if (1 < DAT_004de1b4) {
    pcVar1 = *(code **)(*param_1 + 0x14);
    do {
      uVar4 = 0;
      pcVar3 = *(char **)(DAT_004de1b8 + iVar5 * 4);
      iVar2 = iVar5 - DAT_004de1b4;
      if ((*pcVar3 == '-') || (*pcVar3 == '/')) {
        uVar4 = 1;
        pcVar3 = pcVar3 + 1;
      }
      iVar5 = iVar5 + 1;
      (*pcVar1)(pcVar3,uVar4,iVar2 == -1);
    } while (iVar5 < DAT_004de1b4);
  }
  return;
}


