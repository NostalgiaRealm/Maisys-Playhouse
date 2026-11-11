
/* ==== __break @ 0045beee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045beee-0045beee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


