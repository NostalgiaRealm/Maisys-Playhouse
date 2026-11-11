
/* ==== FUN_100147fa @ 100147fa ==== 
 * signature: LPCSTR __cdecl FUN_100147fa(LPCSTR param_1, int param_2)
 * body: 100147fa-10014818
 */

LPCSTR __cdecl FUN_100147fa(LPCSTR param_1,int param_2)

{
  while( true ) {
    if (*param_1 == '\0') {
      return (LPCSTR)0x0;
    }
    if (*param_1 == param_2) break;
    param_1 = CharNextA(param_1);
  }
  return param_1;
}


