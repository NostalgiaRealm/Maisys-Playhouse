
/* ==== __break @ 00479abc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479abc-00479abc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


