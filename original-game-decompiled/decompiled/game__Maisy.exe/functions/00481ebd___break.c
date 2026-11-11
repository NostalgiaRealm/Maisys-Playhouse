
/* ==== __break @ 00481ebd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481ebd-00481ebd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


