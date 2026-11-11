
/* ==== __break @ 0040202c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040202c-0040202c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


