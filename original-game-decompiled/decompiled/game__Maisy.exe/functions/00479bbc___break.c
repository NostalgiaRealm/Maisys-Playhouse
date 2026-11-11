
/* ==== __break @ 00479bbc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bbc-00479bbc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


