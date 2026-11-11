
/* ==== FUN_10018c10 @ 10018c10 ==== 
 * signature: undefined __stdcall FUN_10018c10(void)
 * body: 10018c10-10018de9
 */

void FUN_10018c10(void)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  BYTE *pBVar5;
  ushort *puVar6;
  CHAR *pCVar7;
  _cpinfo local_514;
  CHAR local_500 [256];
  WCHAR local_400 [128];
  WCHAR local_300 [128];
  WORD local_200 [256];
  
  BVar1 = GetCPInfo(DAT_10023730,&local_514);
  if (BVar1 == 1) {
    uVar2 = 0;
    do {
      local_500[uVar2] = (CHAR)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
    local_500[0] = ' ';
    if (local_514.LeadByte[0] != 0) {
      pBVar5 = local_514.LeadByte + 1;
      do {
        uVar2 = (uint)local_514.LeadByte[0];
        if (uVar2 <= *pBVar5) {
          uVar3 = (*pBVar5 - uVar2) + 1;
          uVar4 = uVar3 >> 2;
          pCVar7 = local_500 + uVar2;
          while (uVar4 != 0) {
            uVar4 = uVar4 - 1;
            builtin_memcpy(pCVar7,"    ",4);
            pCVar7 = pCVar7 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pCVar7 = ' ';
            pCVar7 = pCVar7 + 1;
          }
        }
        local_514.LeadByte[0] = pBVar5[1];
        pBVar5 = pBVar5 + 2;
      } while (local_514.LeadByte[0] != 0);
    }
    FUN_10017bc0(1,local_500,0x100,local_200,DAT_10023730,DAT_10023734,0);
    FUN_10017d00(DAT_10023734,0x100,local_500,(LPCWSTR)0x100,local_400,0x100,DAT_10023730,0);
    FUN_10017d00(DAT_10023734,0x200,local_500,(LPCWSTR)0x100,local_300,0x100,DAT_10023730,0);
    uVar2 = 0;
    puVar6 = local_200;
    do {
      if ((*puVar6 & 1) == 0) {
        if ((*puVar6 & 2) == 0) {
          (&DAT_10023630)[uVar2] = 0;
        }
        else {
          *(byte *)((int)&DAT_10023528 + uVar2 + 1) =
               *(byte *)((int)&DAT_10023528 + uVar2 + 1) | 0x20;
          (&DAT_10023630)[uVar2] = *(undefined1 *)((int)local_300 + uVar2);
        }
      }
      else {
        *(byte *)((int)&DAT_10023528 + uVar2 + 1) = *(byte *)((int)&DAT_10023528 + uVar2 + 1) | 0x10
        ;
        (&DAT_10023630)[uVar2] = *(undefined1 *)((int)local_400 + uVar2);
      }
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar2 < 0x100);
    return;
  }
  uVar2 = 0;
  do {
    if ((uVar2 < 0x41) || (0x5a < uVar2)) {
      if ((uVar2 < 0x61) || (0x7a < uVar2)) {
        (&DAT_10023630)[uVar2] = 0;
      }
      else {
        *(byte *)((int)&DAT_10023528 + uVar2 + 1) = *(byte *)((int)&DAT_10023528 + uVar2 + 1) | 0x20
        ;
        (&DAT_10023630)[uVar2] = (char)uVar2 + -0x20;
      }
    }
    else {
      *(byte *)((int)&DAT_10023528 + uVar2 + 1) = *(byte *)((int)&DAT_10023528 + uVar2 + 1) | 0x10;
      (&DAT_10023630)[uVar2] = (char)uVar2 + ' ';
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return;
}


