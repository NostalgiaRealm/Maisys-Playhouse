
/* ==== FUN_00409579 @ 00409579 ==== 
 * signature: CHAR __stdcall FUN_00409579(void)
 * body: 00409579-0040959b
 */

CHAR FUN_00409579(void)

{
  CHAR local_104 [256];
  
  GetTempPathA(0x100,local_104);
  return local_104[0];
}


