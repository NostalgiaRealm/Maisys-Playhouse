
/* ==== FUN_10014010 @ 10014010 ==== 
 * signature: bool __cdecl FUN_10014010(undefined4 param_1, LPDWORD param_2)
 * body: 10014010-1001404b
 */

bool __cdecl FUN_10014010(undefined4 param_1,LPDWORD param_2)

{
  BOOL BVar1;
  CHAR local_14 [16];
  
  wsprintfA(local_14,&DAT_1001f6c0,param_1);
  BVar1 = GetDiskFreeSpaceA(local_14,param_2 + 2,param_2 + 3,param_2 + 1,param_2);
  return (bool)('\x01' - (BVar1 != 0));
}


