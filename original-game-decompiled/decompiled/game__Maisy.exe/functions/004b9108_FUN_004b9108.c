
/* ==== FUN_004b9108 @ 004b9108 ==== 
 * signature: undefined __stdcall FUN_004b9108(uint param_1, CString * param_2)
 * body: 004b9108-004b914c
 */

void FUN_004b9108(uint param_1,CString *param_2)

{
  uchar *puVar1;
  int iVar2;
  
  puVar1 = (uchar *)FUN_004ac16a(param_2,0xff);
  iVar2 = AfxLoadString(param_1,(char *)puVar1,0x100);
  if (iVar2 != 0) {
    puVar1 = __mbschr(puVar1,10);
    if (puVar1 != (uchar *)0x0) {
      *puVar1 = '\0';
    }
  }
  CString::ReleaseBuffer(param_2,-1);
  return;
}


