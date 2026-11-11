
/* ==== __break @ 004346fe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004346fe-004346fe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


