
/* ==== FUN_1000ce70 @ 1000ce70 ==== 
 * signature: undefined4 __stdcall FUN_1000ce70(void)
 * body: 1000ce70-1000d129
 */

undefined4 FUN_1000ce70(void)

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
  if (DAT_10016fb0 == 0) {
    PTR_DAT_10013618 = &DAT_10013622;
    PTR_DAT_1001361c = &DAT_10013622;
    FUN_1000bff0((undefined *)DAT_10017264);
    FUN_1000bff0((undefined *)DAT_10017268);
    DAT_10017264 = (undefined2 *)0x0;
    DAT_10017268 = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_10016fc0 != 0) ||
     (iVar4 = FUN_1000efd0(0,(uint)DAT_1001727c,0xb,(char *)&DAT_10016fc0), iVar4 == 0)) {
    local_18 = (undefined2 *)FUN_1000c060(0x202);
    local_1c = (undefined2 *)FUN_1000c060(0x202);
    pCVar11 = (LPCSTR)FUN_1000c060(0x101);
    pWVar10 = (LPCWSTR)FUN_1000c060(0x202);
    if ((local_18 != (undefined2 *)0x0) &&
       (((local_1c != (undefined2 *)0x0 && (pCVar11 != (LPCSTR)0x0)) && (pWVar10 != (LPCWSTR)0x0))))
    {
      iVar4 = 0;
      do {
        pCVar11[iVar4] = (CHAR)iVar4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x100);
      BVar5 = GetCPInfo(DAT_10016fc0,&local_14);
      if ((BVar5 != 0) && (local_14.MaxCharSize < 3)) {
        DAT_10013608 = local_14.MaxCharSize & 0xffff;
        if ((1 < DAT_10013608) && (local_14.LeadByte[0] != '\0')) {
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
        BVar5 = FUN_1000df40(1,pCVar11,0x100,pWVar2,0,0);
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
          BVar5 = FUN_1000ddb0(1,pWVar10,0x100,pWVar3,0,0);
          if (BVar5 != 0) {
            *local_1c = 0;
            if ((1 < (int)DAT_10013608) && (local_14.LeadByte[0] != '\0')) {
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
            PTR_DAT_10013618 = (undefined *)pWVar2;
            PTR_DAT_1001361c = (undefined *)pWVar3;
            if (DAT_10017264 != (undefined2 *)0x0) {
              FUN_1000bff0((undefined *)DAT_10017264);
            }
            DAT_10017264 = local_18;
            if (DAT_10017268 != (undefined2 *)0x0) {
              FUN_1000bff0((undefined *)DAT_10017268);
            }
            DAT_10017268 = local_1c;
            FUN_1000bff0(pCVar11);
            FUN_1000bff0((undefined *)pWVar10);
            return 0;
          }
        }
      }
    }
  }
  FUN_1000bff0((undefined *)local_18);
  FUN_1000bff0((undefined *)local_1c);
  FUN_1000bff0(pCVar11);
  FUN_1000bff0((undefined *)pWVar10);
  return 1;
}


