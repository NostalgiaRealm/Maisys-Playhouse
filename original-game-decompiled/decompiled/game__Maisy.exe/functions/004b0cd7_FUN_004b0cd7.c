
/* ==== FUN_004b0cd7 @ 004b0cd7 ==== 
 * signature: int __fastcall FUN_004b0cd7(int * param_1)
 * body: 004b0cd7-004b0d0e
 */

int __fastcall FUN_004b0cd7(int *param_1)

{
  int *piVar1;
  int iVar2;
  CHandleMap *this;
  
  piVar1 = param_1 + 1;
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    this = afxMapHWND(0);
    if (this != (CHandleMap *)0x0) {
      CMapPtrToPtr::RemoveKey((CMapPtrToPtr *)this,(void *)*piVar1);
    }
  }
  (**(code **)(*param_1 + 0x1c))();
  *piVar1 = 0;
  return iVar2;
}


