
/* ==== FUN_00492680 @ 00492680 ==== 
 * signature: undefined __cdecl FUN_00492680(char * param_1)
 * body: 00492680-004926a5
 */

void __cdecl FUN_00492680(char *param_1)

{
  size_t sVar1;
  char *_Dest;
  
  sVar1 = _strlen(param_1);
  _Dest = (char *)FUN_00490210(sVar1 + 1);
  if (_Dest != (char *)0x0) {
    FID_conflict___mbscpy(_Dest,param_1);
  }
  return;
}


