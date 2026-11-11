
/* ==== FUN_12026da6 @ 12026da6 ==== 
 * signature: undefined __fastcall FUN_12026da6(undefined4 param_1, char * param_2, undefined4 param_3, undefined4 param_4, short * param_5, short * param_6)
 * body: 12026da6-12026da7
 */

void __fastcall
FUN_12026da6(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,short *param_5,
            short *param_6)

{
  uint in_EAX;
  int unaff_EDI;
  undefined2 in_CS;
  char in_SF;
  char in_OF;
  undefined4 unaff_retaddr;
  byte *pbVar1;
  short *in_stack_ffffffec;
  short *in_stack_fffffff0;
  undefined4 *in_stack_fffffff4;
  undefined4 *in_stack_fffffff8;
  undefined4 *in_stack_fffffffc;
  
  if (in_OF == in_SF) {
    *(uint *)(unaff_EDI + 2) = CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *param_2);
    pbVar1 = (byte *)CONCAT22((short)((uint)unaff_retaddr >> 0x10),in_CS);
    if (CARRY1((byte)in_CS,*pbVar1) || (byte)((byte)in_CS + *pbVar1) == '\0') {
      return;
    }
  }
  else {
    pbVar1 = (byte *)(in_EAX * 9 + 0x448b1c74);
    *pbVar1 = *pbVar1 | (byte)in_EAX;
    in_stack_fffffff4 = (undefined4 *)(in_EAX & 0xffffff04);
    in_stack_fffffffc = (undefined4 *)0x0;
    in_stack_fffffff8 = (undefined4 *)0x0;
    in_stack_ffffffec = param_6;
    in_stack_fffffff0 = param_5;
  }
  FUN_12027a70(in_stack_ffffffec,in_stack_fffffff0,in_stack_fffffff4,in_stack_fffffff8,
               in_stack_fffffffc);
  return;
}


