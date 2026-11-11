
/* ==== FUN_11004310 @ 11004310 ==== 
 * signature: undefined __cdecl FUN_11004310(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11004310-110043a9
 */

void __cdecl FUN_11004310(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  if ((*(short *)(param_3 + 3) == 2) || (*(short *)(param_3 + 3) == 3)) {
    cVar1 = FUN_11011800(param_1,*param_3,&local_14,0x14);
    if (cVar1 != '\0') {
      if (local_c != 0) {
        FUN_11011880(param_1,*param_3,local_c);
      }
      local_8 = 0;
      local_4 = FUN_11013fc0(param_1,*param_3);
      *(undefined4 *)(param_2 + 0x10) = local_10;
      *(undefined4 *)(param_2 + 0xc) = local_14;
      if (*(LPVOID *)(param_2 + 0x14) != (LPVOID)0x0) {
        FUN_11013d10(param_1,*(LPVOID *)(param_2 + 0x14));
      }
      *(undefined4 **)(param_2 + 0x14) = local_4;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  return;
}


