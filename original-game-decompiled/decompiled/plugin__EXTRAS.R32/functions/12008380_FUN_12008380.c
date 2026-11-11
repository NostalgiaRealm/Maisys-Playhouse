
/* ==== FUN_12008380 @ 12008380 ==== 
 * signature: undefined4 __cdecl FUN_12008380(undefined2 * param_1)
 * body: 12008380-1200841e
 */

undefined4 __cdecl FUN_12008380(undefined2 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int local_4;
  
  param_1[5] = 0x66;
  *(undefined4 *)(param_1 + 1) = 0x12e;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = 0x17;
  puVar1 = (undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_4);
  DAT_12039a9c = (*pcVar2)(local_4,puVar1,0x100);
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0x100;
    *(undefined1 *)*puVar1 = 0;
  }
  param_1[0xe] = 1;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return 0;
}


