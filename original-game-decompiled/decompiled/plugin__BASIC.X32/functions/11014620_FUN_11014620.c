
/* ==== FUN_11014620 @ 11014620 ==== 
 * signature: int __cdecl FUN_11014620(undefined4 param_1, int param_2, char * param_3)
 * body: 11014620-110146a2
 */

int __cdecl FUN_11014620(undefined4 param_1,int param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_4;
  
  local_4 = -1;
  uVar2 = FUN_11013ee0(param_2);
  if ((char)uVar2 == '\0') {
    FUN_11013e60();
  }
  iVar5 = 0;
  iVar1 = local_4;
  if (0 < *(int *)(param_2 + 0x20)) {
    iVar4 = 0;
    do {
      iVar3 = FUN_11014350(*(char **)(*(int *)(param_2 + 0x28) + iVar4),param_3);
      iVar1 = iVar5;
      if (iVar3 == 0) break;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      iVar1 = local_4;
    } while (iVar5 < *(int *)(param_2 + 0x20));
  }
  local_4 = iVar1;
  if ((char)uVar2 == '\0') {
    FUN_11013e70();
  }
  return local_4;
}


