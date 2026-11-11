
/* ==== __break @ 0041121c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041121c-0041121c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


