
/* ==== FUN_10016310 @ 10016310 ==== 
 * signature: char * __cdecl FUN_10016310(uint param_1, char * param_2, uint param_3)
 * body: 10016310-1001643a
 */

char * __cdecl FUN_10016310(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char local_10c [4];
  LPSTR local_108;
  CHAR local_104 [260];
  
  if (param_1 == 0) {
    DVar4 = GetCurrentDirectoryA(0x104,local_104);
  }
  else {
    iVar2 = FUN_10016440(param_1);
    if (iVar2 == 0) {
      pDVar3 = FUN_10018230();
      *pDVar3 = 0xf;
      pDVar3 = FUN_10018220();
      *pDVar3 = 0xd;
      return (char *)0x0;
    }
    local_10c[0] = (char)param_1 + '@';
    local_10c[1] = 0x3a;
    local_10c[2] = 0x2e;
    local_10c[3] = 0;
    DVar4 = GetFullPathNameA(local_10c,0x104,local_104,&local_108);
  }
  if ((DVar4 == 0) || (uVar5 = DVar4 + 1, 0x104 < uVar5)) {
    return (char *)0x0;
  }
  if (param_2 == (char *)0x0) {
    if ((int)uVar5 <= (int)param_3) {
      uVar5 = param_3;
    }
    param_2 = (char *)FUN_10015d50(uVar5);
    if (param_2 == (char *)0x0) {
      pDVar3 = FUN_10018220();
      *pDVar3 = 0xc;
      return (char *)0x0;
    }
  }
  else if ((int)param_3 < (int)uVar5) {
    pDVar3 = FUN_10018220();
    *pDVar3 = 0x22;
    return (char *)0x0;
  }
  uVar5 = 0xffffffff;
  pcVar7 = local_104;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = param_2;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return param_2;
}


