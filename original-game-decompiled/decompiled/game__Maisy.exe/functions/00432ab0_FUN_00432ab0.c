
/* ==== FUN_00432ab0 @ 00432ab0 ==== 
 * signature: int __cdecl FUN_00432ab0(char * param_1, char * param_2, char param_3)
 * body: 00432ab0-00432b89
 */

/* WARNING: Removing unreachable block (ram,0x00432b18) */

int __cdecl FUN_00432ab0(char *param_1,char *param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_c;
  
  iVar5 = -1;
  local_c = 0;
  bVar2 = false;
  pcVar6 = param_2;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (iVar5 != -2) {
    if (param_3 == '\0') {
      for (; *param_1 != '\0'; param_1 = param_1 + 1) {
        bVar2 = true;
        cVar1 = *param_2;
        pcVar6 = param_2;
        pcVar3 = param_1;
        while (cVar1 != '\0') {
          cVar1 = *pcVar3;
          iVar5 = _toupper((int)*pcVar6);
          iVar4 = _toupper((int)cVar1);
          if (iVar5 != iVar4) {
            bVar2 = false;
            break;
          }
          pcVar6 = pcVar6 + 1;
          pcVar3 = pcVar3 + 1;
          cVar1 = *pcVar6;
        }
        if (bVar2) break;
        local_c = local_c + 1;
      }
    }
    else {
      for (; *param_1 != '\0'; param_1 = param_1 + 1) {
        bVar2 = true;
        cVar1 = *param_2;
        pcVar6 = param_2;
        pcVar3 = param_1;
        while (cVar1 != '\0') {
          if (*pcVar6 != *pcVar3) {
            bVar2 = false;
            break;
          }
          pcVar6 = pcVar6 + 1;
          pcVar3 = pcVar3 + 1;
          cVar1 = *pcVar6;
        }
        if (bVar2) break;
        local_c = local_c + 1;
      }
    }
  }
  if (!bVar2) {
    local_c = -1;
  }
  return local_c;
}


