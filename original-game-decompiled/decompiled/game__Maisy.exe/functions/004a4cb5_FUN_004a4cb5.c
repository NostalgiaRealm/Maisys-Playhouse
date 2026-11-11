
/* ==== FUN_004a4cb5 @ 004a4cb5 ==== 
 * signature: undefined __fastcall FUN_004a4cb5(CString * param_1)
 * body: 004a4cb5-004a4d03
 */

void __fastcall FUN_004a4cb5(CString *param_1)

{
  uchar uVar1;
  int iVar2;
  uchar *_Ptr;
  uchar *puVar3;
  
  puVar3 = (uchar *)0x0;
  CString::CopyBeforeWrite(param_1);
  _Ptr = *(uchar **)param_1;
  uVar1 = *_Ptr;
  while (uVar1 != '\0') {
    iVar2 = __ismbcspace((int)(char)*_Ptr);
    if (iVar2 == 0) {
      puVar3 = (uchar *)0x0;
    }
    else if (puVar3 == (uchar *)0x0) {
      puVar3 = _Ptr;
    }
    _Ptr = __mbsinc(_Ptr);
    uVar1 = *_Ptr;
  }
  if (puVar3 != (uchar *)0x0) {
    *puVar3 = '\0';
    *(int *)(*(int *)param_1 + -8) = (int)puVar3 - *(int *)param_1;
  }
  return;
}


