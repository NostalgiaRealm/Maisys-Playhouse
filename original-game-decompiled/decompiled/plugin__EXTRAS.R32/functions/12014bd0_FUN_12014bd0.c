
/* ==== FUN_12014bd0 @ 12014bd0 ==== 
 * signature: uint __cdecl FUN_12014bd0(int param_1, short * param_2, short * param_3)
 * body: 12014bd0-12014d48
 */

uint __cdecl FUN_12014bd0(int param_1,short *param_2,short *param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *local_10;
  DWORD local_c;
  int local_8;
  DWORD local_4;
  
  if ((param_3 == (short *)0x0) || (*param_3 != 1)) {
    return 0x40004;
  }
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    local_10 = (undefined1 *)0x0;
    local_c = 0;
    local_4 = 0;
    uVar2 = FUN_12004820(param_1,&local_4);
    if ((uVar2 == 0) && (*(DWORD *)(param_1 + 0x68) == local_4)) {
      uVar2 = 0xa0006;
      goto LAB_12014d09;
    }
    local_c = *(DWORD *)(param_3 + 1);
    iVar1 = local_c + 1;
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_8);
    DAT_12039a9c = (*pcVar3)(local_8,&local_10,iVar1);
    if (local_10 != (undefined1 *)0x0) {
      *local_10 = 0;
      uVar2 = FUN_12004730(param_1,&local_c,local_10);
      if (uVar2 == 0) {
        local_10[local_c] = 0;
        *param_2 = 0x66;
        *(undefined1 **)(param_2 + 7) = local_10;
        *(int *)(param_2 + 3) = iVar1;
        *(DWORD *)(param_2 + 5) = local_c;
        param_2[1] = -1;
        param_2[2] = -1;
      }
      else {
        pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_8);
        DAT_12039a9c = (*pcVar3)(local_8,local_10);
      }
      goto LAB_12014d09;
    }
  }
  uVar2 = 0xa0003;
LAB_12014d09:
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
  return uVar2;
}


