
/* ==== FUN_12011530 @ 12011530 ==== 
 * signature: undefined __fastcall FUN_12011530(int param_1)
 * body: 12011530-12011561
 */

void __fastcall FUN_12011530(int param_1)

{
  tagMSG local_1c;
  
  if (*(char *)(param_1 + 4) != '\0') {
    PeekMessageA(&local_1c,DAT_12039860,0x464,0x464,1);
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


