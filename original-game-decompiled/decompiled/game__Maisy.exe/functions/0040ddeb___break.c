
/* ==== __break @ 0040ddeb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040ddeb-0040ddeb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


