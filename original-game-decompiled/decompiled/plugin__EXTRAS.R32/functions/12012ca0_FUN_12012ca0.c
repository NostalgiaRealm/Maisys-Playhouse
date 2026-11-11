
/* ==== FUN_12012ca0 @ 12012ca0 ==== 
 * signature: undefined4 __cdecl FUN_12012ca0(undefined4 param_1, uint * param_2)
 * body: 12012ca0-12012ccb
 */

undefined4 __cdecl FUN_12012ca0(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_120271d0(param_2,(uint *)s_msgflag_12037710);
  if ((char)uVar1 == '\0') {
    FUN_120271d0(param_2,(uint *)s_sendcommand_120376fc);
  }
  return 0x10000;
}


