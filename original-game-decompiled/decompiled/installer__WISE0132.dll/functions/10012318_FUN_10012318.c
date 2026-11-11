
/* ==== FUN_10012318 @ 10012318 ==== 
 * signature: undefined __cdecl FUN_10012318(HANDLE param_1, WORD param_2, WORD param_3)
 * body: 10012318-1001234e
 */

void __cdecl FUN_10012318(HANDLE param_1,WORD param_2,WORD param_3)

{
  _FILETIME local_14;
  _FILETIME local_c;
  
  DosDateTimeToFileTime(param_2,param_3,&local_c);
  LocalFileTimeToFileTime(&local_c,&local_14);
  SetFileTime(param_1,(FILETIME *)0x0,(FILETIME *)0x0,&local_14);
  return;
}


