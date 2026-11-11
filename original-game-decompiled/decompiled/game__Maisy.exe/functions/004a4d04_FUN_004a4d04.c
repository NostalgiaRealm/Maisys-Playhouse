
/* ==== FUN_004a4d04 @ 004a4d04 ==== 
 * signature: undefined __fastcall FUN_004a4d04(CString * param_1)
 * body: 004a4d04-004a4d5c
 */

void __fastcall FUN_004a4d04(CString *param_1)

{
  void *_Dst;
  int iVar1;
  uchar *_Ptr;
  
  CString::CopyBeforeWrite(param_1);
  _Ptr = *(uchar **)param_1;
  iVar1 = __ismbcspace((int)(char)*_Ptr);
  while (iVar1 != 0) {
    _Ptr = __mbsinc(_Ptr);
    iVar1 = __ismbcspace((int)(char)*_Ptr);
  }
  _Dst = *(void **)param_1;
  iVar1 = *(int *)((int)_Dst + -8) - (int)_Ptr;
  FID_conflict__memcpy(_Dst,_Ptr,iVar1 + 1 + (int)_Dst);
  *(int *)(*(int *)param_1 + -8) = iVar1 + (int)_Dst;
  return;
}


