
/* ==== FUN_12014a80 @ 12014a80 ==== 
 * signature: undefined __cdecl FUN_12014a80(int param_1, short * param_2)
 * body: 12014a80-12014b9e
 */

void __cdecl FUN_12014a80(int param_1,short *param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  DWORD local_c;
  DWORD local_8;
  int local_4;
  
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    uVar2 = FUN_12004820(param_1,&local_8);
    if (uVar2 == 0) {
      local_c = *(DWORD *)(param_1 + 0x68);
      if (local_8 == local_c) {
        uVar2 = 0xa0006;
      }
      else {
        *param_2 = 0x66;
        local_c = local_8 - local_c;
        piVar1 = (int *)(param_2 + 7);
        param_2[1] = -1;
        param_2[2] = -1;
        *piVar1 = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        if (local_c != 0xffffffff && -1 < (int)(local_c + 1)) {
          pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_4);
          DAT_12039a9c = (*pcVar3)(local_4,piVar1,local_c + 1);
          if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
            *(DWORD *)(param_2 + 3) = local_c + 1;
            *(undefined1 *)*piVar1 = 0;
          }
        }
        uVar2 = FUN_12004730(param_1,&local_c,(LPVOID)*piVar1);
        *(undefined1 *)(*piVar1 + local_c) = 0;
        *(DWORD *)(param_2 + 5) = local_c;
      }
    }
  }
  else {
    uVar2 = 0xa0003;
  }
  if (((uVar2 & 0xffff0000) == 0xa0000) && (*param_2 != 0x66)) {
    *param_2 = 0x66;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[1] = -1;
    param_2[2] = -1;
    param_2[7] = 0;
    param_2[8] = 0;
  }
  return;
}


