
/* ==== FUN_00432940 @ 00432940 ==== 
 * signature: int __cdecl FUN_00432940(char * param_1, char * param_2, char param_3, int param_4)
 * body: 00432940-004329d9
 */

int __cdecl FUN_00432940(char *param_1,char *param_2,char param_3,int param_4)

{
  size_t _MaxCount;
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  uVar3 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _MaxCount = ~uVar3 - 1;
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  bVar2 = false;
  iVar5 = (~uVar3 - 1) - _MaxCount;
joined_r0x00432974:
  if ((param_4 == 0) || (param_4 = param_4 + -1, iVar5 < 0)) {
    if (!bVar2) {
      iVar5 = -1;
    }
    return iVar5;
  }
  if (!bVar2) goto LAB_0043297e;
  goto LAB_004329b6;
LAB_0043297e:
  do {
    if (iVar5 < 0) break;
    if (param_3 == '\0') {
      uVar3 = FUN_004329e0(param_1 + iVar5,param_2,_MaxCount);
    }
    else {
      uVar3 = _strncmp(param_1 + iVar5,param_2,_MaxCount);
    }
    if (uVar3 == 0) {
      bVar2 = true;
    }
    else {
      iVar5 = iVar5 + -1;
    }
  } while (!bVar2);
  if (bVar2) {
LAB_004329b6:
    if (0 < param_4) {
      iVar5 = iVar5 - _MaxCount;
      bVar2 = false;
    }
  }
  goto joined_r0x00432974;
}


