
/* ==== ___init_ctype @ 1102f550 ==== 
 * signature: int __cdecl ___init_ctype(threadlocinfo * _LocInfo)
 * body: 1102f550-1102f7fb
 * note: Library Function - Single Match  ___init_ctype  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___init_ctype
   
   Library: Visual Studio 1998 Release */

int __cdecl ___init_ctype(threadlocinfo *_LocInfo)

{
  byte bVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  BOOL BVar5;
  uint uVar6;
  undefined1 *puVar7;
  LPCWSTR pWVar8;
  undefined2 *puVar9;
  BYTE *pBVar10;
  void *unaff_EBP;
  undefined1 *_DWInfoType;
  LPCWSTR local_18;
  _cpinfo local_14;
  
  _DWInfoType = (undefined1 *)0x0;
  local_18 = (LPCWSTR)0x0;
  if (DAT_11036c80 == 0) {
    PTR_DAT_11036a38 = &DAT_11036a42;
    PTR_DAT_11036a3c = &DAT_11036a42;
    FUN_11029180(DAT_11037234);
    FUN_11029180(DAT_11037238);
    DAT_11037234 = (undefined2 *)0x0;
    DAT_11037238 = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_11036c90 != 0) ||
     (iVar2 = ___getlocaleinfo((_locale_t)0x0,(uint)DAT_1103724c,(LPCWSTR)0xb,0x11036c90,unaff_EBP),
     puVar4 = (undefined2 *)local_14.MaxCharSize, puVar3 = (undefined2 *)local_14.MaxCharSize,
     iVar2 == 0)) {
    puVar3 = (undefined2 *)FUN_11029420(0x202);
    puVar4 = (undefined2 *)FUN_11029420(0x202);
    _DWInfoType = (undefined1 *)FUN_11029420(0x101);
    local_18 = (LPCWSTR)FUN_11029420(0x202);
    if ((puVar3 != (undefined2 *)0x0) &&
       (((puVar4 != (undefined2 *)0x0 && (_DWInfoType != (undefined1 *)0x0)) &&
        (local_18 != (LPCWSTR)0x0)))) {
      iVar2 = 0;
      puVar7 = _DWInfoType;
      do {
        *puVar7 = (char)iVar2;
        puVar7 = puVar7 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x100);
      BVar5 = GetCPInfo(DAT_11036c90,&local_14);
      if ((BVar5 != 0) && (local_14.MaxCharSize < (undefined2 *)0x3)) {
        DAT_11036a28 = local_14.MaxCharSize & 0xffff;
        if (1 < DAT_11036a28) {
          pBVar10 = local_14.LeadByte;
          bVar1 = local_14.LeadByte[0];
          while ((bVar1 != 0 && (pBVar10[1] != 0))) {
            uVar6 = (uint)*pBVar10;
            if (uVar6 <= pBVar10[1]) {
              do {
                _DWInfoType[uVar6] = 0;
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 <= (int)(uint)pBVar10[1]);
            }
            pBVar10 = pBVar10 + 2;
            bVar1 = *pBVar10;
          }
        }
        BVar5 = ___crtGetStringTypeA
                          ((_locale_t)0x1,(DWORD)_DWInfoType,(LPCSTR)0x100,(int)(puVar3 + 1),
                           (LPWORD)0x0,0,(BOOL)unaff_EBP);
        if (BVar5 != 0) {
          *puVar3 = 0;
          iVar2 = 0;
          pWVar8 = local_18;
          do {
            *pWVar8 = (WCHAR)iVar2;
            pWVar8 = pWVar8 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0x100);
          BVar5 = ___crtGetStringTypeW(1,local_18,0x100,puVar4 + 1,0,0);
          if (BVar5 != 0) {
            *puVar4 = 0;
            if (1 < (int)DAT_11036a28) {
              pBVar10 = local_14.LeadByte;
              while ((local_14.LeadByte[0] != 0 && (pBVar10[1] != 0))) {
                uVar6 = (uint)*pBVar10;
                if (uVar6 <= pBVar10[1]) {
                  puVar9 = puVar3 + uVar6 + 1;
                  do {
                    *puVar9 = 0x8000;
                    puVar9 = puVar9 + 1;
                    uVar6 = uVar6 + 1;
                  } while ((int)uVar6 <= (int)(uint)pBVar10[1]);
                }
                pBVar10 = pBVar10 + 2;
                local_14.LeadByte[0] = *pBVar10;
              }
            }
            PTR_DAT_11036a38 = (undefined *)(puVar3 + 1);
            PTR_DAT_11036a3c = (undefined *)(puVar4 + 1);
            if (DAT_11037234 != (LPVOID)0x0) {
              FUN_11029180(DAT_11037234);
            }
            DAT_11037234 = puVar3;
            if (DAT_11037238 != (LPVOID)0x0) {
              FUN_11029180(DAT_11037238);
            }
            DAT_11037238 = puVar4;
            FUN_11029180(_DWInfoType);
            FUN_11029180(local_18);
            return 0;
          }
        }
      }
    }
  }
  FUN_11029180(puVar3);
  FUN_11029180(puVar4);
  FUN_11029180(_DWInfoType);
  FUN_11029180(local_18);
  return 1;
}


