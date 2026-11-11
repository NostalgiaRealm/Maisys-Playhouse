
/* ==== FUN_0045b530 @ 0045b530 ==== 
 * signature: undefined __fastcall FUN_0045b530(int param_1)
 * body: 0045b530-0045b594
 */

void __fastcall FUN_0045b530(int param_1)

{
  void *this;
  
  this = *(void **)(param_1 + 0x82);
  if (this != (void *)0x0) {
    if (*(char *)((int)this + 0xa4) != '\0') {
      FUN_00470bd0(DAT_004dc564);
      FUN_00408270(*(void **)(param_1 + 0x82));
      *(undefined1 *)(param_1 + 0x89) = 0;
      return;
    }
    *(undefined1 *)(param_1 + 0x86) = 1;
    *(undefined1 *)(param_1 + 0x89) = 1;
    FUN_00402f50(this,1,'\0');
    FUN_00409480(*(void **)(param_1 + 0x82),-1,-1);
  }
  return;
}


