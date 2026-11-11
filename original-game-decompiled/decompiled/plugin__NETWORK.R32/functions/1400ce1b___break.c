
/* ==== __break @ 1400ce1b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400ce1b-1400ce1b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


