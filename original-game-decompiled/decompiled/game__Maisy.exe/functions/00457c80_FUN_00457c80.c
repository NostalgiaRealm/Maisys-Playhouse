
/* ==== FUN_00457c80 @ 00457c80 ==== 
 * signature: undefined __cdecl FUN_00457c80(HLOCAL param_1, int * param_2, SIZE_T * param_3, char * param_4)
 * body: 00457c80-00457d20
 */

void __cdecl FUN_00457c80(HLOCAL param_1,int *param_2,SIZE_T *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint local_8;
  
  if (0 < *param_2) {
    *param_2 = *param_2 + -1;
  }
  if (param_4 == (char *)0x0) {
    local_8 = 1;
  }
  else {
    local_8 = 0xffffffff;
    pcVar6 = param_4;
    do {
      if (local_8 == 0) break;
      local_8 = local_8 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_8 = ~local_8;
  }
  iVar2 = *param_2;
  *param_3 = iVar2 + local_8;
  FUN_0043f730(param_1,iVar2 + local_8);
  pvVar3 = LocalLock(param_1);
  if (pvVar3 != (LPVOID)0x0) {
    if (param_4 == (char *)0x0) {
      *(undefined1 *)(*param_2 + (int)pvVar3) = 0;
    }
    else {
      uVar4 = 0xffffffff;
      do {
        pcVar6 = param_4;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar6 = param_4 + 1;
        cVar1 = *param_4;
        param_4 = pcVar6;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar6 + -uVar4;
      pcVar7 = (char *)(*param_2 + (int)pvVar3);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
  }
  LocalUnlock(param_1);
  *param_2 = *param_2 + local_8;
  return;
}


