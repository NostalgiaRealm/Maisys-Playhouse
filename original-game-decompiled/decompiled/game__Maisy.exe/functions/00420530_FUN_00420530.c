
/* ==== FUN_00420530 @ 00420530 ==== 
 * signature: undefined __cdecl FUN_00420530(void * param_1, undefined4 * param_2, int param_3)
 * body: 00420530-0042057c
 */

void __cdecl FUN_00420530(void *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char local_40 [52];
  undefined4 local_c;
  int local_8;
  
  if (0 < param_3) {
    local_8 = param_3;
    do {
      FUN_0040e180(param_1,local_40,0x38);
      pcVar2 = local_40;
      puVar3 = param_2;
      for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      local_8 = local_8 + -1;
      *(undefined4 *)((int)param_2 + 0x32) = 0;
      *(undefined4 *)((int)param_2 + 0x36) = local_c;
      param_2 = (undefined4 *)((int)param_2 + 0x3a);
    } while (local_8 != 0);
  }
  return;
}


