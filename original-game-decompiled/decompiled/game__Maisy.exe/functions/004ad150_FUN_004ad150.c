
/* ==== FUN_004ad150 @ 004ad150 ==== 
 * signature: undefined4 __thiscall FUN_004ad150(void * this, CString * param_1, int param_2, LPCSTR param_3, int param_4, int param_5)
 * body: 004ad150-004ad257
 */

undefined4 __thiscall
FUN_004ad150(void *this,CString *param_1,int param_2,LPCSTR param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  LPSTR lpString1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char local_108 [259];
  CHAR local_5;
  
  if (*(int *)(*(int *)(*(int *)((int)this + 8) + param_2 * 4) + -8) == 0) {
    uVar1 = 0;
  }
  else {
    lpString1 = (LPSTR)FUN_004ac16a(param_1,0x104);
    lstrcpyA(lpString1,*(LPCSTR *)(*(int *)((int)this + 8) + param_2 * 4));
    iVar2 = lstrlenA(lpString1);
    uVar3 = AfxGetFileName(lpString1,(char *)0x0,0);
    bVar5 = false;
    iVar2 = (iVar2 - uVar3) + 1;
    if (iVar2 == param_4) {
      local_5 = lpString1[iVar2];
      lpString1[param_4] = '\0';
      iVar4 = lstrcmpiA(param_3,lpString1);
      bVar5 = iVar4 == 0;
      lpString1[iVar2] = local_5;
    }
    if (bVar5) {
      AfxGetFileTitle(lpString1 + param_4,local_108,0x104);
      lstrcpynA(lpString1,local_108,0x104);
    }
    else if (*(int *)((int)this + 0x18) != -1) {
      AfxGetFileTitle(lpString1 + iVar2,local_108,0x104);
      lstrcpynA(lpString1 + iVar2,local_108,0x104 - iVar2);
      FUN_004ad638(lpString1,*(int *)((int)this + 0x18),param_5);
    }
    CString::ReleaseBuffer(param_1,-1);
    uVar1 = 1;
  }
  return uVar1;
}


