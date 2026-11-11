
/* ==== FUN_004704b0 @ 004704b0 ==== 
 * signature: char __cdecl FUN_004704b0(char * param_1, undefined4 param_2, undefined4 param_3, char * param_4)
 * body: 004704b0-004705d8
 */

char __cdecl FUN_004704b0(char *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  HMMIO pHVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  char local_108 [259];
  char local_5;
  
  cVar6 = '\0';
  if (param_1 == (char *)0x0) {
    return '\0';
  }
  FUN_0046ead0(param_1,param_2,local_108);
  iVar2 = FUN_0046e9f0(local_108,&DAT_004dbc5c);
  local_5 = (char)iVar2;
  pHVar3 = mmioOpenA(local_108,(LPMMIOINFO)0x0,0x4000);
  if (pHVar3 == (HMMIO)0x0) {
    if (local_5 == '\0') goto LAB_004705a6;
    uVar4 = 0xffffffff;
    pcVar7 = local_108;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_108[~uVar4 - 5] = '\0';
    FUN_0046e9f0(local_108,&DAT_004dbc54);
    pHVar3 = mmioOpenA(local_108,(LPMMIOINFO)0x0,0x4000);
    if (pHVar3 == (HMMIO)0x0) {
      uVar4 = 0xffffffff;
      pcVar7 = local_108;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_108[~uVar4 - 5] = '\0';
      FUN_0046e9f0(local_108,&DAT_004dc9a0);
      pHVar3 = mmioOpenA(local_108,(LPMMIOINFO)0x0,0x4000);
      if (pHVar3 == (HMMIO)0x0) goto LAB_004705a6;
    }
  }
  cVar6 = '\x01';
LAB_004705a6:
  if (cVar6 != '\0') {
    uVar4 = 0xffffffff;
    pcVar7 = local_108;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar8 + -uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)param_4 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      param_4 = param_4 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      param_4 = param_4 + 1;
    }
  }
  return cVar6;
}


