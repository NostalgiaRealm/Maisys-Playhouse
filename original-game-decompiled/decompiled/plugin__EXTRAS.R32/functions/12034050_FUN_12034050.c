
/* ==== FUN_12034050 @ 12034050 ==== 
 * signature: undefined __cdecl FUN_12034050(char * param_1)
 * body: 12034050-12034075
 */

void __cdecl FUN_12034050(char *param_1)

{
  size_t sVar1;
  char *_Dest;
  
  sVar1 = _strlen(param_1);
  _Dest = (char *)FUN_1202c7e0(sVar1 + 1);
  if (_Dest != (char *)0x0) {
    FID_conflict___mbscpy(_Dest,param_1);
  }
  return;
}


