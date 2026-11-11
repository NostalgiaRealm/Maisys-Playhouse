
/* ==== FUN_11004a70 @ 11004a70 ==== 
 * signature: undefined __cdecl FUN_11004a70(undefined4 * param_1, int param_2, undefined4 param_3)
 * body: 11004a70-11004aa8
 */

void __cdecl FUN_11004a70(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_11010c10(param_1,param_3,&local_c,0xc);
  *(undefined4 *)(param_2 + 0xc) = local_c;
  *(undefined4 *)(param_2 + 0x14) = local_4;
  *(undefined4 *)(param_2 + 0x10) = local_8;
  return;
}


