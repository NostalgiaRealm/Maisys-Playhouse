
/* ==== FUN_100139a5 @ 100139a5 ==== 
 * signature: undefined __cdecl FUN_100139a5(undefined4 * param_1)
 * body: 100139a5-100139c8
 */

void __cdecl FUN_100139a5(undefined4 *param_1)

{
  if ((*(byte *)((int)param_1 + 0x25) & 4) == 0) {
    FUN_10013e71((HGLOBAL)param_1[0xc]);
  }
  else {
    DeleteMetaFile((HMETAFILE)param_1[0xd]);
  }
  *param_1 = 0;
  return;
}


