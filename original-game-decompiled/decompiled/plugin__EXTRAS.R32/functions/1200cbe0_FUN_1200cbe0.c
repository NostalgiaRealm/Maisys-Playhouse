
/* ==== FUN_1200cbe0 @ 1200cbe0 ==== 
 * signature: undefined __fastcall FUN_1200cbe0(int param_1)
 * body: 1200cbe0-1200cc86
 */

void __fastcall FUN_1200cbe0(int param_1)

{
  void *this;
  longlong lVar1;
  
  this = *(void **)(param_1 + 0x6a);
  if (this != (void *)0x0) {
    FUN_12003900(this,*(undefined1 *)(param_1 + 0x16));
    if (*(char *)(param_1 + 0x17) != '\0') {
      FUN_12003910(this,*(char *)(param_1 + 0x17));
    }
    FUN_12003960(this,*(byte *)(param_1 + 0x18));
    lVar1 = FUN_1200cbc0();
    FUN_120039b0(this,(int)lVar1);
    lVar1 = FUN_1200cbc0();
    FUN_120039c0(this,(int)lVar1);
    FUN_120039d0(this,0,0);
    FUN_12003b00(this,0);
    FUN_12003b50(this,0,'\0');
    *(undefined1 *)(param_1 + 100) = 0;
    FUN_12003d60((int)this);
  }
  return;
}


