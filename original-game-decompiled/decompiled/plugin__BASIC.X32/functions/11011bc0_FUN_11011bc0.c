
/* ==== FUN_11011bc0 @ 11011bc0 ==== 
 * signature: undefined __cdecl FUN_11011bc0(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11011bc0-11011c04
 */

void __cdecl FUN_11011bc0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = FUN_11011800(param_1,*param_3,&local_c,0xc);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0xc) = local_c;
    *(undefined4 *)(param_2 + 0x10) = local_8;
    *(undefined4 *)(param_2 + 0x14) = local_4;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


