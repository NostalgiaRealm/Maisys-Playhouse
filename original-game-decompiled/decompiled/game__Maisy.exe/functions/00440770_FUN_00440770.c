
/* ==== FUN_00440770 @ 00440770 ==== 
 * signature: undefined __fastcall FUN_00440770(int * param_1)
 * body: 00440770-004407cd
 */

void __fastcall FUN_00440770(int *param_1)

{
  char cVar1;
  
  FUN_004401e0(param_1,0x1000,'\x01');
  cVar1 = FUN_00440230(param_1,0x80);
  if (cVar1 != '\0') {
    cVar1 = FUN_00440230(param_1,0x800);
    FUN_00440d30(param_1,cVar1);
    cVar1 = FUN_00440230(param_1,2);
    if (cVar1 == '\0') {
      FUN_0043ff10(param_1);
    }
    FUN_004401e0(param_1,0x80,'\0');
  }
  FUN_0041ede0();
  return;
}


