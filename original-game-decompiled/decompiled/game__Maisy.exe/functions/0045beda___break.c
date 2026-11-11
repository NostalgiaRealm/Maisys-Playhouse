
/* ==== __break @ 0045beda ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045beda-0045beda
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


