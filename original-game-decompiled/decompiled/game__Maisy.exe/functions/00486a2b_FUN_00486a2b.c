
/* ==== FUN_00486a2b @ 00486a2b ==== 
 * signature: undefined __fastcall FUN_00486a2b(short param_1)
 * body: 00486a2b-00486a4c
 */

void __fastcall FUN_00486a2b(short param_1)

{
  int *in_EAX;
  int *piVar1;
  int unaff_EBP;
  
  if (param_1 == 0x40) {
    piVar1 = FUN_0043d880(*(int **)(unaff_EBP + 0xc),in_EAX,'\x01',1,(short *)0x0,'\x01');
    **(undefined4 **)(unaff_EBP + 0x10) = piVar1;
  }
  return;
}


