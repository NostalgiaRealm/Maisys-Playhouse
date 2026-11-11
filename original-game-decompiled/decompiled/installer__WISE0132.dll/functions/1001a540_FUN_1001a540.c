
/* ==== FUN_1001a540 @ 1001a540 ==== 
 * signature: undefined4 __stdcall FUN_1001a540(void)
 * body: 1001a540-1001a7fa
 */

undefined4 FUN_1001a540(void)

{
  BYTE *pBVar1;
  LPWORD pWVar2;
  LPWORD pWVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  BYTE *pBVar7;
  LPCWSTR pWVar8;
  undefined2 *puVar9;
  LPCWSTR pWVar10;
  LPCSTR pCVar11;
  undefined2 *local_1c;
  undefined2 *local_18;
  _cpinfo local_14;
  
  pCVar11 = (LPCSTR)0x0;
  pWVar10 = (LPCWSTR)0x0;
  if (DAT_100233f8 == 0) {
    PTR_DAT_1001fec8 = &DAT_1001fed2;
    PTR_DAT_1001fecc = &DAT_1001fed2;
    FUN_10015a50((undefined *)DAT_10023774);
    FUN_10015a50((undefined *)DAT_10023778);
    DAT_10023774 = (undefined2 *)0x0;
    DAT_10023778 = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_10023408 != 0) ||
     (iVar4 = FUN_1001ae10(0,(uint)DAT_1002378c,0xb,(char *)&DAT_10023408), iVar4 == 0)) {
    local_18 = (undefined2 *)FUN_10015d50(0x202);
    local_1c = (undefined2 *)FUN_10015d50(0x202);
    pCVar11 = (LPCSTR)FUN_10015d50(0x101);
    pWVar10 = (LPCWSTR)FUN_10015d50(0x202);
    if ((local_18 != (undefined2 *)0x0) &&
       (((local_1c != (undefined2 *)0x0 && (pCVar11 != (LPCSTR)0x0)) && (pWVar10 != (LPCWSTR)0x0))))
    {
      iVar4 = 0;
      do {
        pCVar11[iVar4] = (CHAR)iVar4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x100);
      BVar5 = GetCPInfo(DAT_10023408,&local_14);
      if ((BVar5 != 0) && (local_14.MaxCharSize < 3)) {
        DAT_100200d4 = local_14.MaxCharSize & 0xffff;
        if ((1 < DAT_100200d4) && (local_14.LeadByte[0] != '\0')) {
          pBVar7 = local_14.LeadByte + 1;
          do {
            if (*pBVar7 == 0) break;
            uVar6 = (uint)pBVar7[-1];
            if (uVar6 <= *pBVar7) {
              do {
                pCVar11[uVar6] = '\0';
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 <= (int)(uint)*pBVar7);
            }
            pBVar1 = pBVar7 + 1;
            pBVar7 = pBVar7 + 2;
          } while (*pBVar1 != 0);
        }
        pWVar2 = local_18 + 1;
        BVar5 = FUN_10017bc0(1,pCVar11,0x100,pWVar2,0,0,0);
        if (BVar5 != 0) {
          *local_18 = 0;
          iVar4 = 0;
          pWVar8 = pWVar10;
          do {
            *pWVar8 = (WCHAR)iVar4;
            pWVar8 = pWVar8 + 1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x100);
          pWVar3 = local_1c + 1;
          BVar5 = FUN_10017a30(1,pWVar10,0x100,pWVar3,0,0);
          if (BVar5 != 0) {
            *local_1c = 0;
            if ((1 < (int)DAT_100200d4) && (local_14.LeadByte[0] != '\0')) {
              pBVar7 = local_14.LeadByte + 1;
              do {
                if (*pBVar7 == 0) break;
                uVar6 = (uint)pBVar7[-1];
                if (uVar6 <= *pBVar7) {
                  puVar9 = local_18 + uVar6 + 1;
                  do {
                    *puVar9 = 0x8000;
                    uVar6 = uVar6 + 1;
                    puVar9 = puVar9 + 1;
                  } while ((int)uVar6 <= (int)(uint)*pBVar7);
                }
                pBVar1 = pBVar7 + 1;
                pBVar7 = pBVar7 + 2;
              } while (*pBVar1 != 0);
            }
            PTR_DAT_1001fec8 = (undefined *)pWVar2;
            PTR_DAT_1001fecc = (undefined *)pWVar3;
            if (DAT_10023774 != (undefined2 *)0x0) {
              FUN_10015a50((undefined *)DAT_10023774);
            }
            DAT_10023774 = local_18;
            if (DAT_10023778 != (undefined2 *)0x0) {
              FUN_10015a50((undefined *)DAT_10023778);
            }
            DAT_10023778 = local_1c;
            FUN_10015a50(pCVar11);
            FUN_10015a50((undefined *)pWVar10);
            return 0;
          }
        }
      }
    }
  }
  FUN_10015a50((undefined *)local_18);
  FUN_10015a50((undefined *)local_1c);
  FUN_10015a50(pCVar11);
  FUN_10015a50((undefined *)pWVar10);
  return 1;
}


