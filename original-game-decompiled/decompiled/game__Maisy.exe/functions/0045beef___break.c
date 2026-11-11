
/* ==== __break @ 0045beef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045beef-0045beef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


