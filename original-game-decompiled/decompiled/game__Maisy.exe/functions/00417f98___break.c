
/* ==== __break @ 00417f98 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417f98-00417f98
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


