
/* ==== FUN_12011500 @ 12011500 ==== 
 * signature: undefined __fastcall FUN_12011500(int param_1)
 * body: 12011500-12011521
 */

void __fastcall FUN_12011500(int param_1)

{
  if (*(char *)(param_1 + 4) == '\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    PostMessageA(DAT_12039860,0x111,0x464,param_1);
  }
  return;
}


