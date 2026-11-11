
/* ==== FUN_00481cd0 @ 00481cd0 ==== 
 * signature: undefined4 __fastcall FUN_00481cd0(int param_1)
 * body: 00481cd0-00481d1b
 */

undefined4 __fastcall FUN_00481cd0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x136) != -0x55aa5a5b) {
    return 0;
  }
  if (0x2000000 < *(uint *)(param_1 + 0x13a)) {
    return 0x20;
  }
  cVar1 = *(char *)(param_1 + 0x134);
  if ((((cVar1 != '\x01') && (cVar1 != '\t')) && (cVar1 != '\b')) &&
     (((cVar1 != '\a' && (cVar1 != '\x02')) && ((cVar1 != '\x03' && (cVar1 != '\x04')))))) {
    return 0x11;
  }
  return 0;
}


