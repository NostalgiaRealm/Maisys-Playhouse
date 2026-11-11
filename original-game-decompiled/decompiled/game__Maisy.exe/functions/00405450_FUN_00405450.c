
/* ==== FUN_00405450 @ 00405450 ==== 
 * signature: undefined __fastcall FUN_00405450(int param_1)
 * body: 00405450-00405491
 */

void __fastcall FUN_00405450(int param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  if (*(char *)(param_1 + 0xa9) == '\0') {
    uVar1 = FUN_0042fe50(*(void **)(param_1 + 0x32),&local_10);
    if ((char)uVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x11c) = local_10;
      *(undefined4 *)(param_1 + 0x120) = local_c;
      *(undefined1 *)(param_1 + 0xb4) = local_8;
    }
  }
  return;
}


