
/* ==== FUN_11014510 @ 11014510 ==== 
 * signature: undefined FUN_11014510(void)
 * body: 11014510-11014582
 */

bool FUN_11014510(undefined4 param_1,undefined4 param_2,short *param_3,int *param_4)

{
  int iVar1;
  
  if (*param_3 == 0x898) {
    iVar1 = *param_4;
    *param_4 = iVar1 + 1;
    if ((int)*(short *)param_4[1] == iVar1 + 1) {
      *(undefined4 *)((short *)param_4[1] + 3) = *(undefined4 *)(param_3 + 3);
      *(undefined4 *)(param_4[1] + 10) = *(undefined4 *)(param_3 + 5);
      *(byte *)(param_4[1] + 2) = *(byte *)(param_4[1] + 2) | 1;
      *(byte *)(param_4[1] + 2) = *(byte *)(param_4[1] + 2) & 0xfd;
      *(undefined2 *)(param_4[1] + 4) = 0;
      *(undefined2 *)(param_4[1] + 0xe) = 5;
      *(undefined4 *)(param_4[1] + 0x10) = 0x6c;
      *(undefined1 *)(param_4 + 2) = 1;
      return (char)param_4[2] == '\0';
    }
  }
  return (char)param_4[2] == '\0';
}


