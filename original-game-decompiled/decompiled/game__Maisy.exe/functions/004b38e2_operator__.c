
/* ==== operator<< @ 004b38e2 ==== 
 * signature: CArchive * __stdcall operator<<(CArchive * param_1, CString * param_2)
 * body: 004b38e2-004b39c7
 * note: Library Function - Single Match  class CArchive & __stdcall operator<<(class CArchive &,class CString const &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    class CArchive & __stdcall operator<<(class CArchive &,class CString const &)
   
   Library: Visual Studio 1998 Release */

CArchive * operator<<(CArchive *param_1,CString *param_2)

{
  CArchive *pCVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(*(int *)param_2 + -8);
  if (iVar3 < 0xff) {
    pCVar1 = param_1 + 0x24;
    if (*(uint *)(param_1 + 0x28) < *(int *)pCVar1 + 1U) {
      CArchive::Flush(param_1);
    }
    **(undefined1 **)pCVar1 = (char)iVar3;
    *(int *)pCVar1 = *(int *)pCVar1 + 1;
  }
  else {
    pCVar1 = param_1 + 0x24;
    if (iVar3 < 0xfffe) {
      if (*(uint *)(param_1 + 0x28) < *(int *)pCVar1 + 1U) {
        CArchive::Flush(param_1);
      }
      **(undefined1 **)pCVar1 = 0xff;
      iVar3 = *(int *)pCVar1;
      *(int *)pCVar1 = iVar3 + 1;
      uVar2 = *(undefined2 *)(*(int *)param_2 + -8);
      if (*(uint *)(param_1 + 0x28) < iVar3 + 3U) {
        CArchive::Flush(param_1);
      }
      **(undefined2 **)pCVar1 = uVar2;
      *(int *)pCVar1 = *(int *)pCVar1 + 2;
    }
    else {
      if (*(uint *)(param_1 + 0x28) < *(int *)pCVar1 + 1U) {
        CArchive::Flush(param_1);
      }
      **(undefined1 **)pCVar1 = 0xff;
      iVar3 = *(int *)pCVar1;
      *(int *)pCVar1 = iVar3 + 1;
      if (*(uint *)(param_1 + 0x28) < iVar3 + 3U) {
        CArchive::Flush(param_1);
      }
      **(undefined2 **)pCVar1 = 0xffff;
      iVar3 = *(int *)pCVar1;
      *(int *)pCVar1 = iVar3 + 2;
      uVar4 = *(undefined4 *)(*(int *)param_2 + -8);
      if (*(uint *)(param_1 + 0x28) < iVar3 + 6U) {
        CArchive::Flush(param_1);
      }
      **(undefined4 **)pCVar1 = uVar4;
      *(int *)pCVar1 = *(int *)pCVar1 + 4;
    }
  }
  CArchive::Write(param_1,*(void **)param_2,*(uint *)((int)*(void **)param_2 + -8));
  return param_1;
}


