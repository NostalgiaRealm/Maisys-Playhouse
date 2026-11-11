
/* ==== FUN_10011fc8 @ 10011fc8 ==== 
 * signature: undefined __cdecl FUN_10011fc8(int param_1)
 * body: 10011fc8-10011ff2
 */

void __cdecl FUN_10011fc8(int param_1)

{
  CHAR local_14 [16];
  
  wsprintfA(local_14,&DAT_1001f6c0,param_1 + 0x41);
  GetDriveTypeA(local_14);
  return;
}


