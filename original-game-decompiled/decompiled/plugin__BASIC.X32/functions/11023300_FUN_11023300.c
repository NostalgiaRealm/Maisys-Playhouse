
/* ==== FUN_11023300 @ 11023300 ==== 
 * signature: undefined __cdecl FUN_11023300(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11023300-1102333d
 */

void __cdecl FUN_11023300(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = FUN_11011800(param_1,*param_3,&local_8,8);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0xc) = local_8;
    *(undefined4 *)(param_2 + 0x10) = local_4;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


