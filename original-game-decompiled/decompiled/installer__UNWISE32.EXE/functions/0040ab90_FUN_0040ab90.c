
/* ==== FUN_0040ab90 @ 0040ab90 ==== 
 * signature: char * __cdecl FUN_0040ab90(uint param_1, char * param_2, uint param_3)
 * body: 0040ab90-0040acb2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl FUN_0040ab90(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_10c [4];
  LPSTR local_108;
  CHAR local_104 [260];
  
  if (param_1 == 0) {
    DVar3 = GetCurrentDirectoryA(0x104,local_104);
  }
  else {
    iVar2 = FUN_0040acc0(param_1);
    if (iVar2 == 0) {
      DAT_00413468 = 0xf;
      _DAT_00413464 = 0xd;
      return (char *)0x0;
    }
    local_10c[0] = (char)param_1 + '@';
    local_10c[1] = 0x3a;
    local_10c[2] = 0x2e;
    local_10c[3] = 0;
    DVar3 = GetFullPathNameA(local_10c,0x104,local_104,&local_108);
  }
  if ((DVar3 == 0) || (uVar4 = DVar3 + 1, 0x104 < uVar4)) {
    return (char *)0x0;
  }
  if (param_2 == (char *)0x0) {
    if ((int)uVar4 <= (int)param_3) {
      uVar4 = param_3;
    }
    param_2 = (char *)FUN_0040ad40(uVar4);
    if (param_2 == (char *)0x0) {
      _DAT_00413464 = 0xc;
      return (char *)0x0;
    }
  }
  else if ((int)param_3 < (int)uVar4) {
    _DAT_00413464 = 0x22;
    return (char *)0x0;
  }
  uVar4 = 0xffffffff;
  pcVar6 = local_104;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = param_2;
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
  return param_2;
}


