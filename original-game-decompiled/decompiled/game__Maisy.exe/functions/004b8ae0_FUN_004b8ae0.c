
/* ==== FUN_004b8ae0 @ 004b8ae0 ==== 
 * signature: undefined __thiscall FUN_004b8ae0(void * this, HDROP param_1)
 * body: 004b8ae0-004b8b55
 */

void __thiscall FUN_004b8ae0(void *this,HDROP param_1)

{
  int *piVar1;
  HWND pHVar2;
  UINT UVar3;
  int iVar4;
  UINT iFile;
  CHAR local_108 [260];
  
  iFile = 0;
  pHVar2 = SetActiveWindow(*(HWND *)((int)this + 0x1c));
  CWnd::FromHandle(pHVar2);
  UVar3 = DragQueryFileA(param_1,0xffffffff,(LPSTR)0x0,0);
  iVar4 = FUN_004bafca();
  piVar1 = *(int **)(iVar4 + 4);
  if (UVar3 != 0) {
    do {
      DragQueryFileA(param_1,iFile,local_108,0x104);
      iFile = iFile + 1;
      (**(code **)(*piVar1 + 0x80))(local_108);
    } while (iFile < UVar3);
  }
  DragFinish(param_1);
  return;
}


