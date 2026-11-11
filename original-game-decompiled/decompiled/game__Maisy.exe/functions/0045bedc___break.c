
/* ==== __break @ 0045bedc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bedc-0045bedc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


