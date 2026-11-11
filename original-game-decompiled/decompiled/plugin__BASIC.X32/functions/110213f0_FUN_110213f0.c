
/* ==== FUN_110213f0 @ 110213f0 ==== 
 * signature: undefined __cdecl FUN_110213f0(undefined4 * param_1, short * param_2)
 * body: 110213f0-11021461
 */

void __cdecl FUN_110213f0(undefined4 *param_1,short *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*param_2 == 0xd) {
    if (*(int *)(param_2 + 2) != 0) {
      pcVar2 = (char *)FUN_110024d0(param_1,*(int *)(param_2 + 2));
      iVar4 = -1;
      *(char **)(param_2 + 2) = pcVar2;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      param_2[1] = ~(ushort)iVar4;
      return;
    }
  }
  else {
    if (*param_2 != 0x1fd) {
      return;
    }
    if (*(int *)(param_2 + 8) != 0) {
      uVar3 = FUN_11021470(param_1,*(int *)(param_2 + 8),*(uint *)(param_2 + 1));
      *(undefined4 *)(param_2 + 8) = uVar3;
      FUN_11020d90(param_1,param_2,FUN_110214f0);
    }
  }
  return;
}


