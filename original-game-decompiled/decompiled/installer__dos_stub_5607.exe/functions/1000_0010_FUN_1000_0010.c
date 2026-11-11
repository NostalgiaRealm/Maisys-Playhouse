
/* ==== FUN_1000_0010 @ 1000:0010 ==== 
 * signature: undefined __cdecl16near FUN_1000_0010(void)
 * body: 1000:0010-1000:006c;1000:006e-1000:00a5
 */

undefined2 __cdecl16near FUN_1000_0010(undefined2 param_1,undefined2 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  char local_204 [512];
  char *local_4;
  
  pcVar7 = (char *)*param_2;
  pcVar6 = local_204;
  uVar3 = 0xffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar7 + -uVar3;
  for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 2;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar2 = *pcVar1;
  }
  local_4 = (char *)0x0;
  pcVar6 = local_204;
  if (local_204[0] != '\0') {
    local_4 = (char *)0x0;
    do {
      if (*pcVar6 == '\\') {
        local_4 = pcVar6;
      }
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
  }
  if (local_4 == (char *)0x0) {
    local_4 = local_204;
  }
  else {
    local_4 = local_4 + 1;
  }
  pcVar6 = (char *)0x14a;
  pcVar7 = local_4;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 2;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  *pcVar7 = *pcVar6;
  FUN_1000_0fcc(local_204);
  FUN_1000_108c(local_204);
  FUN_1000_108c(*param_2);
  return 0;
}


