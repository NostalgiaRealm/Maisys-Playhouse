
/* ==== FUN_11021510 @ 11021510 ==== 
 * signature: short __cdecl FUN_11021510(undefined4 * param_1, short * param_2, short * param_3, char * param_4, int param_5)
 * body: 11021510-110215ea
 */

short __cdecl
FUN_11021510(undefined4 *param_1,short *param_2,short *param_3,char *param_4,int param_5)

{
  short sVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  short *psVar5;
  
  sVar1 = 0;
  if (*param_3 != 0x1fd) {
    return -0x20;
  }
  pcVar3 = param_4 + 1;
  if ((((*param_4 == 'v') && (pcVar3 = param_4 + 2, param_4[1] == 'a')) &&
      (pcVar3 = param_4 + 3, param_4[2] == 'l')) &&
     (((pcVar3 = param_4 + 4, param_4[3] == 'u' && (pcVar3 = param_4 + 5, param_4[4] == 'e')) &&
      (*pcVar3 == '\0')))) {
    if (param_5 == 0) {
      psVar5 = param_3;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)param_2 = *(undefined4 *)psVar5;
        psVar5 = psVar5 + 2;
        param_2 = param_2 + 2;
      }
      *param_3 = 0;
      return 0;
    }
    uVar2 = FUN_11021170(param_1,param_3,(undefined4 *)param_2,param_5);
    sVar1 = (short)uVar2;
    if (sVar1 == 0) {
      FUN_110213f0(param_1,param_2);
      return 0;
    }
  }
  else if (((*pcVar3 == 'c') && (pcVar3[1] == 'o')) &&
          ((pcVar3[2] == 'u' && (((pcVar3[3] == 'n' && (pcVar3[4] == 't')) && (pcVar3[5] == '\0'))))
          )) {
    *param_2 = 1;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 3);
  }
  return sVar1;
}


