
/* ==== __break @ 14021aeb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021aeb-14021aeb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


