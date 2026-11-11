
/* ==== FUN_0043c480 @ 0043c480 ==== 
 * signature: undefined __cdecl FUN_0043c480(char * param_1, int param_2, int param_3, int param_4)
 * body: 0043c480-0043c545
 */

void __cdecl FUN_0043c480(char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  HINSTANCE hInstance;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  CHAR local_34 [40];
  CHAR local_c [4];
  int local_8;
  
  local_8 = 0;
  iVar2 = FUN_004bafca();
  hInstance = *(HINSTANCE *)(iVar2 + 8);
  iVar2 = LoadStringA(hInstance,param_3 - 1,local_c,4);
  if (iVar2 != 0) {
    local_8 = _atoi(local_c);
  }
  *param_1 = '\0';
  if ((0 < param_4) && (param_4 <= local_8)) {
    iVar2 = LoadStringA(hInstance,param_3 + param_4,param_1,param_2);
    if (iVar2 == 0) {
      *param_1 = '\0';
    }
  }
  if (*param_1 == '\0') {
    iVar2 = LoadStringA(hInstance,param_3 - 2,local_34,0x28);
    if (iVar2 != 0) {
      _sprintf(param_1,local_34,param_4);
      return;
    }
    uVar3 = 0xffffffff;
    pcVar5 = s_Unable_to_load_Error_string__004db538;
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      param_1 = param_1 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      param_1 = param_1 + 1;
    }
  }
  return;
}


