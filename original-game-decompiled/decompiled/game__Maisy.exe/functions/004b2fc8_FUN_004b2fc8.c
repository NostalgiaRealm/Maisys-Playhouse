
/* ==== FUN_004b2fc8 @ 004b2fc8 ==== 
 * signature: int * __thiscall FUN_004b2fc8(void * this, LPCSTR param_1)
 * body: 004b2fc8-004b312e
 */

int * __thiscall FUN_004b2fc8(void *this,LPCSTR param_1)

{
  CFrameWnd *pCVar1;
  uchar *puVar2;
  int iVar3;
  int *piVar4;
  CWnd *this_00;
  CFrameWnd *pCVar5;
  int iVar6;
  int *piVar7;
  CHAR local_318 [260];
  uchar local_214 [260];
  char local_110 [260];
  undefined4 *local_c;
  int *local_8;
  
  local_c = *(undefined4 **)((int)this + 8);
  iVar6 = 0;
  piVar7 = (int *)0x0;
  local_8 = (int *)0x0;
  if (*param_1 == '\"') {
    param_1 = param_1 + 1;
  }
  lstrcpynA((LPSTR)local_214,param_1,0x104);
  puVar2 = __mbsrchr(local_214,0x22);
  if (puVar2 != (uchar *)0x0) {
    *puVar2 = '\0';
  }
  AfxFullPath(local_110,(char *)local_214);
  iVar3 = FUN_004a7052();
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_004a7052();
    (**(code **)(*piVar4 + 0x78))();
  }
  iVar3 = FUN_004ae1cb();
  if (iVar3 != 0) {
    lstrcpyA(local_110,local_318);
  }
  do {
    if (local_c == (undefined4 *)0x0) break;
    piVar4 = (int *)local_c[2];
    local_c = (undefined4 *)*local_c;
    iVar3 = (**(code **)(*piVar4 + 0x6c))(local_110,&local_8);
    if (iVar6 < iVar3) {
      iVar6 = iVar3;
      piVar7 = piVar4;
    }
  } while (iVar3 != 5);
  if (local_8 == (int *)0x0) {
    if (piVar7 == (int *)0x0) {
      AfxMessageBox(0xf101,0,0xffffffff);
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)(**(code **)(*piVar7 + 0x84))(local_110,1);
    }
  }
  else {
    local_c = (undefined4 *)(**(code **)(*local_8 + 100))();
    if (local_c != (undefined4 *)0x0) {
      this_00 = (CWnd *)(**(code **)(*local_8 + 0x68))(&local_c);
      pCVar5 = CWnd::GetParentFrame(this_00);
      if (pCVar5 != (CFrameWnd *)0x0) {
        (**(code **)(*(int *)pCVar5 + 0xd0))(0xffffffff);
      }
      iVar6 = FUN_004bafca();
      pCVar1 = *(CFrameWnd **)(*(int *)(iVar6 + 4) + 0x1c);
      if (pCVar1 != pCVar5) {
        (**(code **)(*(int *)pCVar1 + 0xd0))(0xffffffff);
      }
    }
  }
  return local_8;
}


