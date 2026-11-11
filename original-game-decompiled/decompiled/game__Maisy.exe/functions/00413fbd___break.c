
/* ==== __break @ 00413fbd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00413fbd-00413fbd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


