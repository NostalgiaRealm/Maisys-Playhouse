
/* ==== NewAssoc @ 004a5d48 ==== 
 * signature: int * __fastcall NewAssoc(int param_1)
 * body: 004a5d48-004a5da9
 * note: Library Function - Multiple Matches With Same Base Name  protected: struct CMapStringToOb::CAssoc * __thiscall CMapStringToOb::NewAssoc(void)  protected: struct CMapStringToPtr::CAssoc * __thiscall CMapStringToPtr::NewAssoc(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    protected: struct CMapStringToOb::CAssoc * __thiscall CMapStringToOb::NewAssoc(void)
    protected: struct CMapStringToPtr::CAssoc * __thiscall CMapStringToPtr::NewAssoc(void)
   
   Library: Visual Studio 1998 Release */

int * __fastcall NewAssoc(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  CPlex *pCVar4;
  undefined **_Src;
  size_t _Size;
  
  piVar1 = (int *)(param_1 + 0x10);
  if (*piVar1 == 0) {
    pCVar4 = CPlex::Create((CPlex **)(param_1 + 0x14),*(uint *)(param_1 + 0x18),0x10);
    iVar2 = *(int *)(param_1 + 0x18);
    pCVar4 = pCVar4 + iVar2 * 0x10 + -0xc;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      *(int *)pCVar4 = *piVar1;
      *piVar1 = (int)pCVar4;
      pCVar4 = pCVar4 + -0x10;
    }
  }
  piVar3 = (int *)*piVar1;
  _Size = 4;
  *piVar1 = *piVar3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  _Src = FUN_004abb3e();
  FID_conflict__memcpy(piVar3 + 2,_Src,_Size);
  piVar3[3] = 0;
  return piVar3;
}


