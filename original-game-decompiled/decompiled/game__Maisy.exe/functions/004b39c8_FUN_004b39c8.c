
/* ==== FUN_004b39c8 @ 004b39c8 ==== 
 * signature: CArchive * __stdcall FUN_004b39c8(CArchive * param_1, CString * param_2)
 * body: 004b39c8-004b3a5f
 */

CArchive * FUN_004b39c8(CArchive *param_1,CString *param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  undefined **ppuVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  
  uVar2 = ReadStringLength(param_1);
  bVar7 = uVar2 == 0xffffffff;
  if (bVar7) {
    uVar2 = ReadStringLength(param_1);
  }
  uVar6 = (uint)bVar7;
  uVar5 = (uVar6 + 1) * uVar2;
  if (uVar2 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = uVar6 + uVar5;
  }
  CString::GetBufferSetLength(param_2,iVar8);
  if (uVar2 != 0) {
    uVar3 = FUN_004b3e36(param_1,*(void **)param_2,uVar5);
    if (uVar3 != uVar5) {
      AfxThrowArchiveException(3,(char *)0x0);
    }
    if (uVar6 != 0) {
      puVar1 = *(ushort **)param_2;
      puVar1[uVar2] = 0;
      ppuVar4 = FUN_004abb3e();
      *(undefined **)param_2 = *ppuVar4;
      CString::operator=(param_2,puVar1);
      FUN_004a602d(puVar1 + -6);
    }
  }
  return param_1;
}


