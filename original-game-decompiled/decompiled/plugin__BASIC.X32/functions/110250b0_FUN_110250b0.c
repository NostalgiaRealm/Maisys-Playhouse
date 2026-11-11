
/* ==== FUN_110250b0 @ 110250b0 ==== 
 * signature: undefined __cdecl FUN_110250b0(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 110250b0-110250e6
 */

void __cdecl FUN_110250b0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 local_2 [2];
  
  cVar1 = FUN_11011800(param_1,*param_3,local_2,2);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 0xc) = local_2[0];
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


