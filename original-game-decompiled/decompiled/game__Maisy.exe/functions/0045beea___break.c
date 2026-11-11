
/* ==== __break @ 0045beea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045beea-0045beea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


