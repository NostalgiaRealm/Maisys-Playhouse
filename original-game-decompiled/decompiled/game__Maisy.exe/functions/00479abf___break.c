
/* ==== __break @ 00479abf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479abf-00479abf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


