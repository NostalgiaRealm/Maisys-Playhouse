
/* ==== FUN_120114b0 @ 120114b0 ==== 
 * signature: undefined __fastcall FUN_120114b0(undefined4 * param_1)
 * body: 120114b0-120114f5
 */

void __fastcall FUN_120114b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_120356b8;
  DAT_120376b4 = DAT_120376b4 + -1;
  if ((DAT_120376b0 == '\x01') && (DAT_120376b4 == 0)) {
    DAT_120376b0 = '\0';
    DestroyWindow(DAT_12039860);
    UnregisterClassA(s_HSMsgClass_120376c4,DAT_12039864);
  }
  return;
}


