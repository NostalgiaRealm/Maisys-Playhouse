
/* ==== __break @ 004110d6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004110d6-004110d6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


