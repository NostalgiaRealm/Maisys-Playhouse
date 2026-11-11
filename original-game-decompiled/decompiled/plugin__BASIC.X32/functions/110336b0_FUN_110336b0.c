
/* ==== FUN_110336b0 @ 110336b0 ==== 
 * signature: undefined __cdecl FUN_110336b0(char * param_1)
 * body: 110336b0-110336d5
 */

void __cdecl FUN_110336b0(char *param_1)

{
  size_t sVar1;
  char *_Dest;
  
  sVar1 = _strlen(param_1);
  _Dest = (char *)FUN_11029420(sVar1 + 1);
  if (_Dest != (char *)0x0) {
    FID_conflict___mbscpy(_Dest,param_1);
  }
  return;
}


