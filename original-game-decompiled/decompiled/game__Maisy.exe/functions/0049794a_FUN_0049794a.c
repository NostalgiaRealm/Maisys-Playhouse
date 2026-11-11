
/* ==== FUN_0049794a @ 0049794a ==== 
 * signature: uint __thiscall FUN_0049794a(void * this)
 * body: 0049794a-0049794b
 */

uint __thiscall FUN_0049794a(void *this)

{
  code *pcVar1;
  char cVar2;
  int in_EAX;
  char unaff_BL;
  uint unaff_ESI;
  uint uVar3;
  byte in_stack_0000002c;
  
  uVar3 = (uint)*(undefined6 *)(in_EAX + 0x49);
  cVar2 = (char)((uint)in_EAX >> 8) + (char)this;
  if (cVar2 < '\0') {
    (&stack0x00000000)[unaff_ESI * 2] = (&stack0x00000000)[unaff_ESI * 2] - (char)in_EAX;
  }
  else {
    cVar2 = cVar2 + unaff_BL;
    if (-1 < cVar2) {
      if (-1 < (char)(cVar2 + (char)((uint)this >> 8))) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      goto code_r0x004979a5;
    }
  }
  uVar3 = uVar3 & 0xfffffffb;
code_r0x004979a5:
  FUN_00497df0();
  if (((unaff_ESI & 0x10) != 0) && ((in_stack_0000002c & 0x20) != 0)) {
    uVar3 = uVar3 & 0xffffffef;
    FUN_00497df0();
  }
  return (uint)(uVar3 == 0);
}


